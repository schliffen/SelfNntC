#
#
#

from torch.nn import Linear, Conv2d, BatchNorm1d, BatchNorm2d, PReLU, ReLU, Sigmoid, Dropout2d, Dropout, AvgPool2d, MaxPool2d, AdaptiveAvgPool2d, Sequential, Module, Parameter
from torch import nn
import torch
import math

class Flatten(Module):
    def forward(self, input):
        return input.view(input.size(0), -1)

class Conv_block(Module):
    def __init__(self, in_c, out_c, kernel=(1, 1), stride=(1, 1), padding=(0, 0), groups=1):
        super(Conv_block, self).__init__()
        self.conv = Conv2d(in_c, out_channels=out_c, kernel_size=kernel, groups=groups, stride=stride, padding=padding, bias=False)
        self.bn = BatchNorm2d(out_c)
        self.prelu = PReLU(out_c)

    def forward(self, x):
        x = self.conv(x)
        x = self.bn(x)
        x = self.prelu(x)
        return x

class SemiMobileFaceNet(Module):
    def __init__(self, embedding_size):
        super(SemiMobileFaceNet, self).__init__()
        #self.conv1 = Conv_block(3, 64, kernel=(3, 3), stride=(2, 2), padding=(1, 1) )
        self.conv = Conv2d(3, out_channels=8, kernel_size=(20,20), groups=1, stride=(5,5), padding=(0,0), bias=False)
        self.bn2d = BatchNorm2d(8)
        self.prelu = PReLU(8)
        self.conv_6_flatten = Flatten()
        self.linear = Linear(2888, embedding_size, bias=False)
        self.bn1d = BatchNorm1d(embedding_size)

    def forward(self, x):
        out = self.conv(x)
        out = self.bn2d(out)
        out = self.prelu(out)
        out = self.conv_6_flatten(out)
        out = self.linear(out)
        out = self.bn1d(out)
        return out


class sublenet(Module):
    def __init__(self):
        super(sublenet, self).__init__()
        #self.conv1 = Conv_block(3, 64, kernel=(3, 3), stride=(2, 2), padding=(1, 1) )
        self.conv = Conv2d(3, 6, kernel_size=(5, 5))
        self.relu1 = ReLU()
        self.pool = MaxPool2d(kernel_size=(2, 2), stride=2)
        self.flatten = Flatten()

    def forward(self, x):
        out = self.conv(x)
        # out = self.bn2d(out)
        out = self.relu1(out)
        out = self.flatten(out)
        # out = self.linear(out)
        # out = self.bn1d(out)
        # out = self.pool(out)
        return out
