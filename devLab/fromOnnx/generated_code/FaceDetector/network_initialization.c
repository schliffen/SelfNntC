#include "network_initialization.h"

void initialize_network() {

kernels = (fp_t***) malloc(56 * sizeof(fp_t**));
biases = (fp_t**) malloc(56 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (8, 3, 3, 3)
buffer_588 = (fp_t**) malloc(24 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 24; kernel++){
    buffer_588[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[0] = buffer_588;


// (8,)
buffer_589 = (fp_t*) malloc(8 * sizeof(fp_t));



biases[0] = buffer_589;


// Outputs
// (1, 8, 320, 320)
buffer_587 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_587[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: LeakyRelu_1, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 320, 320)
buffer_303 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_303[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: Conv_2, Operation: Conv
// Inputs
// (8, 1, 3, 3)
buffer_591 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8; kernel++){
    buffer_591[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[1] = buffer_591;


// (8,)
buffer_592 = (fp_t*) malloc(8 * sizeof(fp_t));



biases[1] = buffer_592;


// Outputs
// (1, 8, 320, 320)
buffer_590 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_590[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: LeakyRelu_3, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 320, 320)
buffer_306 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_306[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: Conv_4, Operation: Conv
// Inputs
// (16, 8, 1, 1)
buffer_594 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_594[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[2] = buffer_594;


// (16,)
buffer_595 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[2] = buffer_595;


// Outputs
// (1, 16, 320, 320)
buffer_593 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_593[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: LeakyRelu_5, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 320, 320)
buffer_309 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_309[output] = (fp_t*) malloc(320*320 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (16, 1, 3, 3)
buffer_597 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16; kernel++){
    buffer_597[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[3] = buffer_597;


// (16,)
buffer_598 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[3] = buffer_598;


// Outputs
// (1, 16, 160, 160)
buffer_596 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_596[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_7, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 160, 160)
buffer_312 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_312[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_8, Operation: Conv
// Inputs
// (32, 16, 1, 1)
buffer_600 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_600[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[4] = buffer_600;


// (32,)
buffer_601 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[4] = buffer_601;


// Outputs
// (1, 32, 160, 160)
buffer_599 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_599[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_9, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
buffer_315 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_315[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_10, Operation: Conv
// Inputs
// (32, 1, 3, 3)
buffer_603 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32; kernel++){
    buffer_603[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[5] = buffer_603;


// (32,)
buffer_604 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[5] = buffer_604;


// Outputs
// (1, 32, 160, 160)
buffer_602 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_602[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_11, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
buffer_318 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_318[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_12, Operation: Conv
// Inputs
// (32, 32, 1, 1)
buffer_606 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    buffer_606[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[6] = buffer_606;


// (32,)
buffer_607 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[6] = buffer_607;


// Outputs
// (1, 32, 160, 160)
buffer_605 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_605[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_13, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 160, 160)
buffer_321 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_321[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_14, Operation: Conv
// Inputs
// (32, 1, 3, 3)
buffer_609 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32; kernel++){
    buffer_609[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[7] = buffer_609;


// (32,)
buffer_610 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[7] = buffer_610;


// Outputs
// (1, 32, 80, 80)
buffer_608 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_608[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_15, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
buffer_324 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_324[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_16, Operation: Conv
// Inputs
// (64, 32, 1, 1)
buffer_612 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    buffer_612[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[8] = buffer_612;


// (64,)
buffer_613 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[8] = buffer_613;


// Outputs
// (1, 64, 80, 80)
buffer_611 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_611[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_17, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_327 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_327[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_18, Operation: Conv
// Inputs
// (64, 1, 3, 3)
buffer_615 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_615[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[9] = buffer_615;


// (64,)
buffer_616 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[9] = buffer_616;


// Outputs
// (1, 64, 80, 80)
buffer_614 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_614[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_19, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_330 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_330[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 64, 1, 1)
buffer_618 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_618[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[10] = buffer_618;


// (64,)
buffer_619 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[10] = buffer_619;


// Outputs
// (1, 64, 80, 80)
buffer_617 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_617[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_21, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_333 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_333[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_22, Operation: Conv
// Inputs
// (64, 1, 3, 3)
buffer_621 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    buffer_621[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[11] = buffer_621;


// (64,)
buffer_622 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[11] = buffer_622;


// Outputs
// (1, 64, 40, 40)
buffer_620 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_620[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_23, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_336 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_336[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_24, Operation: Conv
// Inputs
// (128, 64, 1, 1)
buffer_624 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_624[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[12] = buffer_624;


// (128,)
buffer_625 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[12] = buffer_625;


// Outputs
// (1, 128, 40, 40)
buffer_623 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_623[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_25, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_339 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_339[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_627 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_627[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[13] = buffer_627;


// (128,)
buffer_628 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[13] = buffer_628;


// Outputs
// (1, 128, 40, 40)
buffer_626 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_626[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_27, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_342 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_342[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_28, Operation: Conv
// Inputs
// (128, 128, 1, 1)
buffer_630 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_630[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[14] = buffer_630;


// (128,)
buffer_631 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[14] = buffer_631;


// Outputs
// (1, 128, 40, 40)
buffer_629 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_629[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_29, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_345 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_345[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_30, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_633 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_633[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[15] = buffer_633;


// (128,)
buffer_634 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[15] = buffer_634;


// Outputs
// (1, 128, 40, 40)
buffer_632 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_632[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_31, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_348 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_348[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 128, 1, 1)
buffer_636 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_636[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[16] = buffer_636;


// (128,)
buffer_637 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[16] = buffer_637;


// Outputs
// (1, 128, 40, 40)
buffer_635 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_635[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_33, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_351 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_351[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_34, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_639 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_639[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[17] = buffer_639;


// (128,)
buffer_640 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[17] = buffer_640;


// Outputs
// (1, 128, 40, 40)
buffer_638 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_638[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_35, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_354 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_354[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_36, Operation: Conv
// Inputs
// (128, 128, 1, 1)
buffer_642 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_642[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[18] = buffer_642;


// (128,)
buffer_643 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[18] = buffer_643;


// Outputs
// (1, 128, 40, 40)
buffer_641 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_641[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_37, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_357 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_357[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_38, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_645 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_645[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[19] = buffer_645;


// (128,)
buffer_646 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[19] = buffer_646;


// Outputs
// (1, 128, 40, 40)
buffer_644 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_644[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_39, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_360 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_360[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_40, Operation: Conv
// Inputs
// (128, 128, 1, 1)
buffer_648 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_648[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[20] = buffer_648;


// (128,)
buffer_649 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[20] = buffer_649;


// Outputs
// (1, 128, 40, 40)
buffer_647 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_647[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_41, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_363 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_363[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_42, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_651 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_651[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[21] = buffer_651;


// (128,)
buffer_652 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[21] = buffer_652;


// Outputs
// (1, 128, 40, 40)
buffer_650 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_650[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_43, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_366 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_366[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 128, 1, 1)
buffer_654 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_654[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[22] = buffer_654;


// (128,)
buffer_655 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[22] = buffer_655;


// Outputs
// (1, 128, 40, 40)
buffer_653 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_653[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_45, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 40, 40)
buffer_369 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_369[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_46, Operation: Conv
// Inputs
// (128, 1, 3, 3)
buffer_657 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    buffer_657[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[23] = buffer_657;


// (128,)
buffer_658 = (fp_t*) malloc(128 * sizeof(fp_t));



biases[23] = buffer_658;


// Outputs
// (1, 128, 20, 20)
buffer_656 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_656[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_47, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
buffer_372 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    buffer_372[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_48, Operation: Conv
// Inputs
// (256, 128, 1, 1)
buffer_660 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    buffer_660[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[24] = buffer_660;


// (256,)
buffer_661 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[24] = buffer_661;


// Outputs
// (1, 256, 20, 20)
buffer_659 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_659[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_49, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
buffer_375 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_375[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 1, 3, 3)
buffer_663 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_663[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[25] = buffer_663;


// (256,)
buffer_664 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[25] = buffer_664;


// Outputs
// (1, 256, 20, 20)
buffer_662 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_662[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_51, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
buffer_378 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_378[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_52, Operation: Conv
// Inputs
// (256, 256, 1, 1)
buffer_666 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    buffer_666[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[26] = buffer_666;


// (256,)
buffer_667 = (fp_t*) malloc(256 * sizeof(fp_t));



biases[26] = buffer_667;


// Outputs
// (1, 256, 20, 20)
buffer_665 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_665[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_53, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 20, 20)
buffer_381 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    buffer_381[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_54, Operation: Conv
// Inputs
// (64, 64, 1, 1)
buffer_669 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_669[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[27] = buffer_669;


// (64,)
buffer_670 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[27] = buffer_670;


// Outputs
// (1, 64, 80, 80)
buffer_668 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_668[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_55, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_384 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_384[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 128, 1, 1)
buffer_672 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    buffer_672[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[28] = buffer_672;


// (64,)
buffer_673 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[28] = buffer_673;


// Outputs
// (1, 64, 40, 40)
buffer_671 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_671[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_57, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_387 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_387[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 256, 1, 1)
buffer_675 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    buffer_675[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[29] = buffer_675;


// (64,)
buffer_676 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[29] = buffer_676;


// Outputs
// (1, 64, 20, 20)
buffer_674 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_674[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_59, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
buffer_390 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_390[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Upsample_76, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_407 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_407[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Add_77, Operation: Add
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_408 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_408[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_78, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_678 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_678[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[30] = buffer_678;


// (64,)
buffer_679 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[30] = buffer_679;


// Outputs
// (1, 64, 40, 40)
buffer_677 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_677[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_79, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_411 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_411[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Upsample_96, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_428 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_428[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Add_97, Operation: Add
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_429 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_429[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_98, Operation: Conv
// Inputs
// (64, 64, 3, 3)
buffer_681 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    buffer_681[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[31] = buffer_681;


// (64,)
buffer_682 = (fp_t*) malloc(64 * sizeof(fp_t));



biases[31] = buffer_682;


// Outputs
// (1, 64, 80, 80)
buffer_680 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_680[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_99, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_432 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_432[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_100, Operation: Conv
// Inputs
// (32, 64, 3, 3)
buffer_684 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    buffer_684[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[32] = buffer_684;


// (32,)
buffer_685 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[32] = buffer_685;


// Outputs
// (1, 32, 80, 80)
buffer_683 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_683[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_101, Operation: Conv
// Inputs
// (16, 64, 3, 3)
buffer_687 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    buffer_687[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[33] = buffer_687;


// (16,)
buffer_688 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[33] = buffer_688;


// Outputs
// (1, 16, 80, 80)
buffer_686 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_686[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_102, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
buffer_437 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_437[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_103, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_690 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_690[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[34] = buffer_690;


// (16,)
buffer_691 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[34] = buffer_691;


// Outputs
// (1, 16, 80, 80)
buffer_689 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_689[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_104, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_693 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_693[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[35] = buffer_693;


// (16,)
buffer_694 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[35] = buffer_694;


// Outputs
// (1, 16, 80, 80)
buffer_692 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_692[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_105, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
buffer_442 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_442[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_106, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_696 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_696[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[36] = buffer_696;


// (16,)
buffer_697 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[36] = buffer_697;


// Outputs
// (1, 16, 80, 80)
buffer_695 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_695[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Concat_107, Operation: Concat
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_445 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_445[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Relu_108, Operation: Relu
// Inputs
// Outputs
// (1, 64, 80, 80)
buffer_446 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_446[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (32, 64, 3, 3)
buffer_699 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    buffer_699[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[37] = buffer_699;


// (32,)
buffer_700 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[37] = buffer_700;


// Outputs
// (1, 32, 40, 40)
buffer_698 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_698[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_110, Operation: Conv
// Inputs
// (16, 64, 3, 3)
buffer_702 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    buffer_702[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[38] = buffer_702;


// (16,)
buffer_703 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[38] = buffer_703;


// Outputs
// (1, 16, 40, 40)
buffer_701 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_701[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_111, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
buffer_451 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_451[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_112, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_705 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_705[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[39] = buffer_705;


// (16,)
buffer_706 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[39] = buffer_706;


// Outputs
// (1, 16, 40, 40)
buffer_704 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_704[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_113, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_708 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_708[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[40] = buffer_708;


// (16,)
buffer_709 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[40] = buffer_709;


// Outputs
// (1, 16, 40, 40)
buffer_707 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_707[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_114, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
buffer_456 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_456[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_115, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_711 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_711[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[41] = buffer_711;


// (16,)
buffer_712 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[41] = buffer_712;


// Outputs
// (1, 16, 40, 40)
buffer_710 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_710[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Concat_116, Operation: Concat
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_459 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_459[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Relu_117, Operation: Relu
// Inputs
// Outputs
// (1, 64, 40, 40)
buffer_460 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_460[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_118, Operation: Conv
// Inputs
// (32, 64, 3, 3)
buffer_714 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    buffer_714[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[42] = buffer_714;


// (32,)
buffer_715 = (fp_t*) malloc(32 * sizeof(fp_t));



biases[42] = buffer_715;


// Outputs
// (1, 32, 20, 20)
buffer_713 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    buffer_713[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_119, Operation: Conv
// Inputs
// (16, 64, 3, 3)
buffer_717 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    buffer_717[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[43] = buffer_717;


// (16,)
buffer_718 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[43] = buffer_718;


// Outputs
// (1, 16, 20, 20)
buffer_716 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_716[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_120, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
buffer_465 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_465[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_121, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_720 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_720[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[44] = buffer_720;


// (16,)
buffer_721 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[44] = buffer_721;


// Outputs
// (1, 16, 20, 20)
buffer_719 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_719[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_122, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_723 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_723[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[45] = buffer_723;


// (16,)
buffer_724 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[45] = buffer_724;


// Outputs
// (1, 16, 20, 20)
buffer_722 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_722[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_123, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
buffer_470 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_470[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_124, Operation: Conv
// Inputs
// (16, 16, 3, 3)
buffer_726 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_726[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



kernels[46] = buffer_726;


// (16,)
buffer_727 = (fp_t*) malloc(16 * sizeof(fp_t));



biases[46] = buffer_727;


// Outputs
// (1, 16, 20, 20)
buffer_725 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    buffer_725[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Concat_125, Operation: Concat
// Inputs
// Outputs
// (1, 64, 20, 20)
buffer_473 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_473[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Relu_126, Operation: Relu
// Inputs
// Outputs
// (1, 64, 20, 20)
buffer_474 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    buffer_474[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_127, Operation: Conv
// Inputs
// (8, 64, 1, 1)
buffer_289 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_289[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[47] = buffer_289;


// (8,)
buffer_290 = (fp_t*) malloc(8 * sizeof(fp_t));



biases[47] = buffer_290;


// Outputs
// (1, 8, 80, 80)
buffer_475 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_475[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Transpose_128, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 8)
buffer_476 = (fp_t**) malloc(80 * sizeof(fp_t*));

for(uint32_t output = 0; output < 80; output++){
    buffer_476[output] = (fp_t*) malloc(80*8 * sizeof(fp_t));
}



// Layer: Reshape_134, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 4)
buffer_486 = (fp_t**) malloc(12800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 12800; output++){
    buffer_486[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (8, 64, 1, 1)
buffer_291 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_291[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[48] = buffer_291;


// (8,)
buffer_292 = (fp_t*) malloc(8 * sizeof(fp_t));



biases[48] = buffer_292;


// Outputs
// (1, 8, 40, 40)
buffer_487 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_487[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_136, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 8)
buffer_488 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    buffer_488[output] = (fp_t*) malloc(40*8 * sizeof(fp_t));
}



// Layer: Reshape_142, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 4)
buffer_498 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    buffer_498[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_143, Operation: Conv
// Inputs
// (8, 64, 1, 1)
buffer_293 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    buffer_293[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[49] = buffer_293;


// (8,)
buffer_294 = (fp_t*) malloc(8 * sizeof(fp_t));



biases[49] = buffer_294;


// Outputs
// (1, 8, 20, 20)
buffer_499 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    buffer_499[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_144, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 8)
buffer_500 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_500[output] = (fp_t*) malloc(20*8 * sizeof(fp_t));
}



// Layer: Reshape_150, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 4)
buffer_510 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    buffer_510[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Concat_151, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 4)
output_output0 = (fp_t**) malloc(16800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16800; output++){
    output_output0[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_152, Operation: Conv
// Inputs
// (4, 64, 1, 1)
buffer_283 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_283[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[50] = buffer_283;


// (4,)
buffer_284 = (fp_t*) malloc(4 * sizeof(fp_t));



biases[50] = buffer_284;


// Outputs
// (1, 4, 80, 80)
buffer_512 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    buffer_512[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Transpose_153, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 4)
buffer_513 = (fp_t**) malloc(80 * sizeof(fp_t*));

for(uint32_t output = 0; output < 80; output++){
    buffer_513[output] = (fp_t*) malloc(80*4 * sizeof(fp_t));
}



// Layer: Reshape_159, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 2)
buffer_523 = (fp_t**) malloc(12800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 12800; output++){
    buffer_523[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_160, Operation: Conv
// Inputs
// (4, 64, 1, 1)
buffer_285 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_285[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[51] = buffer_285;


// (4,)
buffer_286 = (fp_t*) malloc(4 * sizeof(fp_t));



biases[51] = buffer_286;


// Outputs
// (1, 4, 40, 40)
buffer_524 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    buffer_524[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_161, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 4)
buffer_525 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    buffer_525[output] = (fp_t*) malloc(40*4 * sizeof(fp_t));
}



// Layer: Reshape_167, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 2)
buffer_535 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    buffer_535[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_168, Operation: Conv
// Inputs
// (4, 64, 1, 1)
buffer_287 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    buffer_287[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[52] = buffer_287;


// (4,)
buffer_288 = (fp_t*) malloc(4 * sizeof(fp_t));



biases[52] = buffer_288;


// Outputs
// (1, 4, 20, 20)
buffer_536 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    buffer_536[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_169, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 4)
buffer_537 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_537[output] = (fp_t*) malloc(20*4 * sizeof(fp_t));
}



// Layer: Reshape_175, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 2)
buffer_547 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    buffer_547[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Concat_176, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 2)
buffer_548 = (fp_t**) malloc(16800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16800; output++){
    buffer_548[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_177, Operation: Conv
// Inputs
// (20, 64, 1, 1)
buffer_295 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    buffer_295[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[53] = buffer_295;


// (20,)
buffer_296 = (fp_t*) malloc(20 * sizeof(fp_t));



biases[53] = buffer_296;


// Outputs
// (1, 20, 80, 80)
buffer_549 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_549[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Transpose_178, Operation: Transpose
// Inputs
// Outputs
// (1, 80, 80, 20)
buffer_550 = (fp_t**) malloc(80 * sizeof(fp_t*));

for(uint32_t output = 0; output < 80; output++){
    buffer_550[output] = (fp_t*) malloc(80*20 * sizeof(fp_t));
}



// Layer: Reshape_184, Operation: Reshape
// Inputs
// Outputs
// (1, 12800, 10)
buffer_560 = (fp_t**) malloc(12800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 12800; output++){
    buffer_560[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Conv_185, Operation: Conv
// Inputs
// (20, 64, 1, 1)
buffer_297 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    buffer_297[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[54] = buffer_297;


// (20,)
buffer_298 = (fp_t*) malloc(20 * sizeof(fp_t));



biases[54] = buffer_298;


// Outputs
// (1, 20, 40, 40)
buffer_561 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_561[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_186, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 20)
buffer_562 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    buffer_562[output] = (fp_t*) malloc(40*20 * sizeof(fp_t));
}



// Layer: Reshape_192, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 10)
buffer_572 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    buffer_572[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Conv_193, Operation: Conv
// Inputs
// (20, 64, 1, 1)
buffer_299 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    buffer_299[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



kernels[55] = buffer_299;


// (20,)
buffer_300 = (fp_t*) malloc(20 * sizeof(fp_t));



biases[55] = buffer_300;


// Outputs
// (1, 20, 20, 20)
buffer_573 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_573[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_194, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 20)
buffer_574 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    buffer_574[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Reshape_200, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 10)
buffer_584 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    buffer_584[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Concat_201, Operation: Concat2d
// Inputs
// Outputs
// (1, 16800, 10)
output_585 = (fp_t**) malloc(16800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16800; output++){
    output_585[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Softmax_202, Operation: Softmax
// Inputs
// Outputs
// (1, 16800, 2)
output_586 = (fp_t**) malloc(16800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16800; output++){
    output_586[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



}
