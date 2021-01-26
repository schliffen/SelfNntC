#
#
#


from mxnet.contrib import onnx as onnx_mxnet
from onnx import checker
import mxnet as mx
import numpy as np
import argparse
import onnx
import os

print('mxnet version:', mx.__version__)
print('onnx version:', onnx.__version__)






if __name__ == '__main__':
    # First, the symbol and the param files.
    sym = "/home/ali/Projlab/Nist/Models/mxnet/model-y1-test2/model-symbol.json"
    params = "/home/ali/Projlab/Nist/Models/mxnet/model-y1-test2/model-0000.params"

    # Then, the standard Imagenet input - 3 channels, 122*122
    input_shape = (1, 3, 112, 112)
    print('input-shape:', input_shape)

    # Finally, the path of the ouput file.
    onnx_file = './mxnet_mobfacenet.onnx'

    # We are now ready to call the export function and actually convert the model.
    converted_model = onnx_mxnet.export_model(sym, params, [input_shape], np.float32, onnx_file)

    # load onnx model
    model_proto = onnx.load_model(converted_model)

    # check is converted onnx protobuf is valid
    checker.check_graph(model_proto.graph)
    # if you don't get any error message, it means that everything was executed correctly.