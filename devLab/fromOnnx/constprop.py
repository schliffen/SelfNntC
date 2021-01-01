import numpy as np
from collections import defaultdict
import math

__author__ = ""


class ConstPropState(object):
    def __init__(self, value=None, shape=None):
        assert type(shape) == tuple or shape is None
        self.value = value
        self.shape = shape
        
    def __str__(self):
        return "value: " + str(self.value) + " " + "shape: " + str(self.shape)

    def __repr__(self):
        return "value: " + repr(self.value) + " " + "shape: " + str(self.shape)

    def __iter__(self):
        return iter((self.value, self.shape))
            
    def __eq__(self, other):
        if type(self) != type(other):
            return False

        values = False
        if self.value is None and other.value is None:
            values = True
        elif type(self.value) == np.ndarray and type(other.value) == np.ndarray:
            values = (self.value == other.value).all()
            
        return self.shape == other.shape and values


class ConstImpl(object):
    def __call__(self, node, input_states):
        pass


class PoolImpl(ConstImpl):
    def __call__(self, node, input_states):
        attrs = node.attrs

        input_value, input_shape = input_states[0]
        out = ConstPropState(None, None)
        kernel = attrs["kernel_shape"]
        stride = attrs["strides"]
        pads = attrs.get("pads", (0, 0, 0, 0))
        if input_shape is not None:
            output_shape = list(input_shape)
            for num, dim in enumerate(input_shape[2:]):
                output_shape[num+2] = \
                    math.floor(((dim+pads[num]+pads[num+int(len(pads)/2)]) - kernel[num]) / stride[num] + 1)
                out = ConstPropState(None, tuple(output_shape))

        return {node.outputs[0]: out}


class TransposeImpl(ConstImpl):
    def __call__(self, node, input_states):
        permutations = node.attrs['perm']
        out = ConstPropState(None, None)
        
        input_state = input_states[0]
        if input_state.shape is not None:
            dummy_input = np.zeros(input_state.shape)
            if permutations:
                transposed = np.transpose(dummy_input, permutations)
            else:
                transposed = np.transpose(dummy_input)
                
            out = ConstPropState(None, transposed.shape)

        return {node.outputs[0]: out}


class KeepDimsImpl(ConstImpl):
    def __call__(self, node, input_states):
        input_value, input_shape = input_states[0]
        out = ConstPropState(None, None)
        if input_shape is not None:
            out = ConstPropState(None, input_shape)

        return {node.outputs[0]: out}


class SqueezeImpl(ConstImpl):
    def __call__(self, node, input_states):
        axes = node.attrs['axes']

        out = ConstPropState(None, None)
        data_value, data_shape = input_states[0]

        if data_value is None and data_shape is not None:
            data = np.zeros(data_shape)
        else:
            data = data_value

        if len(axes) == 1:
            axes = axes[0]
        else:
            axes = tuple(axes)

        if data is not None:
            res = np.squeeze(data, axis=axes)

        if data_value is not None:
            out = ConstPropState(res, res.shape)
        elif data_shape is not None:
            out = ConstPropState(None, res.shape)

        return {node.outputs[0]: out}


class UnsqueezeImpl(ConstImpl):
    def __call__(self, node, input_states):
        axes = node.attrs['axes']
 
        out = ConstPropState(None, None)
        data_state, data_shape = input_states[0]
            
        if data_state is None and data_shape is not None:
            data = np.zeros(data_shape)
        else:
            data = data_state

        if len(axes) == 1:
            axes = axes[0]
                
        if data is not None:
            res = np.expand_dims(data, axis=axes)
            
        if data_state is not None:
            out = ConstPropState(res, res.shape)
        elif data_shape is not None:
            out = ConstPropState(None, res.shape)

        return {node.outputs[0]: out}

class BNKeepDimsImpl(ConstImpl):
    def __call__(self, node, input_states):
        input_value, input_shape = input_states[0]
        out = ConstPropState(None, None)
        # if node.op_type == "BatchNormalization":

        if input_shape is not None:
                out = ConstPropState(None, input_shape)

        return {node.outputs[0]: out}


    
const_impls = {
    "MaxPool": PoolImpl(),
    "AveragePool": PoolImpl(),
    "Transpose": TransposeImpl(),
    "BatchNormalization": BNKeepDimsImpl(),
    "Clip": KeepDimsImpl(),
    "Squeeze": SqueezeImpl(),
    "Unsqueeze": UnsqueezeImpl(),
    "Softmax": KeepDimsImpl()
}


def constant_propagation(graph):
    """Identify constant values and shapes using constant propagation"""
    state_dict = defaultdict(ConstPropState)
    worklist = []

    for node in graph.nodes:
        worklist.append(node)
        for input_n, input_t in node.input_tensors.items():
            state_dict[input_n] = ConstPropState(input_t, input_t.shape)

    for input in graph.inputs:
        state_dict[input.name] = ConstPropState(None, input.shape)
    
    while worklist:
        node = worklist[0]
        worklist = worklist[1:]
        attrs = node.attrs
        changed = False
        
        if node.op_type in const_impls:
            input_states = []
            for input in node.inputs:
                found = False
                for inp in graph.inputs:
                    if inp.name == input:
                        tensor_shape = inp.shape
                        input_states.append(ConstPropState(None, tensor_shape))
                        found = True
                if found:
                    continue
                
                if input in node.input_tensors:
                    tensor_shape = tuple(node.input_tensors[input].shape)
                    input_states.append(ConstPropState(None, tensor_shape))
                else:
                    input_states.append(state_dict[input])
            #
            outputs = const_impls[node.op_type](node, input_states)

            # BN 1-d type name is as same as batch normalization but operations are different!
            # if node.op_type == "BatchNormalization" and len(state_dict[node.inputs[0]].shape) ==2:
            #     node.op_type == "BatchNormalization1d"

            changed = False
            for output in node.outputs:
                if state_dict[output] != outputs[output]:
                    state_dict[output] = outputs[output]
                    changed = True



        elif node.op_type == 'Shape':
            input = node.inputs[0]
            input_value, input_shape = state_dict[input]
            out = ConstPropState(None, None)
            if input_shape is not None:
                out = ConstPropState(np.array(input_shape), np.array(input_shape).shape)
            output = node.outputs[0]
            if state_dict[output] != out:
                changed = True
                state_dict[output] = out

        elif node.op_type == 'Cast':
            input = node.inputs[0]
            input_state = state_dict[input]
            output_state = ConstPropState(None, None)
            if input_state is not None:
                output_state = input_state
            output = node.outputs[0]
            if state_dict[output] != output_state:
                changed = True
                state_dict[output] = output_state

        elif node.op_type == 'MatMul':
            _, input_shape1 = state_dict[node.inputs[0]]
            _, input_shape2 = state_dict[node.inputs[1]]
            out = ConstPropState(None, None)
            
            if input_shape1 is not None and input_shape2 is not None:
                input1 = np.zeros(input_shape1)
                input2 = np.zeros(input_shape2)

                res = np.matmul(input1, input2)
                out = ConstPropState(None, res.shape)
                
            output = node.outputs[0]
            if state_dict[output] != out:
                changed = True
                state_dict[output] = out

        elif node.op_type == 'Add':
            out = ConstPropState(None, None)
            res = None
            for inp in node.inputs:
                inp_val, inp_shape = state_dict[inp]
                if inp_shape is not None:
                    dummy_inp = np.zeros(inp_shape)
                    if res is None:
                        res = dummy_inp
                    else:
                        res = res + dummy_inp
                else:
                    res = None
                    break

            if res is not None:
                out = ConstPropState(None, res.shape)
            
            output = node.outputs[0]
            if state_dict[output] != out:
                changed = True
                state_dict[output] = out

        elif node.op_type == 'Constant':
            out = ConstPropState(attrs['value'], attrs['value'].shape)
            output = node.outputs[0]
            
            if out != state_dict[output]:
                state_dict[output] = out
                changed = True
    
        elif node.op_type == 'Gather':
            data = node.inputs[0]
            indices = node.inputs[1]
            axis = attrs['axis']
            
            data_state, data_shape = state_dict[data]
            index_state, index_shape = state_dict[indices]

            def calc(data, index):
                y = np.take(data, index, axis=axis)
                return y

            out = ConstPropState(None, None)
            if data_state is not None and index_state is not None:
                res = calc(data_state, index_state)
                out = ConstPropState(res, res.shape)
            elif index_state is not None and data_shape is not None:
                dummy_data = np.zeros(data_shape)
                res = calc(dummy_data, index_state)
                out = ConstPropState(None, res.shape)

            o = node.outputs[0]
            if out != state_dict[o]:
                state_dict[o] = out
                changed = True
            
        elif node.op_type == 'Concat':
            axis = attrs['axis']

            input_states = []
            input_shapes = []
            for i in node.inputs:
                input_states.append(state_dict[i].value)
                input_shapes.append(state_dict[i].shape)
        
            out = ConstPropState(None, input_shapes[0] if None not in input_shapes else None)

            # TODO: Is this first case even possible? If not, remove it!
            if None not in input_states:
                res = np.concatenate(input_states, axis=axis)
                out = ConstPropState(res, res.shape)
            else:
                dummy_inputs = [np.zeros(shape) for shape in input_shapes]
                res = np.concatenate(dummy_inputs, axis=axis)
                # TODO: Should the value of 'out' be something different than 'None'?
                out = ConstPropState(None, res.shape)
                
            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True

        elif node.op_type == 'Reshape':
            input_data_shape = state_dict[node.inputs[0]].shape
            new_shape = state_dict[node.inputs[1]].value

            out = ConstPropState(None, None)

            if input_data_shape is not None and new_shape is not None:
                new_shape_tmp = np.copy(new_shape)
                zeros_index = np.where(new_shape == 0)
                new_shape_tmp[zeros_index] = np.array(input_data_shape)[zeros_index]

                data = np.zeros(input_data_shape)
                res = np.reshape(data, new_shape_tmp)
                out = ConstPropState(None, res.shape)
            
            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True

        elif node.op_type == 'Gemm':
            input_shape = state_dict[node.inputs[0]].shape
            out = ConstPropState(None, None)

            matrix_shape = state_dict[node.inputs[1]].shape
            
            if input_shape is not None:
                out = ConstPropState(None, (input_shape[0], matrix_shape[0]))

            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True
                
        elif node.op_type == "Relu":
            input_shape = state_dict[node.inputs[0]].shape
            out = ConstPropState(None, input_shape)

            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True
    
        elif node.op_type == "Transpose":

            input_shape = state_dict[node.inputs[0]].shape
            out = ConstPropState(None, None)
            if input_shape is not None:
                input = state_dict[node.inputs[0]].value
                has_input = True
                if input is None:
                    has_input = False
                    input = np.zeros(tuple(input_shape))

            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True

        elif node.op_type == "ReduceL2":
            # todo: extendin the norm property to support other axes
            axes = attrs['axes']
            keepdim = attrs['keepdims']
            input_shape = list(state_dict[node.inputs[0]].shape)

            if keepdim == 1:
                # the norm will taken over all axes and dims
                input_shape[axes[0]] = 1
                out = ConstPropState(None, tuple(input_shape))

            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True

        elif node.op_type == "Div":
            # this is the division of vector by an scalar
            input_shape = state_dict[node.inputs[0]].shape
            out = ConstPropState(None, input_shape)
            #
            if state_dict[node.outputs[0]] != out:
                state_dict[node.outputs[0]] = out
                changed = True

        else:
            # raise Exception ("ConstProp: Unhandled op {}".format(node.op_type))
            print("ConstProp: Unhandled op {} (layer: {}) using shape "
                  "information from onnx shape_dict".format(node.op_type, node.name))

            changed = False
            for o in node.outputs:
                out = ConstPropState(None, None)
                if o in graph.shape_dict:
                    out = ConstPropState(None, graph.shape_dict[o])
                if out != state_dict[o]:
                    changed = True
                    state_dict[o] = out
        
        if changed:
            for child in node.children:
                if child not in worklist:
                    worklist.append(child)
        
    return state_dict
