#
#
#
import torch
import torch.onnx
import onnx
from onnx import optimizer, utils
from onnxsim import simplify

from modelUtils.lenet import SemiMobileFaceNet, sublenet
from modelUtils.utils import convert_to_onnx


default_save_dir = "/home/ali/ProjLAB/Nist/ConversionOutputs/"
default_model_dir = "/home/ali/ProjLAB/Nist/Models/OnnxModels/"



if __name__ == '__main__':
    #
    dummy_input = torch.randn(1, 3, 112, 112, requires_grad=True)
    onnxModelName = "sub_lenet_001.onnx"
    #
    # pynet = SemiMobileFaceNet(10).cpu
    pynet = sublenet().cpu()
    pynet.eval()
    pynet(dummy_input)
    convert_to_onnx (pynet, default_model_dir + onnxModelName )



    # --
    onnx_model = onnx.load( default_model_dir +  onnxModelName )
    onnx.checker.check_model(onnx_model)
    onnx_model = onnx.shape_inference.infer_shapes(onnx_model)
    onnx.checker.check_model(onnx_model)
    print(onnx_model.graph.value_info[0])

    model_simp, check = simplify(onnx_model)

    # optimized_model = utils.polish_model(model_simp)

    optimized_model = optimizer.optimize(onnx_model, ["eliminate_nop_dropout"])
    optimized_model = utils.polish_model(optimized_model)



    print('finished ... ')











