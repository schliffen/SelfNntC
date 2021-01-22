#ifndef NETWORK_INITIALIZATION_H
#define NETWORK_INITIALIZATION_H
#include <stdlib.h>
#include <stdint.h>
#include "ai-cnn/parameters.h"

void initialize_network();

fp_t*** kernels;
fp_t** biases;
// Layer: Conv_0, Operation: Conv
// Inputs
// (8, 3, 3, 3)
fp_t **buffer_588;
// (8,)
fp_t *buffer_589;
// Outputs
// (1, 8, 320, 320)
fp_t **buffer_587;


// Layer: LeakyRelu_1, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 320, 320)
fp_t **buffer_303;


// Layer: Conv_2, Operation: Conv
// Inputs
// (8, 1, 3, 3)
fp_t **buffer_591;
// (8,)
fp_t *buffer_592;
// Outputs
// (1, 8, 320, 320)
fp_t **buffer_590;


// Layer: LeakyRelu_3, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 320, 320)
fp_t **buffer_306;


// Layer: Conv_4, Operation: Conv
// Inputs
// (16, 8, 1, 1)
fp_t **buffer_594;
// (16,)
fp_t *buffer_595;
// Outputs
// (1, 16, 320, 320)
fp_t **buffer_593;


// Layer: LeakyRelu_5, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 320, 320)
fp_t **buffer_309;


// Layer: Conv_6, Operation: Conv
// Inputs
// (16, 1, 3, 3)
fp_t **buffer_597;
// (16,)
fp_t *buffer_598;
// Outputs
// (1, 16, 160, 160)
fp_t **buffer_596;


// Layer: LeakyRelu_7, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 160, 160)
fp_t **buffer_312;


// Layer: Conv_8, Operation: Conv
// Inputs
// (32, 16, 1, 1)
fp_t **buffer_600;
// (32,)
fp_t *buffer_601;
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_599;


// Layer: LeakyRelu_9, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_315;


// Layer: Conv_10, Operation: Conv
// Inputs
// (32, 1, 3, 3)
fp_t **buffer_603;
// (32,)
fp_t *buffer_604;
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_602;


// Layer: LeakyRelu_11, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_318;


// Layer: Conv_12, Operation: Conv
// Inputs
// (32, 32, 1, 1)
fp_t **buffer_606;
// (32,)
fp_t *buffer_607;
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_605;


// Layer: LeakyRelu_13, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
fp_t **buffer_321;


// Layer: Conv_14, Operation: Conv
// Inputs
// (32, 1, 3, 3)
fp_t **buffer_609;
// (32,)
fp_t *buffer_610;
// Outputs
// (1, 32, 80, 80)
fp_t **buffer_608;


// Layer: LeakyRelu_15, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
fp_t **buffer_324;


// Layer: Conv_16, Operation: Conv
// Inputs
// (64, 32, 1, 1)
fp_t **buffer_612;
// (64,)
fp_t *buffer_613;
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_611;


// Layer: LeakyRelu_17, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_327;


// Layer: Conv_18, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **buffer_615;
// (64,)
fp_t *buffer_616;
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_614;


// Layer: LeakyRelu_19, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_330;


// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 64, 1, 1)
fp_t **buffer_618;
// (64,)
fp_t *buffer_619;
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_617;


// Layer: LeakyRelu_21, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_333;


// Layer: Conv_22, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **buffer_621;
// (64,)
fp_t *buffer_622;
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_620;


// Layer: LeakyRelu_23, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_336;


// Layer: Conv_24, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **buffer_624;
// (128,)
fp_t *buffer_625;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_623;


// Layer: LeakyRelu_25, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_339;


// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_627;
// (128,)
fp_t *buffer_628;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_626;


// Layer: LeakyRelu_27, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_342;


// Layer: Conv_28, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **buffer_630;
// (128,)
fp_t *buffer_631;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_629;


// Layer: LeakyRelu_29, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_345;


// Layer: Conv_30, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_633;
// (128,)
fp_t *buffer_634;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_632;


// Layer: LeakyRelu_31, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_348;


// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **buffer_636;
// (128,)
fp_t *buffer_637;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_635;


// Layer: LeakyRelu_33, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_351;


// Layer: Conv_34, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_639;
// (128,)
fp_t *buffer_640;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_638;


// Layer: LeakyRelu_35, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_354;


// Layer: Conv_36, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **buffer_642;
// (128,)
fp_t *buffer_643;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_641;


// Layer: LeakyRelu_37, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_357;


// Layer: Conv_38, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_645;
// (128,)
fp_t *buffer_646;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_644;


// Layer: LeakyRelu_39, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_360;


// Layer: Conv_40, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **buffer_648;
// (128,)
fp_t *buffer_649;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_647;


// Layer: LeakyRelu_41, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_363;


// Layer: Conv_42, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_651;
// (128,)
fp_t *buffer_652;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_650;


// Layer: LeakyRelu_43, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_366;


// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **buffer_654;
// (128,)
fp_t *buffer_655;
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_653;


// Layer: LeakyRelu_45, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
fp_t **buffer_369;


// Layer: Conv_46, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **buffer_657;
// (128,)
fp_t *buffer_658;
// Outputs
// (1, 128, 20, 20)
fp_t **buffer_656;


// Layer: LeakyRelu_47, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **buffer_372;


// Layer: Conv_48, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **buffer_660;
// (256,)
fp_t *buffer_661;
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_659;


// Layer: LeakyRelu_49, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_375;


// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **buffer_663;
// (256,)
fp_t *buffer_664;
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_662;


// Layer: LeakyRelu_51, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_378;


// Layer: Conv_52, Operation: Conv
// Inputs
// (256, 256, 1, 1)
fp_t **buffer_666;
// (256,)
fp_t *buffer_667;
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_665;


// Layer: LeakyRelu_53, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
fp_t **buffer_381;


// Layer: Conv_54, Operation: Conv
// Inputs
// (64, 64, 1, 1)
fp_t **buffer_669;
// (64,)
fp_t *buffer_670;
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_668;


// Layer: LeakyRelu_55, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_384;


// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **buffer_672;
// (64,)
fp_t *buffer_673;
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_671;


// Layer: LeakyRelu_57, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_387;


// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 256, 1, 1)
fp_t **buffer_675;
// (64,)
fp_t *buffer_676;
// Outputs
// (1, 64, 20, 20)
fp_t **buffer_674;


// Layer: LeakyRelu_59, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **buffer_390;


// Layer: Upsample_76, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_407;


// Layer: Add_77, Operation: Add
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_408;


// Layer: Conv_78, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_678;
// (64,)
fp_t *buffer_679;
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_677;


// Layer: LeakyRelu_79, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_411;


// Layer: Upsample_96, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_428;


// Layer: Add_97, Operation: Add
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_429;


// Layer: Conv_98, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **buffer_681;
// (64,)
fp_t *buffer_682;
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_680;


// Layer: LeakyRelu_99, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_432;


// Layer: Conv_100, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **buffer_684;
// (32,)
fp_t *buffer_685;
// Outputs
// (1, 32, 80, 80)
fp_t **buffer_683;


// Layer: Conv_101, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **buffer_687;
// (16,)
fp_t *buffer_688;
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_686;


// Layer: LeakyRelu_102, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_437;


// Layer: Conv_103, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_690;
// (16,)
fp_t *buffer_691;
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_689;


// Layer: Conv_104, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_693;
// (16,)
fp_t *buffer_694;
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_692;


// Layer: LeakyRelu_105, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_442;


// Layer: Conv_106, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_696;
// (16,)
fp_t *buffer_697;
// Outputs
// (1, 16, 80, 80)
fp_t **buffer_695;


// Layer: Concat_107, Operation: Concat
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_445;


// Layer: Relu_108, Operation: Relu
// Inputs
// Outputs
// (1, 64, 80, 80)
fp_t **buffer_446;


// Layer: Conv_109, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **buffer_699;
// (32,)
fp_t *buffer_700;
// Outputs
// (1, 32, 40, 40)
fp_t **buffer_698;


// Layer: Conv_110, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **buffer_702;
// (16,)
fp_t *buffer_703;
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_701;


// Layer: LeakyRelu_111, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_451;


// Layer: Conv_112, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_705;
// (16,)
fp_t *buffer_706;
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_704;


// Layer: Conv_113, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_708;
// (16,)
fp_t *buffer_709;
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_707;


// Layer: LeakyRelu_114, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_456;


// Layer: Conv_115, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_711;
// (16,)
fp_t *buffer_712;
// Outputs
// (1, 16, 40, 40)
fp_t **buffer_710;


// Layer: Concat_116, Operation: Concat
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_459;


// Layer: Relu_117, Operation: Relu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **buffer_460;


// Layer: Conv_118, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **buffer_714;
// (32,)
fp_t *buffer_715;
// Outputs
// (1, 32, 20, 20)
fp_t **buffer_713;


// Layer: Conv_119, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **buffer_717;
// (16,)
fp_t *buffer_718;
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_716;


// Layer: LeakyRelu_120, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_465;


// Layer: Conv_121, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_720;
// (16,)
fp_t *buffer_721;
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_719;


// Layer: Conv_122, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_723;
// (16,)
fp_t *buffer_724;
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_722;


// Layer: LeakyRelu_123, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_470;


// Layer: Conv_124, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **buffer_726;
// (16,)
fp_t *buffer_727;
// Outputs
// (1, 16, 20, 20)
fp_t **buffer_725;


// Layer: Concat_125, Operation: Concat
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **buffer_473;


// Layer: Relu_126, Operation: Relu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **buffer_474;


// Layer: Conv_127, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **buffer_289;
// (8,)
fp_t *buffer_290;
// Outputs
// (1, 8, 80, 80)
fp_t **buffer_475;


// Layer: Transpose_128, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 8)
fp_t **buffer_476;


// Layer: Reshape_134, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 4)
fp_t **buffer_486;


// Layer: Conv_135, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **buffer_291;
// (8,)
fp_t *buffer_292;
// Outputs
// (1, 8, 40, 40)
fp_t **buffer_487;


// Layer: Transpose_136, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 8)
fp_t **buffer_488;


// Layer: Reshape_142, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 4)
fp_t **buffer_498;


// Layer: Conv_143, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **buffer_293;
// (8,)
fp_t *buffer_294;
// Outputs
// (1, 8, 20, 20)
fp_t **buffer_499;


// Layer: Transpose_144, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 8)
fp_t **buffer_500;


// Layer: Reshape_150, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 4)
fp_t **buffer_510;


// Layer: Concat_151, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 4)
fp_t **output_output0;


// Layer: Conv_152, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **buffer_283;
// (4,)
fp_t *buffer_284;
// Outputs
// (1, 4, 80, 80)
fp_t **buffer_512;


// Layer: Transpose_153, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 4)
fp_t **buffer_513;


// Layer: Reshape_159, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 2)
fp_t **buffer_523;


// Layer: Conv_160, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **buffer_285;
// (4,)
fp_t *buffer_286;
// Outputs
// (1, 4, 40, 40)
fp_t **buffer_524;


// Layer: Transpose_161, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 4)
fp_t **buffer_525;


// Layer: Reshape_167, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 2)
fp_t **buffer_535;


// Layer: Conv_168, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **buffer_287;
// (4,)
fp_t *buffer_288;
// Outputs
// (1, 4, 20, 20)
fp_t **buffer_536;


// Layer: Transpose_169, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 4)
fp_t **buffer_537;


// Layer: Reshape_175, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 2)
fp_t **buffer_547;


// Layer: Concat_176, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 2)
fp_t **buffer_548;


// Layer: Conv_177, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **buffer_295;
// (20,)
fp_t *buffer_296;
// Outputs
// (1, 20, 80, 80)
fp_t **buffer_549;


// Layer: Transpose_178, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 20)
fp_t **buffer_550;


// Layer: Reshape_184, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 10)
fp_t **buffer_560;


// Layer: Conv_185, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **buffer_297;
// (20,)
fp_t *buffer_298;
// Outputs
// (1, 20, 40, 40)
fp_t **buffer_561;


// Layer: Transpose_186, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 20)
fp_t **buffer_562;


// Layer: Reshape_192, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 10)
fp_t **buffer_572;


// Layer: Conv_193, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **buffer_299;
// (20,)
fp_t *buffer_300;
// Outputs
// (1, 20, 20, 20)
fp_t **buffer_573;


// Layer: Transpose_194, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 20)
fp_t **buffer_574;


// Layer: Reshape_200, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 10)
fp_t **buffer_584;


// Layer: Concat_201, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 10)
fp_t **output_585;


// Layer: Softmax_202, Operation: Softmax
// Inputs
// Outputs
// (1, 16800, 2)
fp_t **output_586;


#endif //NETWORK_INITIALIZATION_H
