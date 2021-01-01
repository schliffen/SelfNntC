#
#
#
import torch
import torch.onnx
import onnx
from onnx import optimizer, utils
from onnxsim import simplify

from modelUtils.mobileFaceNet import MobileFaceNet
from modelUtils.utils import convert_to_onnx


default_save_dir = "/home/ali/Projlab/Nist/ConversionOutputs/"
default_model_dir = "/home/ali/Projlab/Nist/Models/OnnxModels/"



if __name__ == '__main__':
    #
    w = 112
    h = 112
    c = 3
    ver = 1
    embedding = 200704
    dummy_input = torch.randn(1, c, w, h, requires_grad=True)
    onnxModelName = "sub_mobilefacenet_"+ str(ver) +".onnx"
    simpOnnxMdl = "sim_mobilefacenet_" + str(ver) +".onnx"
    onnxModelWeight = "/home/ali/Projlab/Nist/MobileFaceNet_Tutorial_Pytorch/Weights/MobileFace_Net.pt"
    #
    # pynet = SemiMobileFaceNet(10).cpu
    pynet = MobileFaceNet( embedding ).cpu()
    # pynet.load_state_dict( torch.load(onnxModelWeight) )
    pynet.eval()
    pynet(dummy_input)
    convert_to_onnx (pynet, default_model_dir + onnxModelName, w,h,c )



    # --
    onnx_model = onnx.load( default_model_dir +  onnxModelName )
    onnx.checker.check_model(onnx_model)
    onnx_model = onnx.shape_inference.infer_shapes(onnx_model)
    onnx.checker.check_model(onnx_model)
    print(onnx_model.graph.value_info[0])

    # lading model weights ---
    # onnx_model.load_state_dict( torch.load(onnxModelWeight) )

    # model_simp, check = simplify(onnx_model)

    # onnx.save(model_simp, default_model_dir + simpOnnxMdl )


    # optimized_model = utils.polish_model(model_simp)

    # optimized_model = optimizer.optimize(onnx_model, ["eliminate_nop_dropout"])
    # optimized_model = utils.polish_model(optimized_model)



    print('finished ... ')











