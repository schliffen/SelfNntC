#
#
#
import torch
import torch.onnx


def convert_to_onnx(detect_model, modelName, w=112,h=112, ch=3):
    dummy_input = torch.randn(1, ch, w, h, requires_grad=True)
    torch.onnx.export(detect_model.cpu(),  # model being run
                      dummy_input,  # model input (or a tuple for multiple inputs)
                      modelName,
                      # where to save the model (can be a file or file-like object)
                      export_params=True,  # store the trained parameter weights inside the model file
                      opset_version=10,  # the ONNX version to export the model to
                      do_constant_folding=True,  # whether to execute constant folding for optimization
                      input_names=['data'],  # the model's input names
                      output_names=['output'],  # the model's output names
                      # dynamic_axes={'input': {0: 'batch_size'},  # variable lenght axes
                      #              'output': {0: 'batch_size'}}
                      )
