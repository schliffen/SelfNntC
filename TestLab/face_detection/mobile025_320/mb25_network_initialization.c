#include "mb25_network_initialization.h"

void mb25_initialize_network() {



    // mbnet25 input
    new_input_channel = (fp_t**) malloc(3*sizeof(fp_t*));
    for(uint32_t i = 0; i < 3; i++){
        new_input_channel[i] = (fp_t*) malloc(322*322*sizeof(fp_t)); // padded h and w
    }

    mb25_kernels = (fp_t***) malloc(56 * sizeof(fp_t**));
    mb25_biases = (fp_t**) malloc(56 * sizeof(fp_t*));

// Layer: Conv_0, Operation: Conv
// Inputs
// (8, 3, 3, 3)
    mb25_buffer_588 = (fp_t**) malloc(24 * sizeof(fp_t*));

    for(uint32_t kernel = 0; kernel < 24; kernel++){
        mb25_buffer_588[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
    }



    mb25_kernels[0] = mb25_buffer_588;


    // (8,)
    mb25_buffer_589 = (fp_t*) malloc(8 * sizeof(fp_t));



    mb25_biases[0] = mb25_buffer_589;


// Outputs
// (1, 8, 160, 160)
mb25_buffer_587 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_587[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_1, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 160, 160)
mb25_buffer_303 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_303[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_2, Operation: Conv
// Inputs
// (8, 1, 3, 3)
mb25_buffer_591 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8; kernel++){
    mb25_buffer_591[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[1] = mb25_buffer_591;


// (8,)
mb25_buffer_592 = (fp_t*) malloc(8 * sizeof(fp_t));



mb25_biases[1] = mb25_buffer_592;


// Outputs
// (1, 8, 160, 160)
mb25_buffer_590 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_590[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_3, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 8, 160, 160)
mb25_buffer_306 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_306[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_4, Operation: Conv
// Inputs
// (16, 8, 1, 1)
mb25_buffer_594 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_594[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[2] = mb25_buffer_594;


// (16,)
mb25_buffer_595 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[2] = mb25_buffer_595;


// Outputs
// (1, 16, 160, 160)
mb25_buffer_593 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_593[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: LeakyRelu_5, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 160, 160)
mb25_buffer_309 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_309[output] = (fp_t*) malloc(160*160 * sizeof(fp_t));
}



// Layer: Conv_6, Operation: Conv
// Inputs
// (16, 1, 3, 3)
mb25_buffer_597 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16; kernel++){
    mb25_buffer_597[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[3] = mb25_buffer_597;


// (16,)
mb25_buffer_598 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[3] = mb25_buffer_598;


// Outputs
// (1, 16, 80, 80)
mb25_buffer_596 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_596[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_7, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 80, 80)
mb25_buffer_312 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_312[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_8, Operation: Conv
// Inputs
// (32, 16, 1, 1)
mb25_buffer_600 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mb25_buffer_600[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[4] = mb25_buffer_600;


// (32,)
mb25_buffer_601 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[4] = mb25_buffer_601;


// Outputs
// (1, 32, 80, 80)
mb25_buffer_599 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_599[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_9, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
mb25_buffer_315 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_315[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_10, Operation: Conv
// Inputs
// (32, 1, 3, 3)
mb25_buffer_603 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32; kernel++){
    mb25_buffer_603[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[5] = mb25_buffer_603;


// (32,)
mb25_buffer_604 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[5] = mb25_buffer_604;


// Outputs
// (1, 32, 80, 80)
mb25_buffer_602 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_602[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_11, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
mb25_buffer_318 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_318[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_12, Operation: Conv
// Inputs
// (32, 32, 1, 1)
mb25_buffer_606 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    mb25_buffer_606[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[6] = mb25_buffer_606;


// (32,)
mb25_buffer_607 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[6] = mb25_buffer_607;


// Outputs
// (1, 32, 80, 80)
mb25_buffer_605 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_605[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: LeakyRelu_13, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 80, 80)
mb25_buffer_321 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_321[output] = (fp_t*) malloc(80*80 * sizeof(fp_t));
}



// Layer: Conv_14, Operation: Conv
// Inputs
// (32, 1, 3, 3)
mb25_buffer_609 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32; kernel++){
    mb25_buffer_609[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[7] = mb25_buffer_609;


// (32,)
mb25_buffer_610 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[7] = mb25_buffer_610;


// Outputs
// (1, 32, 40, 40)
mb25_buffer_608 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_608[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_15, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 32, 40, 40)
mb25_buffer_324 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_324[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_16, Operation: Conv
// Inputs
// (64, 32, 1, 1)
mb25_buffer_612 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    mb25_buffer_612[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[8] = mb25_buffer_612;


// (64,)
mb25_buffer_613 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[8] = mb25_buffer_613;


// Outputs
// (1, 64, 40, 40)
mb25_buffer_611 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_611[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_17, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_327 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_327[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_18, Operation: Conv
// Inputs
// (64, 1, 3, 3)
mb25_buffer_615 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    mb25_buffer_615[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[9] = mb25_buffer_615;


// (64,)
mb25_buffer_616 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[9] = mb25_buffer_616;


// Outputs
// (1, 64, 40, 40)
mb25_buffer_614 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_614[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_19, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_330 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_330[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_20, Operation: Conv
// Inputs
// (64, 64, 1, 1)
mb25_buffer_618 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    mb25_buffer_618[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[10] = mb25_buffer_618;


// (64,)
mb25_buffer_619 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[10] = mb25_buffer_619;


// Outputs
// (1, 64, 40, 40)
mb25_buffer_617 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_617[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_21, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_333 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_333[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_22, Operation: Conv
// Inputs
// (64, 1, 3, 3)
mb25_buffer_621 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 64; kernel++){
    mb25_buffer_621[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[11] = mb25_buffer_621;


// (64,)
mb25_buffer_622 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[11] = mb25_buffer_622;


// Outputs
// (1, 64, 20, 20)
mb25_buffer_620 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_620[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_23, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_336 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_336[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_24, Operation: Conv
// Inputs
// (128, 64, 1, 1)
mb25_buffer_624 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mb25_buffer_624[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[12] = mb25_buffer_624;


// (128,)
mb25_buffer_625 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[12] = mb25_buffer_625;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_623 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_623[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_25, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_339 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_339[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_26, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_627 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_627[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[13] = mb25_buffer_627;


// (128,)
mb25_buffer_628 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[13] = mb25_buffer_628;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_626 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_626[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_27, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_342 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_342[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_28, Operation: Conv
// Inputs
// (128, 128, 1, 1)
mb25_buffer_630 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_630[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[14] = mb25_buffer_630;


// (128,)
mb25_buffer_631 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[14] = mb25_buffer_631;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_629 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_629[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_29, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_345 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_345[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_30, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_633 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_633[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[15] = mb25_buffer_633;


// (128,)
mb25_buffer_634 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[15] = mb25_buffer_634;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_632 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_632[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_31, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_348 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_348[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_32, Operation: Conv
// Inputs
// (128, 128, 1, 1)
mb25_buffer_636 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_636[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[16] = mb25_buffer_636;


// (128,)
mb25_buffer_637 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[16] = mb25_buffer_637;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_635 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_635[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_33, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_351 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_351[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_34, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_639 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_639[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[17] = mb25_buffer_639;


// (128,)
mb25_buffer_640 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[17] = mb25_buffer_640;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_638 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_638[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_35, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_354 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_354[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_36, Operation: Conv
// Inputs
// (128, 128, 1, 1)
mb25_buffer_642 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_642[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[18] = mb25_buffer_642;


// (128,)
mb25_buffer_643 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[18] = mb25_buffer_643;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_641 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_641[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_37, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_357 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_357[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_38, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_645 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_645[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[19] = mb25_buffer_645;


// (128,)
mb25_buffer_646 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[19] = mb25_buffer_646;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_644 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_644[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_39, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_360 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_360[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_40, Operation: Conv
// Inputs
// (128, 128, 1, 1)
mb25_buffer_648 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_648[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[20] = mb25_buffer_648;


// (128,)
mb25_buffer_649 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[20] = mb25_buffer_649;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_647 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_647[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_41, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_363 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_363[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_42, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_651 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_651[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[21] = mb25_buffer_651;


// (128,)
mb25_buffer_652 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[21] = mb25_buffer_652;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_650 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_650[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_43, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_366 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_366[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_44, Operation: Conv
// Inputs
// (128, 128, 1, 1)
mb25_buffer_654 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_654[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[22] = mb25_buffer_654;


// (128,)
mb25_buffer_655 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[22] = mb25_buffer_655;


// Outputs
// (1, 128, 20, 20)
mb25_buffer_653 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_653[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_45, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 20, 20)
mb25_buffer_369 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_369[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_46, Operation: Conv
// Inputs
// (128, 1, 3, 3)
mb25_buffer_657 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 128; kernel++){
    mb25_buffer_657[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[23] = mb25_buffer_657;


// (128,)
mb25_buffer_658 = (fp_t*) malloc(128 * sizeof(fp_t));



mb25_biases[23] = mb25_buffer_658;


// Outputs
// (1, 128, 10, 10)
mb25_buffer_656 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_656[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_47, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 128, 10, 10)
mb25_buffer_372 = (fp_t**) malloc(128 * sizeof(fp_t*));

for(uint32_t output = 0; output < 128; output++){
    mb25_buffer_372[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_48, Operation: Conv
// Inputs
// (256, 128, 1, 1)
mb25_buffer_660 = (fp_t**) malloc(32768 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 32768; kernel++){
    mb25_buffer_660[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[24] = mb25_buffer_660;


// (256,)
mb25_buffer_661 = (fp_t*) malloc(256 * sizeof(fp_t));



mb25_biases[24] = mb25_buffer_661;


// Outputs
// (1, 256, 10, 10)
mb25_buffer_659 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_659[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_49, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
mb25_buffer_375 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_375[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_50, Operation: Conv
// Inputs
// (256, 1, 3, 3)
mb25_buffer_663 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_663[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[25] = mb25_buffer_663;


// (256,)
mb25_buffer_664 = (fp_t*) malloc(256 * sizeof(fp_t));



mb25_biases[25] = mb25_buffer_664;


// Outputs
// (1, 256, 10, 10)
mb25_buffer_662 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_662[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_51, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
mb25_buffer_378 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_378[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_52, Operation: Conv
// Inputs
// (256, 256, 1, 1)
mb25_buffer_666 = (fp_t**) malloc(65536 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 65536; kernel++){
    mb25_buffer_666[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[26] = mb25_buffer_666;


// (256,)
mb25_buffer_667 = (fp_t*) malloc(256 * sizeof(fp_t));



mb25_biases[26] = mb25_buffer_667;


// Outputs
// (1, 256, 10, 10)
mb25_buffer_665 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_665[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_53, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 256, 10, 10)
mb25_buffer_381 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t output = 0; output < 256; output++){
    mb25_buffer_381[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_54, Operation: Conv
// Inputs
// (64, 64, 1, 1)
mb25_buffer_669 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    mb25_buffer_669[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[27] = mb25_buffer_669;


// (64,)
mb25_buffer_670 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[27] = mb25_buffer_670;


// Outputs
// (1, 64, 40, 40)
mb25_buffer_668 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_668[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_55, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_384 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_384[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_56, Operation: Conv
// Inputs
// (64, 128, 1, 1)
mb25_buffer_672 = (fp_t**) malloc(8192 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 8192; kernel++){
    mb25_buffer_672[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[28] = mb25_buffer_672;


// (64,)
mb25_buffer_673 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[28] = mb25_buffer_673;


// Outputs
// (1, 64, 20, 20)
mb25_buffer_671 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_671[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_57, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_387 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_387[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_58, Operation: Conv
// Inputs
// (64, 256, 1, 1)
mb25_buffer_675 = (fp_t**) malloc(16384 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 16384; kernel++){
    mb25_buffer_675[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[29] = mb25_buffer_675;


// (64,)
mb25_buffer_676 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[29] = mb25_buffer_676;


// Outputs
// (1, 64, 10, 10)
mb25_buffer_674 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_674[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_59, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 10, 10)
mb25_buffer_390 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_390[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Upsample_76, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_407 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_407[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Add_77, Operation: Add
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_408 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_408[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_78, Operation: Conv
// Inputs
// (64, 64, 3, 3)
mb25_buffer_678 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    mb25_buffer_678[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[30] = mb25_buffer_678;


// (64,)
mb25_buffer_679 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[30] = mb25_buffer_679;


// Outputs
// (1, 64, 20, 20)
mb25_buffer_677 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_677[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_79, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_411 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_411[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Upsample_96, Operation: Upsample
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_428 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_428[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Add_97, Operation: Add
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_429 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_429[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_98, Operation: Conv
// Inputs
// (64, 64, 3, 3)
mb25_buffer_681 = (fp_t**) malloc(4096 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 4096; kernel++){
    mb25_buffer_681[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[31] = mb25_buffer_681;


// (64,)
mb25_buffer_682 = (fp_t*) malloc(64 * sizeof(fp_t));



mb25_biases[31] = mb25_buffer_682;


// Outputs
// (1, 64, 40, 40)
mb25_buffer_680 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_680[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_99, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_432 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_432[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_100, Operation: Conv
// Inputs
// (32, 64, 3, 3)
mb25_buffer_684 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    mb25_buffer_684[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[32] = mb25_buffer_684;


// (32,)
mb25_buffer_685 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[32] = mb25_buffer_685;


// Outputs
// (1, 32, 40, 40)
mb25_buffer_683 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_683[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_101, Operation: Conv
// Inputs
// (16, 64, 3, 3)
mb25_buffer_687 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    mb25_buffer_687[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[33] = mb25_buffer_687;


// (16,)
mb25_buffer_688 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[33] = mb25_buffer_688;


// Outputs
// (1, 16, 40, 40)
mb25_buffer_686 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_686[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_102, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
mb25_buffer_437 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_437[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_103, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_690 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_690[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[34] = mb25_buffer_690;


// (16,)
mb25_buffer_691 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[34] = mb25_buffer_691;


// Outputs
// (1, 16, 40, 40)
mb25_buffer_689 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_689[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_104, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_693 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_693[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[35] = mb25_buffer_693;


// (16,)
mb25_buffer_694 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[35] = mb25_buffer_694;


// Outputs
// (1, 16, 40, 40)
mb25_buffer_692 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_692[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: LeakyRelu_105, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 40, 40)
mb25_buffer_442 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_442[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_106, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_696 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_696[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[36] = mb25_buffer_696;


// (16,)
mb25_buffer_697 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[36] = mb25_buffer_697;


// Outputs
// (1, 16, 40, 40)
mb25_buffer_695 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_695[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Concat_107, Operation: Concat
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_445 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_445[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Relu_108, Operation: Relu
// Inputs
// Outputs
// (1, 64, 40, 40)
mb25_buffer_446 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_446[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Conv_109, Operation: Conv
// Inputs
// (32, 64, 3, 3)
mb25_buffer_699 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    mb25_buffer_699[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[37] = mb25_buffer_699;


// (32,)
mb25_buffer_700 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[37] = mb25_buffer_700;


// Outputs
// (1, 32, 20, 20)
mb25_buffer_698 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_698[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_110, Operation: Conv
// Inputs
// (16, 64, 3, 3)
mb25_buffer_702 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    mb25_buffer_702[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[38] = mb25_buffer_702;


// (16,)
mb25_buffer_703 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[38] = mb25_buffer_703;


// Outputs
// (1, 16, 20, 20)
mb25_buffer_701 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_701[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_111, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
mb25_buffer_451 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_451[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_112, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_705 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_705[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[39] = mb25_buffer_705;


// (16,)
mb25_buffer_706 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[39] = mb25_buffer_706;


// Outputs
// (1, 16, 20, 20)
mb25_buffer_704 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_704[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_113, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_708 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_708[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[40] = mb25_buffer_708;


// (16,)
mb25_buffer_709 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[40] = mb25_buffer_709;


// Outputs
// (1, 16, 20, 20)
mb25_buffer_707 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_707[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: LeakyRelu_114, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 20, 20)
mb25_buffer_456 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_456[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_115, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_711 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_711[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[41] = mb25_buffer_711;


// (16,)
mb25_buffer_712 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[41] = mb25_buffer_712;


// Outputs
// (1, 16, 20, 20)
mb25_buffer_710 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_710[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Concat_116, Operation: Concat
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_459 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_459[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Relu_117, Operation: Relu
// Inputs
// Outputs
// (1, 64, 20, 20)
mb25_buffer_460 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_460[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Conv_118, Operation: Conv
// Inputs
// (32, 64, 3, 3)
mb25_buffer_714 = (fp_t**) malloc(2048 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 2048; kernel++){
    mb25_buffer_714[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[42] = mb25_buffer_714;


// (32,)
mb25_buffer_715 = (fp_t*) malloc(32 * sizeof(fp_t));



mb25_biases[42] = mb25_buffer_715;


// Outputs
// (1, 32, 10, 10)
mb25_buffer_713 = (fp_t**) malloc(32 * sizeof(fp_t*));

for(uint32_t output = 0; output < 32; output++){
    mb25_buffer_713[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_119, Operation: Conv
// Inputs
// (16, 64, 3, 3)
mb25_buffer_717 = (fp_t**) malloc(1024 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1024; kernel++){
    mb25_buffer_717[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[43] = mb25_buffer_717;


// (16,)
mb25_buffer_718 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[43] = mb25_buffer_718;


// Outputs
// (1, 16, 10, 10)
mb25_buffer_716 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_716[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_120, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 10, 10)
mb25_buffer_465 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_465[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_121, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_720 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_720[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[44] = mb25_buffer_720;


// (16,)
mb25_buffer_721 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[44] = mb25_buffer_721;


// Outputs
// (1, 16, 10, 10)
mb25_buffer_719 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_719[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_122, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_723 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_723[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[45] = mb25_buffer_723;


// (16,)
mb25_buffer_724 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[45] = mb25_buffer_724;


// Outputs
// (1, 16, 10, 10)
mb25_buffer_722 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_722[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: LeakyRelu_123, Operation: LeakyRelu
// Inputs
// Outputs
// (1, 16, 10, 10)
mb25_buffer_470 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_470[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_124, Operation: Conv
// Inputs
// (16, 16, 3, 3)
mb25_buffer_726 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_726[kernel] = (fp_t*) malloc(3*3 * sizeof(fp_t));
}



mb25_kernels[46] = mb25_buffer_726;


// (16,)
mb25_buffer_727 = (fp_t*) malloc(16 * sizeof(fp_t));



mb25_biases[46] = mb25_buffer_727;


// Outputs
// (1, 16, 10, 10)
mb25_buffer_725 = (fp_t**) malloc(16 * sizeof(fp_t*));

for(uint32_t output = 0; output < 16; output++){
    mb25_buffer_725[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Concat_125, Operation: Concat
// Inputs
// Outputs
// (1, 64, 10, 10)
mb25_buffer_473 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_473[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Relu_126, Operation: Relu
// Inputs
// Outputs
// (1, 64, 10, 10)
mb25_buffer_474 = (fp_t**) malloc(64 * sizeof(fp_t*));

for(uint32_t output = 0; output < 64; output++){
    mb25_buffer_474[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Conv_127, Operation: Conv
// Inputs
// (8, 64, 1, 1)
mb25_buffer_289 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mb25_buffer_289[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[47] = mb25_buffer_289;


// (8,)
mb25_buffer_290 = (fp_t*) malloc(8 * sizeof(fp_t));



mb25_biases[47] = mb25_buffer_290;


// Outputs
// (1, 8, 40, 40)
mb25_buffer_475 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_475[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_128, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 8)
mb25_buffer_476 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    mb25_buffer_476[output] = (fp_t*) malloc(40*8 * sizeof(fp_t));
}



// Layer: Reshape_134, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 4)
mb25_buffer_486 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    mb25_buffer_486[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_135, Operation: Conv
// Inputs
// (8, 64, 1, 1)
mb25_buffer_291 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mb25_buffer_291[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[48] = mb25_buffer_291;


// (8,)
mb25_buffer_292 = (fp_t*) malloc(8 * sizeof(fp_t));



mb25_biases[48] = mb25_buffer_292;


// Outputs
// (1, 8, 20, 20)
mb25_buffer_487 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_487[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_136, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 8)
mb25_buffer_488 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_488[output] = (fp_t*) malloc(20*8 * sizeof(fp_t));
}



// Layer: Reshape_142, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 4)
mb25_buffer_498 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    mb25_buffer_498[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_143, Operation: Conv
// Inputs
// (8, 64, 1, 1)
mb25_buffer_293 = (fp_t**) malloc(512 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 512; kernel++){
    mb25_buffer_293[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[49] = mb25_buffer_293;


// (8,)
mb25_buffer_294 = (fp_t*) malloc(8 * sizeof(fp_t));



mb25_biases[49] = mb25_buffer_294;


// Outputs
// (1, 8, 10, 10)
mb25_buffer_499 = (fp_t**) malloc(8 * sizeof(fp_t*));

for(uint32_t output = 0; output < 8; output++){
    mb25_buffer_499[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Transpose_144, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 8)
mb25_buffer_500 = (fp_t**) malloc(10 * sizeof(fp_t*));

for(uint32_t output = 0; output < 10; output++){
    mb25_buffer_500[output] = (fp_t*) malloc(10*8 * sizeof(fp_t));
}



// Layer: Reshape_150, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 4)
mb25_buffer_510 = (fp_t**) malloc(200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 200; output++){
    mb25_buffer_510[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Concat_151, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 4)
    mb25_output_output0 = (fp_t**) malloc(4200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4200; output++){
    mb25_output_output0[output] = (fp_t*) malloc(1*4 * sizeof(fp_t));
}



// Layer: Conv_152, Operation: Conv
// Inputs
// (4, 64, 1, 1)
mb25_buffer_283 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_283[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[50] = mb25_buffer_283;


// (4,)
mb25_buffer_284 = (fp_t*) malloc(4 * sizeof(fp_t));



mb25_biases[50] = mb25_buffer_284;


// Outputs
// (1, 4, 40, 40)
mb25_buffer_512 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    mb25_buffer_512[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_153, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 4)
mb25_buffer_513 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    mb25_buffer_513[output] = (fp_t*) malloc(40*4 * sizeof(fp_t));
}



// Layer: Reshape_159, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 2)
mb25_buffer_523 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    mb25_buffer_523[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_160, Operation: Conv
// Inputs
// (4, 64, 1, 1)
mb25_buffer_285 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_285[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[51] = mb25_buffer_285;


// (4,)
mb25_buffer_286 = (fp_t*) malloc(4 * sizeof(fp_t));



mb25_biases[51] = mb25_buffer_286;


// Outputs
// (1, 4, 20, 20)
mb25_buffer_524 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    mb25_buffer_524[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_161, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 4)
mb25_buffer_525 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_525[output] = (fp_t*) malloc(20*4 * sizeof(fp_t));
}



// Layer: Reshape_167, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 2)
mb25_buffer_535 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    mb25_buffer_535[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_168, Operation: Conv
// Inputs
// (4, 64, 1, 1)
mb25_buffer_287 = (fp_t**) malloc(256 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 256; kernel++){
    mb25_buffer_287[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[52] = mb25_buffer_287;


// (4,)
mb25_buffer_288 = (fp_t*) malloc(4 * sizeof(fp_t));



mb25_biases[52] = mb25_buffer_288;


// Outputs
// (1, 4, 10, 10)
mb25_buffer_536 = (fp_t**) malloc(4 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4; output++){
    mb25_buffer_536[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Transpose_169, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 4)
mb25_buffer_537 = (fp_t**) malloc(10 * sizeof(fp_t*));

for(uint32_t output = 0; output < 10; output++){
    mb25_buffer_537[output] = (fp_t*) malloc(10*4 * sizeof(fp_t));
}



// Layer: Reshape_175, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 2)
mb25_buffer_547 = (fp_t**) malloc(200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 200; output++){
    mb25_buffer_547[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Concat_176, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 2)
mb25_buffer_548 = (fp_t**) malloc(4200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4200; output++){
    mb25_buffer_548[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



// Layer: Conv_177, Operation: Conv
// Inputs
// (20, 64, 1, 1)
mb25_buffer_295 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    mb25_buffer_295[kernel] = (fp_t*) malloc(sizeof(fp_t));
}



mb25_kernels[53] = mb25_buffer_295;


// (20,)
mb25_buffer_296 = (fp_t*) malloc(20 * sizeof(fp_t));



mb25_biases[53] = mb25_buffer_296;


// Outputs
// (1, 20, 40, 40)
mb25_buffer_549 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_549[output] = (fp_t*) malloc(40*40 * sizeof(fp_t));
}



// Layer: Transpose_178, Operation: Transpose
// Inputs
// Outputs
// (1, 40, 40, 20)
mb25_buffer_550 = (fp_t**) malloc(40 * sizeof(fp_t*));

for(uint32_t output = 0; output < 40; output++){
    mb25_buffer_550[output] = (fp_t*) malloc(40*20 * sizeof(fp_t));
}



// Layer: Reshape_184, Operation: Reshape
// Inputs
// Outputs
// (1, 3200, 10)
mb25_buffer_560 = (fp_t**) malloc(3200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 3200; output++){
    mb25_buffer_560[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Conv_185, Operation: Conv
// Inputs
// (20, 64, 1, 1)
mb25_buffer_297 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    mb25_buffer_297[kernel] = (fp_t*) malloc(sizeof(fp_t));
}



mb25_kernels[54] = mb25_buffer_297;


// (20,)
mb25_buffer_298 = (fp_t*) malloc(20 * sizeof(fp_t));



mb25_biases[54] = mb25_buffer_298;


// Outputs
// (1, 20, 20, 20)
mb25_buffer_561 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_561[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Transpose_186, Operation: Transpose
// Inputs
// Outputs
// (1, 20, 20, 20)
mb25_buffer_562 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_562[output] = (fp_t*) malloc(20*20 * sizeof(fp_t));
}



// Layer: Reshape_192, Operation: Reshape
// Inputs
// Outputs
// (1, 800, 10)
mb25_buffer_572 = (fp_t**) malloc(800 * sizeof(fp_t*));

for(uint32_t output = 0; output < 800; output++){
    mb25_buffer_572[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Conv_193, Operation: Conv
// Inputs
// (20, 64, 1, 1)
mb25_buffer_299 = (fp_t**) malloc(1280 * sizeof(fp_t*));

for(uint32_t kernel = 0; kernel < 1280; kernel++){
    mb25_buffer_299[kernel] = (fp_t*) malloc(1*1 * sizeof(fp_t));
}



mb25_kernels[55] = mb25_buffer_299;


// (20,)
mb25_buffer_300 = (fp_t*) malloc(20 * sizeof(fp_t));



mb25_biases[55] = mb25_buffer_300;


// Outputs
// (1, 20, 10, 10)
mb25_buffer_573 = (fp_t**) malloc(20 * sizeof(fp_t*));

for(uint32_t output = 0; output < 20; output++){
    mb25_buffer_573[output] = (fp_t*) malloc(10*10 * sizeof(fp_t));
}



// Layer: Transpose_194, Operation: Transpose
// Inputs
// Outputs
// (1, 10, 10, 20)
mb25_buffer_574 = (fp_t**) malloc(10 * sizeof(fp_t*));

for(uint32_t output = 0; output < 10; output++){
    mb25_buffer_574[output] = (fp_t*) malloc(10*20 * sizeof(fp_t));
}



// Layer: Reshape_200, Operation: Reshape
// Inputs
// Outputs
// (1, 200, 10)
mb25_buffer_584 = (fp_t**) malloc(200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 200; output++){
    mb25_buffer_584[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Concat_201, Operation: Concat2d
// Inputs
// Outputs
// (1, 4200, 10)
    mb25_output_585 = (fp_t**) malloc(4200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4200; output++){
    mb25_output_585[output] = (fp_t*) malloc(1*10 * sizeof(fp_t));
}



// Layer: Softmax_202, Operation: Softmax
// Inputs
// Outputs
// (1, 4200, 2)
    mb25_output_586 = (fp_t**) malloc(4200 * sizeof(fp_t*));

for(uint32_t output = 0; output < 4200; output++){
    mb25_output_586[output] = (fp_t*) malloc(1*2 * sizeof(fp_t));
}



}
