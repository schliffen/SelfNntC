#ifndef NETWORK_INITIALIZATION_H
#define NETWORK_INITIALIZATION_H
#include <stdlib.h>
#include <stdint.h>
#include "ai-cnn/parameters.h"

void mbfc025_initialize_network();

fp_t*** mbfc025_kernels;
fp_t** mbfc025_biases;
// Layer: Conv_0, Operation: Conv
// Inputs
// (8, 3, 3, 3)
fp_t **mbfc025_buffer_588;
// (8,)
fp_t *mbfc025_buffer_589;
// Outputs
// (1, 8, 160, 160)
fp_t **mbfc025_buffer_587;


// Layer: LeakyRelu_1, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 160, 160)
fp_t **mbfc025_buffer_303;


// Layer: Conv_2, Operation: Conv
// Inputs
// (8, 1, 3, 3)
fp_t **mbfc025_buffer_591;
// (8,)
fp_t *mbfc025_buffer_592;
// Outputs
// (1, 8, 160, 160)
fp_t **mbfc025_buffer_590;


// Layer: LeakyRelu_3, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 160, 160)
fp_t **mbfc025_buffer_306;


// Layer: Conv_4, Operation: Conv
// Inputs
// (16, 8, 1, 1)
fp_t **mbfc025_buffer_594;
// (16,)
fp_t *mbfc025_buffer_595;
// Outputs
// (1, 16, 160, 160)
fp_t **mbfc025_buffer_593;


// Layer: LeakyRelu_5, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 160, 160)
fp_t **mbfc025_buffer_309;


// Layer: Conv_6, Operation: Conv
// Inputs
// (16, 1, 3, 3)
fp_t **mbfc025_buffer_597;
// (16,)
fp_t *mbfc025_buffer_598;
// Outputs
// (1, 16, 80, 80)
fp_t **mbfc025_buffer_596;


// Layer: LeakyRelu_7, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
fp_t **mbfc025_buffer_312;


// Layer: Conv_8, Operation: Conv
// Inputs
// (32, 16, 1, 1)
fp_t **mbfc025_buffer_600;
// (32,)
fp_t *mbfc025_buffer_601;
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_599;


// Layer: LeakyRelu_9, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_315;


// Layer: Conv_10, Operation: Conv
// Inputs
// (32, 1, 3, 3)
fp_t **mbfc025_buffer_603;
// (32,)
fp_t *mbfc025_buffer_604;
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_602;


// Layer: LeakyRelu_11, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_318;


// Layer: Conv_12, Operation: Conv
// Inputs
// (32, 32, 1, 1)
fp_t **mbfc025_buffer_606;
// (32,)
fp_t *mbfc025_buffer_607;
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_605;


// Layer: LeakyRelu_13, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
fp_t **mbfc025_buffer_321;


// Layer: Conv_14, Operation: Conv
// Inputs
// (32, 1, 3, 3)
fp_t **mbfc025_buffer_609;
// (32,)
fp_t *mbfc025_buffer_610;
// Outputs
// (1, 32, 40, 40)
fp_t **mbfc025_buffer_608;


// Layer: LeakyRelu_15, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 40, 40)
fp_t **mbfc025_buffer_324;


// Layer: Conv_16, Operation: Conv
// Inputs
// (64, 32, 1, 1)
fp_t **mbfc025_buffer_612;
// (64,)
fp_t *mbfc025_buffer_613;
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_611;


// Layer: LeakyRelu_17, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_327;


// Layer: Conv_18, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **mbfc025_buffer_615;
// (64,)
fp_t *mbfc025_buffer_616;
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_614;


// Layer: LeakyRelu_19, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_330;


// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 64, 1, 1)
fp_t **mbfc025_buffer_618;
// (64,)
fp_t *mbfc025_buffer_619;
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_617;


// Layer: LeakyRelu_21, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_333;


// Layer: Conv_22, Operation: Conv
// Inputs
// (64, 1, 3, 3)
fp_t **mbfc025_buffer_621;
// (64,)
fp_t *mbfc025_buffer_622;
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_620;


// Layer: LeakyRelu_23, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_336;


// Layer: Conv_24, Operation: Conv
// Inputs
// (128, 64, 1, 1)
fp_t **mbfc025_buffer_624;
// (128,)
fp_t *mbfc025_buffer_625;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_623;


// Layer: LeakyRelu_25, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_339;


// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_627;
// (128,)
fp_t *mbfc025_buffer_628;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_626;


// Layer: LeakyRelu_27, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_342;


// Layer: Conv_28, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **mbfc025_buffer_630;
// (128,)
fp_t *mbfc025_buffer_631;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_629;


// Layer: LeakyRelu_29, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_345;


// Layer: Conv_30, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_633;
// (128,)
fp_t *mbfc025_buffer_634;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_632;


// Layer: LeakyRelu_31, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_348;


// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **mbfc025_buffer_636;
// (128,)
fp_t *mbfc025_buffer_637;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_635;


// Layer: LeakyRelu_33, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_351;


// Layer: Conv_34, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_639;
// (128,)
fp_t *mbfc025_buffer_640;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_638;


// Layer: LeakyRelu_35, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_354;


// Layer: Conv_36, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **mbfc025_buffer_642;
// (128,)
fp_t *mbfc025_buffer_643;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_641;


// Layer: LeakyRelu_37, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_357;


// Layer: Conv_38, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_645;
// (128,)
fp_t *mbfc025_buffer_646;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_644;


// Layer: LeakyRelu_39, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_360;


// Layer: Conv_40, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **mbfc025_buffer_648;
// (128,)
fp_t *mbfc025_buffer_649;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_647;


// Layer: LeakyRelu_41, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_363;


// Layer: Conv_42, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_651;
// (128,)
fp_t *mbfc025_buffer_652;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_650;


// Layer: LeakyRelu_43, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_366;


// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 128, 1, 1)
fp_t **mbfc025_buffer_654;
// (128,)
fp_t *mbfc025_buffer_655;
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_653;


// Layer: LeakyRelu_45, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
fp_t **mbfc025_buffer_369;


// Layer: Conv_46, Operation: Conv
// Inputs
// (128, 1, 3, 3)
fp_t **mbfc025_buffer_657;
// (128,)
fp_t *mbfc025_buffer_658;
// Outputs
// (1, 128, 10, 10)
fp_t **mbfc025_buffer_656;


// Layer: LeakyRelu_47, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 10, 10)
fp_t **mbfc025_buffer_372;


// Layer: Conv_48, Operation: Conv
// Inputs
// (256, 128, 1, 1)
fp_t **mbfc025_buffer_660;
// (256,)
fp_t *mbfc025_buffer_661;
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_659;


// Layer: LeakyRelu_49, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_375;


// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 1, 3, 3)
fp_t **mbfc025_buffer_663;
// (256,)
fp_t *mbfc025_buffer_664;
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_662;


// Layer: LeakyRelu_51, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_378;


// Layer: Conv_52, Operation: Conv
// Inputs
// (256, 256, 1, 1)
fp_t **mbfc025_buffer_666;
// (256,)
fp_t *mbfc025_buffer_667;
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_665;


// Layer: LeakyRelu_53, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
fp_t **mbfc025_buffer_381;


// Layer: Conv_54, Operation: Conv
// Inputs
// (64, 64, 1, 1)
fp_t **mbfc025_buffer_669;
// (64,)
fp_t *mbfc025_buffer_670;
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_668;


// Layer: LeakyRelu_55, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_384;


// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 128, 1, 1)
fp_t **mbfc025_buffer_672;
// (64,)
fp_t *mbfc025_buffer_673;
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_671;


// Layer: LeakyRelu_57, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_387;


// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 256, 1, 1)
fp_t **mbfc025_buffer_675;
// (64,)
fp_t *mbfc025_buffer_676;
// Outputs
// (1, 64, 10, 10)
fp_t **mbfc025_buffer_674;


// Layer: LeakyRelu_59, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 10, 10)
fp_t **mbfc025_buffer_390;


// Layer: Upsample_76, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_407;


// Layer: Add_77, Operation: Add
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_408;


// Layer: Conv_78, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **mbfc025_buffer_678;
// (64,)
fp_t *mbfc025_buffer_679;
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_677;


// Layer: LeakyRelu_79, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_411;


// Layer: Upsample_96, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_428;


// Layer: Add_97, Operation: Add
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_429;


// Layer: Conv_98, Operation: Conv
// Inputs
// (64, 64, 3, 3)
fp_t **mbfc025_buffer_681;
// (64,)
fp_t *mbfc025_buffer_682;
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_680;


// Layer: LeakyRelu_99, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_432;


// Layer: Conv_100, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **mbfc025_buffer_684;
// (32,)
fp_t *mbfc025_buffer_685;
// Outputs
// (1, 32, 40, 40)
fp_t **mbfc025_buffer_683;


// Layer: Conv_101, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **mbfc025_buffer_687;
// (16,)
fp_t *mbfc025_buffer_688;
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_686;


// Layer: LeakyRelu_102, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_437;


// Layer: Conv_103, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_690;
// (16,)
fp_t *mbfc025_buffer_691;
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_689;


// Layer: Conv_104, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_693;
// (16,)
fp_t *mbfc025_buffer_694;
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_692;


// Layer: LeakyRelu_105, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_442;


// Layer: Conv_106, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_696;
// (16,)
fp_t *mbfc025_buffer_697;
// Outputs
// (1, 16, 40, 40)
fp_t **mbfc025_buffer_695;


// Layer: Concat_107, Operation: Concat
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_445;


// Layer: Relu_108, Operation: Relu
// Inputs
// Outputs
// (1, 64, 40, 40)
fp_t **mbfc025_buffer_446;


// Layer: Conv_109, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **mbfc025_buffer_699;
// (32,)
fp_t *mbfc025_buffer_700;
// Outputs
// (1, 32, 20, 20)
fp_t **mbfc025_buffer_698;


// Layer: Conv_110, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **mbfc025_buffer_702;
// (16,)
fp_t *mbfc025_buffer_703;
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_701;


// Layer: LeakyRelu_111, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_451;


// Layer: Conv_112, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_705;
// (16,)
fp_t *mbfc025_buffer_706;
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_704;


// Layer: Conv_113, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_708;
// (16,)
fp_t *mbfc025_buffer_709;
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_707;


// Layer: LeakyRelu_114, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_456;


// Layer: Conv_115, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_711;
// (16,)
fp_t *mbfc025_buffer_712;
// Outputs
// (1, 16, 20, 20)
fp_t **mbfc025_buffer_710;


// Layer: Concat_116, Operation: Concat
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_459;


// Layer: Relu_117, Operation: Relu
// Inputs
// Outputs
// (1, 64, 20, 20)
fp_t **mbfc025_buffer_460;


// Layer: Conv_118, Operation: Conv
// Inputs
// (32, 64, 3, 3)
fp_t **mbfc025_buffer_714;
// (32,)
fp_t *mbfc025_buffer_715;
// Outputs
// (1, 32, 10, 10)
fp_t **mbfc025_buffer_713;


// Layer: Conv_119, Operation: Conv
// Inputs
// (16, 64, 3, 3)
fp_t **mbfc025_buffer_717;
// (16,)
fp_t *mbfc025_buffer_718;
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_716;


// Layer: LeakyRelu_120, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_465;


// Layer: Conv_121, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_720;
// (16,)
fp_t *mbfc025_buffer_721;
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_719;


// Layer: Conv_122, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_723;
// (16,)
fp_t *mbfc025_buffer_724;
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_722;


// Layer: LeakyRelu_123, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_470;


// Layer: Conv_124, Operation: Conv
// Inputs
// (16, 16, 3, 3)
fp_t **mbfc025_buffer_726;
// (16,)
fp_t *mbfc025_buffer_727;
// Outputs
// (1, 16, 10, 10)
fp_t **mbfc025_buffer_725;


// Layer: Concat_125, Operation: Concat
// Inputs
// Outputs
// (1, 64, 10, 10)
fp_t **mbfc025_buffer_473;


// Layer: Relu_126, Operation: Relu
// Inputs
// Outputs
// (1, 64, 10, 10)
fp_t **mbfc025_buffer_474;


// Layer: Conv_127, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **mbfc025_buffer_289;
// (8,)
fp_t *mbfc025_buffer_290;
// Outputs
// (1, 8, 40, 40)
fp_t **mbfc025_buffer_475;


// Layer: Transpose_128, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 8)
fp_t **mbfc025_buffer_476;


// Layer: Reshape_134, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 4)
fp_t **mbfc025_buffer_486;


// Layer: Conv_135, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **mbfc025_buffer_291;
// (8,)
fp_t *mbfc025_buffer_292;
// Outputs
// (1, 8, 20, 20)
fp_t **mbfc025_buffer_487;


// Layer: Transpose_136, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 8)
fp_t **mbfc025_buffer_488;


// Layer: Reshape_142, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 4)
fp_t **mbfc025_buffer_498;


// Layer: Conv_143, Operation: Conv
// Inputs
// (8, 64, 1, 1)
fp_t **mbfc025_buffer_293;
// (8,)
fp_t *mbfc025_buffer_294;
// Outputs
// (1, 8, 10, 10)
fp_t **mbfc025_buffer_499;


// Layer: Transpose_144, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 8)
fp_t **mbfc025_buffer_500;


// Layer: Reshape_150, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 4)
fp_t **mbfc025_buffer_510;


// Layer: Concat_151, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 4)
fp_t **mbfc025_output_output0;


// Layer: Conv_152, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **mbfc025_buffer_283;
// (4,)
fp_t *mbfc025_buffer_284;
// Outputs
// (1, 4, 40, 40)
fp_t **mbfc025_buffer_512;


// Layer: Transpose_153, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 4)
fp_t **mbfc025_buffer_513;


// Layer: Reshape_159, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 2)
fp_t **mbfc025_buffer_523;


// Layer: Conv_160, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **mbfc025_buffer_285;
// (4,)
fp_t *mbfc025_buffer_286;
// Outputs
// (1, 4, 20, 20)
fp_t **mbfc025_buffer_524;


// Layer: Transpose_161, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 4)
fp_t **mbfc025_buffer_525;


// Layer: Reshape_167, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 2)
fp_t **mbfc025_buffer_535;


// Layer: Conv_168, Operation: Conv
// Inputs
// (4, 64, 1, 1)
fp_t **mbfc025_buffer_287;
// (4,)
fp_t *mbfc025_buffer_288;
// Outputs
// (1, 4, 10, 10)
fp_t **mbfc025_buffer_536;


// Layer: Transpose_169, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 4)
fp_t **mbfc025_buffer_537;


// Layer: Reshape_175, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 2)
fp_t **mbfc025_buffer_547;


// Layer: Concat_176, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 2)
fp_t **mbfc025_buffer_548;


// Layer: Conv_177, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **mbfc025_buffer_295;
// (20,)
fp_t *mbfc025_buffer_296;
// Outputs
// (1, 20, 40, 40)
fp_t **mbfc025_buffer_549;


// Layer: Transpose_178, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 20)
fp_t **mbfc025_buffer_550;


// Layer: Reshape_184, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 10)
fp_t **mbfc025_buffer_560;


// Layer: Conv_185, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **mbfc025_buffer_297;
// (20,)
fp_t *mbfc025_buffer_298;
// Outputs
// (1, 20, 20, 20)
fp_t **mbfc025_buffer_561;


// Layer: Transpose_186, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 20)
fp_t **mbfc025_buffer_562;


// Layer: Reshape_192, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 10)
fp_t **mbfc025_buffer_572;


// Layer: Conv_193, Operation: Conv
// Inputs
// (20, 64, 1, 1)
fp_t **mbfc025_buffer_299;
// (20,)
fp_t *mbfc025_buffer_300;
// Outputs
// (1, 20, 10, 10)
fp_t **mbfc025_buffer_573;


// Layer: Transpose_194, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 20)
fp_t **mbfc025_buffer_574;


// Layer: Reshape_200, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 10)
fp_t **mbfc025_buffer_584;


// Layer: Concat_201, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 10)
fp_t **mbfc025_output_585;


// Layer: Softmax_202, Operation: Softmax
// Inputs
// Outputs
// (1, 4200, 2)
fp_t **mbfc025_output_586;


#endif //NETWORK_INITIALIZATION_H
