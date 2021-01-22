#
#
#
#
#
#
import numpy as np
import torch
import onnx
from torch.nn import ReLU, PReLU, BatchNorm1d


def myprelu(input, weight = .25):
    for i in range(input.shape[0]):
        input[i] = input[i] if input[i] >=0 else weight * input[i]

    return input



if __name__ == '__main__':


    # testing relu

    relu = ReLU()
    prelu = PReLU()
    td1 =  np.array([9.,11.,-4.,-5.,-9.,-4.,-7., 5., 0., 7.])

    res_relu = relu(torch.Tensor(td1))
    res_prelu = prelu(torch.Tensor(td1))
    myrelu = myprelu(td1)


    print( "orig ", np.array(td1) )
    print( "relu ", res_relu.detach().numpy() )
    print( "prelu ", res_prelu.detach().numpy() )
    print( "my relu ", myrelu )






    print('finished!')
