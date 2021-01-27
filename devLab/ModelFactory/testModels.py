#
#
#
import os
import numpy as np

import onnx
import onnxruntime
from onnxsim import simplify
import cv2
import struct


def get_feature_extraction(session, input_data):

    input_name = session.get_inputs()[0].name
    label_name = session.get_outputs()[0].name

    prediction = session.run([label_name], {input_name: input_data.astype( np.float32)})

    # print(prediction)
    for i in range(prediction[0].shape[1]):
        print(prediction[0][0][i])

    # writing reference input for auto comparison
    refinput_header = "FCI\n"

    # converting reference input to binary
    refinput_packed_file = []

    # appending num channels, height and width
    refinput_packed_file.append( struct.pack('{}s'.format(len(refinput_header)), bytes(refinput_header, "ascii")) )
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[1]))
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[2]))
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[3]))

    for i in range(input_data.shape[1]):
        for j in range(input_data.shape[2]):
            # for k in range(input_data.shape[3]):
            refinput_packed_file.append( struct.pack('f'*len(input_data[0][i][j,:]), *input_data[0][i][j,:]) )



    # refinput_header


    with open(os.path.join(default_save_dir, reference_input+ str(w) + "_" + str(h)  + ".bin"), "wb") as f:
        for packed_struct in refinput_packed_file:
            f.write(packed_struct)

    # Saving the model output for comparison
    # writing reference input for auto comparison
    # output 1
    refoutput_header = "FCO\n"

    # converting reference input to binary
    refoutput_packed_file = []

    # appending num channels, height and width
    refoutput_packed_file.append( struct.pack('{}s'.format(len(refoutput_header)), bytes(refoutput_header, "ascii")) )
    refoutput_packed_file.append( struct.pack( 'i', prediction[0].shape[1]))
    # refoutput_packed_file.append( struct.pack( 'i', prediction[0].shape[2]))
    # refinput_packed_file.append( struct.pack( 'i', prediction.shape[3]))


    # f = prediction[0].shape
    # b = struct.pack('f'*len(f), *f)
    refoutput_packed_file.append( struct.pack('f'*len(prediction[0][0,:]), *prediction[0][0,:]) )

    with open(reference_output, "wb") as file:
        for packed_struct in refoutput_packed_file:
            file.write( packed_struct )

def get_detector_output(session, input_data):
    input_name = session.get_inputs()[0].name
    label_name_0 = session.get_outputs()[0].name
    label_name_1 = session.get_outputs()[1].name
    label_name_2 = session.get_outputs()[2].name

    loc, conf, landms = session.run([label_name_0, label_name_1, label_name_2], {input_name: input_data.astype( np.float32)})
    #

    # writing reference input for auto comparison
    refinput_header = "FCI\n"

    # converting reference input to binary
    refinput_packed_file = []

    # appending num channels, height and width
    refinput_packed_file.append( struct.pack('{}s'.format(len(refinput_header)), bytes(refinput_header, "ascii")) )
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[1]))
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[2]))
    refinput_packed_file.append( struct.pack( 'i', input_data.shape[3]))

    # writing the input
    for i in range(input_data.shape[1]):
        for j in range(input_data.shape[2]):
            # for k in range(input_data.shape[3]):
            refinput_packed_file.append( struct.pack('f'*len(input_data[0][i][j,:]), *input_data[0][i][j,:]) )
    #
    with open(os.path.join(default_save_dir, reference_input+ str(w) + "_" + str(h)  + ".bin"), "wb") as f:
        for packed_struct in refinput_packed_file:
            f.write(packed_struct)

    #
    #
    # # Saving the model output for comparison
    # # writing reference input for auto comparison
    refoutput_header = "FCO\n"
    #
    # # converting reference input to binary
    refoutput_packed_file = []
    #
    # # appending num channels, height and width
    refoutput_packed_file.append( struct.pack('{}s'.format(len(refoutput_header)), bytes(refoutput_header, "ascii")) )
    refoutput_packed_file.append( struct.pack( 'i', conf[0].shape[0]))
    refoutput_packed_file.append( struct.pack( 'i', conf[0].shape[1]))
    # refinput_packed_file.append( struct.pack( 'i', loc.shape[3]))
    #
    #
    # # f = prediction[0].shape
    # # b = struct.pack('f'*len(f), *f)

    for i in range(conf[0].shape[0]):
        refoutput_packed_file.append( struct.pack('f'*len(conf[0][i,:]), *conf[0][i,:]) )
    #
    with open(os.path.join(default_save_dir, reference_output + "conf.bin"), "wb") as file:
        for packed_struct in refoutput_packed_file:
            file.write( packed_struct )


    # for i in range(landms[0].shape[0]):
    #         refoutput_packed_file.append( struct.pack('f'*len(landms[0][i,:]), *landms[0][i,:]) )
    # #
    # with open(os.path.join(default_save_dir, reference_output + "landm.bin"), "wb") as file:
    #     for packed_struct in refoutput_packed_file:
    #         file.write( packed_struct )




if __name__ == '__main__':

    w = 640
    h = 640
    c = 3
    ver = 1
    #
    default_save_dir = "/home/ali/Projlab/Nist/ConversionOutputs/"
    default_model_dir = "/home/ali/Projlab/Nist/Models/OnnxModels/"

    # onnxModelName = "sub_lenet_4.onnx"
    # simponnxmdlName = "sub_mobilefacenet_" + str(ver) +".onnx"
    simponnxmdlName =  "FaceDetector.onnx"
    # simponnxmdlName =  "insight-face-v3.onnx"
    # simponnxmdlName =  "super_resolution.onnx"
    reference_output = "detection_output_"
    reference_input = "detection_mbnet025_"

    # onnx_model = onnx.load( default_model_dir +  onnxModelName )
    # onnx.checker.check_model(onnx_model)
    # onnx_model = onnx.shape_inference.infer_shapes(onnx_model)
    # onnx.checker.check_model(onnx_model)
    # print(onnx_model.graph.value_info[0])

    # model_simp, check = simplify(onnx_model)

    # onnx.save(model_simp, default_model_dir + simponnxmdlName)

    #
    # read reference input
    # ref img path
    imgPath = "/home/ali/Projlab/Nist/ModelAnalysis/images/S001-02-t10_01.ppm"
    img = np.float32( cv2.imread( imgPath ))

    img -= (104, 117, 123)
    # input_data = np.expand_dims(img.transpose(2,0,1), axis=0)
    input_data = np.expand_dims(cv2.resize(img, (w, h)).transpose(2,0,1), axis=0)
    #

    # img = np.random.randn(1,3,112,112)

    # for i in range(img.shape[2]):
    #     for j in range(img.shape[3]):
    #         for k in range(img.shape[1]):
    #             print( img[0][k,j,i])

    # input_data = np.array([[[[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.]], [[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.]], [[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.],[1.,2.,1.,0.]]]])

    # input_data = np.random.randn( 1,c,w,h)

    session = onnxruntime.InferenceSession(default_model_dir + simponnxmdlName)

    get_detector_output(session, input_data)

    get_feature_extraction(session, input_data)


    print('finished! ')