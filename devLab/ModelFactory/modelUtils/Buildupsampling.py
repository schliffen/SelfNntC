#
#
#
import numpy as np
import time
import torch
import torch.nn as nn
import torchvision.models._utils as _utils
import torchvision.models as models
import torch.nn.functional as F


def get_neighbour(i,j, scale_h, scale_w):

    ii = int( np.floor(i/scale_h))
    jj = int(np.floor(j/scale_w))

    return ii, jj

def nearstNbr(input, size, scale = 1):


    upscl_h = size[0]
    upscl_w = size[1]

    scale_h = int(size[0]/input.shape[2])
    scale_w = int(size[1]/input.shape[3])


    # new_arr = np.zeros((1, input.shape[1], upscl_h, upscl_w))

    new_arr = torch.zeros(size=(1,input.shape[1], upscl_h, upscl_w))

    for c in range(new_arr.shape[1]):
        for i in range(upscl_h):
            for j in range(upscl_w):
                # get i,j and find the neigbours
                new_i, new_j = get_neighbour (i,j, scale_h, scale_w)

                new_arr[0, c, i, j] = input[0][c, new_i, new_j]

    return  new_arr


# global averagepooling



class TestModel_1(nn.Module):
    def __init__(self):
        super(TestModel_1,self).__init__()

        leaky = 0.1

        self.conv1 = nn.Conv2d(3, 3, 4, 4, padding=0, bias=False)
        self.bn1 =  nn.BatchNorm2d(3)
        self.conv2 = nn.Conv2d(3, 3, 1, 1, padding=0, bias=False)
        self.bn2 =  nn.BatchNorm2d(3)
        self.leakyrelu = nn.LeakyReLU(negative_slope=leaky, inplace=True)
        self.relu = nn.ReLU(inplace=True)
        self.relu6 = nn.ReLU6( inplace=True)


    def forward(self, input):

        out1 = self.conv1(input)
        out1 = self.bn1(out1)
        out1 = self.relu(out1)

        out2 = self.conv2(input)
        out2 = self.bn2(out2)
        out2 = self.relu6(out2)
        #
        up3 = F.interpolate(out1,  size=[out2.size(2), out2.size(3)], mode="nearest")
        out = out2 + up3

        return out

class TestModel_2(nn.Module):
    def __init__(self):
        super(TestModel_2, self).__init__()
        leaky = 0.1
        self.conv1 = nn.Conv2d(3, 4, 4, 4, padding=0, bias=False)
        self.bn1 =  nn.BatchNorm2d(4)
        self.conv2 = nn.Conv2d(3, 4, 1, 1, padding=0, bias=False)
        self.bn2 =  nn.BatchNorm2d(4)
        self.leakyrelu = nn.LeakyReLU(negative_slope=leaky, inplace=True)
        self.relu = nn.ReLU(inplace=True)
        self.relu6 = nn.ReLU6( inplace=True)




    def forward(self, x):
        x1 = self.conv1(x)
        x1= self.bn1(x1)
        x1= self.relu(x1)

        y = self.conv2(x)
        y= self.bn2(y)
        y= self.relu6(y)



        up4 = F.interpolate(x1, size=[4, 4], mode='nearest')
        #
        # up3 = nearstNbr(x1, size=[y.shape[2], y.shape[3]] ) # this is nearest neighbour implementation

        out = up4 + y


        return out






if __name__ == '__main__':
    ch = 3
    w = 8
    h = 8

    # input = torch.arange(1, 5, dtype=torch.float32).view(1, 1, 2, 2)
    # m = nn.Upsample(scale_factor=2, mode='nearest')
    # m(input)
    # my implementation
    # input1 = np.random.rand(1, 3, 2,2)
    # myup = nearstNbr(input1, [4,4])
    # print( myup)






    input1 = torch.rand( size=(1, ch, w, h))
    input2 = torch.rand( size=(1, ch, w, h))

    model = TestModel_1()

    # input = [input1, input2]

    model.forward( input1 )

    # save model to control
    model_path = "/home/ali/Projlab/Nist/Models/OnnxModels/"
    dummy_input = torch.randn(1, 3, w, h, requires_grad=True)
    torch.onnx.export(model.cpu(),  # model being run
                      dummy_input,  # model input (or a tuple for multiple inputs)
                      model_path + "dummeModel.onnx",
                      # where to save the model (can be a file or file-like object)
                      export_params=True,  # store the trained parameter weights inside the model file
                      opset_version=10,  # the ONNX version to export the model to
                      do_constant_folding=True,  # whether to execute constant folding for optimization
                      input_names=['data'],  # the model's input names
                      output_names=['output'],  # the model's output names
                      # dynamic_axes={'input': {0: 'batch_size'},  # variable lenght axes
                      #              'output': {0: 'batch_size'}}
                      )



