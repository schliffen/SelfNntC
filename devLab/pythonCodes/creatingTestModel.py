#
#
#
import torch
import torch.onnx
import onnx
from onnx import optimizer, utils
from onnxsim import simplify

from modelUtils.lenet import SemiMobileFaceNet
from modelUtils.utils import convert_to_onnx


if __name__ == '__main__':
    #
    dummy_input = torch.randn(1, 3, 112, 112, requires_grad=True)
    #
    pynet = SemiMobileFaceNet(10).cpu()
    pynet.eval()
    pynet(dummy_input)
    convert_to_onnx (pynet)



    # --
    onnx_model = onnx.load( "/home/ali/ProjLAB/Nist/modelConversion/OnnxModels/super_sampmodel.onnx" )
    onnx.checker.check_model(onnx_model)
    onnx_model = onnx.shape_inference.infer_shapes(onnx_model)
    onnx.checker.check_model(onnx_model)
    print(onnx_model.graph.value_info[0])

    model_simp, check = simplify(onnx_model)

    # optimized_model = utils.polish_model(model_simp)

    optimized_model = optimizer.optimize(onnx_model, ["eliminate_nop_dropout"])
    optimized_model = utils.polish_model(optimized_model)



    print('finished ... ')











