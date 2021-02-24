#include "mbfc_network_cleanup.h"

void mbfc_feature_cleanup_network() {

for(uint32_t i = 0; i < 192; i++){
    free(mbfc_buffer_conv1_conv_weight[i]);
}

free(mbfc_buffer_conv1_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_334[i]);
}

free(mbfc_buffer_334);

free(mbfc_buffer_conv1_bn_weight);

free(mbfc_buffer_conv1_bn_bias);

free(mbfc_buffer_conv1_bn_running_mean);

free(mbfc_buffer_conv1_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_335[i]);
}

free(mbfc_buffer_335);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_523[i]);
}

free(feature_mbfc_buffer_523);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_337[i]);
}

free(mbfc_buffer_337);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_conv2_dw_conv_weight[i]);
}

free(mbfc_buffer_conv2_dw_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_338[i]);
}

free(mbfc_buffer_338);

free(mbfc_buffer_conv2_dw_bn_weight);

free(mbfc_buffer_conv2_dw_bn_bias);

free(mbfc_buffer_conv2_dw_bn_running_mean);

free(mbfc_buffer_conv2_dw_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_339[i]);
}

free(feature_mbfc_buffer_339);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_524[i]);
}

free(feature_mbfc_buffer_524);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_341[i]);
}

free(mbfc_buffer_341);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_23_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_23_conv_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_342[i]);
}

free(feature_mbfc_buffer_342);

free(mbfc_buffer_conv_23_conv_bn_weight);

free(mbfc_buffer_conv_23_conv_bn_bias);

free(mbfc_buffer_conv_23_conv_bn_running_mean);

free(mbfc_buffer_conv_23_conv_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_343[i]);
}

free(mbfc_buffer_343);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_525[i]);
}

free(feature_mbfc_buffer_525);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_345[i]);
}

free(feature_mbfc_buffer_345);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_conv_23_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_23_conv_dw_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_346[i]);
}

free(mbfc_buffer_346);

free(mbfc_buffer_conv_23_conv_dw_bn_weight);

free(mbfc_buffer_conv_23_conv_dw_bn_bias);

free(mbfc_buffer_conv_23_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_23_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_347[i]);
}

free(mbfc_buffer_347);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_526[i]);
}

free(mbfc_buffer_526);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_349[i]);
}

free(mbfc_buffer_349);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_23_project_conv_weight[i]);
}

free(mbfc_buffer_conv_23_project_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_350[i]);
}

free(mbfc_buffer_350);

free(mbfc_buffer_conv_23_project_bn_weight);

free(mbfc_buffer_conv_23_project_bn_bias);

free(mbfc_buffer_conv_23_project_bn_running_mean);

free(mbfc_buffer_conv_23_project_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_351[i]);
}

free(feature_mbfc_buffer_351);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_0_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_0_conv_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_352[i]);
}

free(mbfc_buffer_352);

free(mbfc_buffer_conv_3_model_0_conv_bn_weight);

free(mbfc_buffer_conv_3_model_0_conv_bn_bias);

free(mbfc_buffer_conv_3_model_0_conv_bn_running_mean);

free(mbfc_buffer_conv_3_model_0_conv_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_353[i]);
}

free(mbfc_buffer_353);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_527[i]);
}

free(mbfc_buffer_527);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_355[i]);
}

free(mbfc_buffer_355);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_conv_3_model_0_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_0_conv_dw_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_356[i]);
}

free(mbfc_buffer_356);

free(mbfc_buffer_conv_3_model_0_conv_dw_bn_weight);

free(mbfc_buffer_conv_3_model_0_conv_dw_bn_bias);

free(mbfc_buffer_conv_3_model_0_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_3_model_0_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_357[i]);
}

free(feature_mbfc_buffer_357);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_528[i]);
}

free(mbfc_buffer_528);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_359[i]);
}

free(mbfc_buffer_359);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_0_project_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_0_project_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_360[i]);
}

free(feature_mbfc_buffer_360);

free(mbfc_buffer_conv_3_model_0_project_bn_weight);

free(mbfc_buffer_conv_3_model_0_project_bn_bias);

free(mbfc_buffer_conv_3_model_0_project_bn_running_mean);

free(mbfc_buffer_conv_3_model_0_project_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_361[i]);
}

free(mbfc_buffer_361);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_362[i]);
}

free(mbfc_buffer_362);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_1_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_1_conv_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_363[i]);
}

free(feature_mbfc_buffer_363);

free(mbfc_buffer_conv_3_model_1_conv_bn_weight);

free(mbfc_buffer_conv_3_model_1_conv_bn_bias);

free(mbfc_buffer_conv_3_model_1_conv_bn_running_mean);

free(mbfc_buffer_conv_3_model_1_conv_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_364[i]);
}

free(mbfc_buffer_364);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_529[i]);
}

free(mbfc_buffer_529);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_366[i]);
}

free(feature_mbfc_buffer_366);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_conv_3_model_1_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_1_conv_dw_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_367[i]);
}

free(mbfc_buffer_367);

free(mbfc_buffer_conv_3_model_1_conv_dw_bn_weight);

free(mbfc_buffer_conv_3_model_1_conv_dw_bn_bias);

free(mbfc_buffer_conv_3_model_1_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_3_model_1_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_368[i]);
}

free(mbfc_buffer_368);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_530[i]);
}

free(mbfc_buffer_530);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_370[i]);
}

free(mbfc_buffer_370);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_1_project_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_1_project_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_371[i]);
}

free(mbfc_buffer_371);

free(mbfc_buffer_conv_3_model_1_project_bn_weight);

free(mbfc_buffer_conv_3_model_1_project_bn_bias);

free(mbfc_buffer_conv_3_model_1_project_bn_running_mean);

free(mbfc_buffer_conv_3_model_1_project_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_372[i]);
}

free(feature_mbfc_buffer_372);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_373[i]);
}

free(mbfc_buffer_373);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_2_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_2_conv_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_374[i]);
}

free(mbfc_buffer_374);

free(mbfc_buffer_conv_3_model_2_conv_bn_weight);

free(mbfc_buffer_conv_3_model_2_conv_bn_bias);

free(mbfc_buffer_conv_3_model_2_conv_bn_running_mean);

free(mbfc_buffer_conv_3_model_2_conv_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_375[i]);
}

free(feature_mbfc_buffer_375);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_531[i]);
}

free(mbfc_buffer_531);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_377[i]);
}

free(mbfc_buffer_377);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_conv_3_model_2_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_2_conv_dw_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_378[i]);
}

free(feature_mbfc_buffer_378);

free(mbfc_buffer_conv_3_model_2_conv_dw_bn_weight);

free(mbfc_buffer_conv_3_model_2_conv_dw_bn_bias);

free(mbfc_buffer_conv_3_model_2_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_3_model_2_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_379[i]);
}

free(mbfc_buffer_379);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_532[i]);
}

free(mbfc_buffer_532);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_381[i]);
}

free(feature_mbfc_buffer_381);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_2_project_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_2_project_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_382[i]);
}

free(mbfc_buffer_382);

free(mbfc_buffer_conv_3_model_2_project_bn_weight);

free(mbfc_buffer_conv_3_model_2_project_bn_bias);

free(mbfc_buffer_conv_3_model_2_project_bn_running_mean);

free(mbfc_buffer_conv_3_model_2_project_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_383[i]);
}

free(mbfc_buffer_383);

for(uint32_t i = 0; i < 64; i++){
    free(feature_mbfc_buffer_384[i]);
}

free(feature_mbfc_buffer_384);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_3_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_3_conv_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_385[i]);
}

free(mbfc_buffer_385);

free(mbfc_buffer_conv_3_model_3_conv_bn_weight);

free(mbfc_buffer_conv_3_model_3_conv_bn_bias);

free(mbfc_buffer_conv_3_model_3_conv_bn_running_mean);

free(mbfc_buffer_conv_3_model_3_conv_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_386[i]);
}

free(mbfc_buffer_386);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_533[i]);
}

free(mbfc_buffer_533);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_388[i]);
}

free(mbfc_buffer_388);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_conv_3_model_3_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_3_conv_dw_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_389[i]);
}

free(mbfc_buffer_389);

free(mbfc_buffer_conv_3_model_3_conv_dw_bn_weight);

free(mbfc_buffer_conv_3_model_3_conv_dw_bn_bias);

free(mbfc_buffer_conv_3_model_3_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_3_model_3_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_390[i]);
}

free(feature_mbfc_buffer_390);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_534[i]);
}

free(mbfc_buffer_534);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_392[i]);
}

free(mbfc_buffer_392);

for(uint32_t i = 0; i < 8192; i++){
    free(mbfc_buffer_conv_3_model_3_project_conv_weight[i]);
}

free(mbfc_buffer_conv_3_model_3_project_conv_weight);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_393[i]);
}

free(mbfc_buffer_393);

free(mbfc_buffer_conv_3_model_3_project_bn_weight);

free(mbfc_buffer_conv_3_model_3_project_bn_bias);

free(mbfc_buffer_conv_3_model_3_project_bn_running_mean);

free(mbfc_buffer_conv_3_model_3_project_bn_running_var);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_394[i]);
}

free(mbfc_buffer_394);

for(uint32_t i = 0; i < 64; i++){
    free(mbfc_buffer_395[i]);
}

free(mbfc_buffer_395);

for(uint32_t i = 0; i < 16384; i++){
    free(mbfc_buffer_conv_34_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_34_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_396[i]);
}

free(mbfc_buffer_396);

free(mbfc_buffer_conv_34_conv_bn_weight);

free(mbfc_buffer_conv_34_conv_bn_bias);

free(mbfc_buffer_conv_34_conv_bn_running_mean);

free(mbfc_buffer_conv_34_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_397[i]);
}

free(mbfc_buffer_397);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_535[i]);
}

free(feature_mbfc_buffer_535);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_399[i]);
}

free(mbfc_buffer_399);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_34_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_34_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_400[i]);
}

free(mbfc_buffer_400);

free(mbfc_buffer_conv_34_conv_dw_bn_weight);

free(mbfc_buffer_conv_34_conv_dw_bn_bias);

free(mbfc_buffer_conv_34_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_34_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_401[i]);
}

free(mbfc_buffer_401);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_536[i]);
}

free(feature_mbfc_buffer_536);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_403[i]);
}

free(mbfc_buffer_403);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_34_project_conv_weight[i]);
}

free(mbfc_buffer_conv_34_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_404[i]);
}

free(mbfc_buffer_404);

free(mbfc_buffer_conv_34_project_bn_weight);

free(mbfc_buffer_conv_34_project_bn_bias);

free(mbfc_buffer_conv_34_project_bn_running_mean);

free(mbfc_buffer_conv_34_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_405[i]);
}

free(mbfc_buffer_405);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_0_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_0_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_406[i]);
}

free(mbfc_buffer_406);

free(mbfc_buffer_conv_4_model_0_conv_bn_weight);

free(mbfc_buffer_conv_4_model_0_conv_bn_bias);

free(mbfc_buffer_conv_4_model_0_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_0_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_407[i]);
}

free(feature_mbfc_buffer_407);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_537[i]);
}

free(feature_mbfc_buffer_537);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_409[i]);
}

free(mbfc_buffer_409);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_0_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_0_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_410[i]);
}

free(mbfc_buffer_410);

free(mbfc_buffer_conv_4_model_0_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_0_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_0_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_0_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_411[i]);
}

free(feature_mbfc_buffer_411);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_538[i]);
}

free(mbfc_buffer_538);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_413[i]);
}

free(mbfc_buffer_413);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_0_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_0_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_414[i]);
}

free(mbfc_buffer_414);

free(mbfc_buffer_conv_4_model_0_project_bn_weight);

free(mbfc_buffer_conv_4_model_0_project_bn_bias);

free(mbfc_buffer_conv_4_model_0_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_0_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_415[i]);
}

free(mbfc_buffer_415);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_416[i]);
}

free(mbfc_buffer_416);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_1_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_1_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_417[i]);
}

free(mbfc_buffer_417);

free(mbfc_buffer_conv_4_model_1_conv_bn_weight);

free(mbfc_buffer_conv_4_model_1_conv_bn_bias);

free(mbfc_buffer_conv_4_model_1_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_1_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_418[i]);
}

free(mbfc_buffer_418);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_539[i]);
}

free(mbfc_buffer_539);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_420[i]);
}

free(mbfc_buffer_420);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_1_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_1_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_421[i]);
}

free(mbfc_buffer_421);

free(mbfc_buffer_conv_4_model_1_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_1_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_1_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_1_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_422[i]);
}

free(mbfc_buffer_422);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_540[i]);
}

free(mbfc_buffer_540);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_424[i]);
}

free(mbfc_buffer_424);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_1_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_1_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_425[i]);
}

free(mbfc_buffer_425);

free(mbfc_buffer_conv_4_model_1_project_bn_weight);

free(mbfc_buffer_conv_4_model_1_project_bn_bias);

free(mbfc_buffer_conv_4_model_1_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_1_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_426[i]);
}

free(mbfc_buffer_426);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_427[i]);
}

free(mbfc_buffer_427);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_2_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_2_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_428[i]);
}

free(feature_mbfc_buffer_428);

free(mbfc_buffer_conv_4_model_2_conv_bn_weight);

free(mbfc_buffer_conv_4_model_2_conv_bn_bias);

free(mbfc_buffer_conv_4_model_2_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_2_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_429[i]);
}

free(feature_mbfc_buffer_429);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_541[i]);
}

free(mbfc_buffer_541);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_431[i]);
}

free(mbfc_buffer_431);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_2_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_2_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_432[i]);
}

free(feature_mbfc_buffer_432);

free(mbfc_buffer_conv_4_model_2_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_2_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_2_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_2_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_433[i]);
}

free(mbfc_buffer_433);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_542[i]);
}

free(mbfc_buffer_542);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_435[i]);
}

free(mbfc_buffer_435);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_2_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_2_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_436[i]);
}

free(mbfc_buffer_436);

free(mbfc_buffer_conv_4_model_2_project_bn_weight);

free(mbfc_buffer_conv_4_model_2_project_bn_bias);

free(mbfc_buffer_conv_4_model_2_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_2_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_437[i]);
}

free(feature_mbfc_buffer_437);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_438[i]);
}

free(mbfc_buffer_438);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_3_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_3_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_439[i]);
}

free(mbfc_buffer_439);

free(mbfc_buffer_conv_4_model_3_conv_bn_weight);

free(mbfc_buffer_conv_4_model_3_conv_bn_bias);

free(mbfc_buffer_conv_4_model_3_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_3_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_440[i]);
}

free(mbfc_buffer_440);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_543[i]);
}

free(mbfc_buffer_543);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_442[i]);
}

free(feature_mbfc_buffer_442);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_3_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_3_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_443[i]);
}

free(mbfc_buffer_443);

free(mbfc_buffer_conv_4_model_3_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_3_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_3_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_3_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_444[i]);
}

free(mbfc_buffer_444);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_544[i]);
}

free(mbfc_buffer_544);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_446[i]);
}

free(feature_mbfc_buffer_446);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_3_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_3_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_447[i]);
}

free(mbfc_buffer_447);

free(mbfc_buffer_conv_4_model_3_project_bn_weight);

free(mbfc_buffer_conv_4_model_3_project_bn_bias);

free(mbfc_buffer_conv_4_model_3_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_3_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_448[i]);
}

free(mbfc_buffer_448);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_449[i]);
}

free(mbfc_buffer_449);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_4_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_4_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_450[i]);
}

free(mbfc_buffer_450);

free(mbfc_buffer_conv_4_model_4_conv_bn_weight);

free(mbfc_buffer_conv_4_model_4_conv_bn_bias);

free(mbfc_buffer_conv_4_model_4_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_4_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_451[i]);
}

free(feature_mbfc_buffer_451);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_545[i]);
}

free(mbfc_buffer_545);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_453[i]);
}

free(mbfc_buffer_453);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_4_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_4_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_454[i]);
}

free(mbfc_buffer_454);

free(mbfc_buffer_conv_4_model_4_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_4_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_4_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_4_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_455[i]);
}

free(mbfc_buffer_455);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_546[i]);
}

free(mbfc_buffer_546);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_457[i]);
}

free(mbfc_buffer_457);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_4_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_4_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_458[i]);
}

free(mbfc_buffer_458);

free(mbfc_buffer_conv_4_model_4_project_bn_weight);

free(mbfc_buffer_conv_4_model_4_project_bn_bias);

free(mbfc_buffer_conv_4_model_4_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_4_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_459[i]);
}

free(feature_mbfc_buffer_459);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_460[i]);
}

free(feature_mbfc_buffer_460);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_5_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_5_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_461[i]);
}

free(mbfc_buffer_461);

free(mbfc_buffer_conv_4_model_5_conv_bn_weight);

free(mbfc_buffer_conv_4_model_5_conv_bn_bias);

free(mbfc_buffer_conv_4_model_5_conv_bn_running_mean);

free(mbfc_buffer_conv_4_model_5_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_462[i]);
}

free(mbfc_buffer_462);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_547[i]);
}

free(feature_mbfc_buffer_547);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_464[i]);
}

free(mbfc_buffer_464);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_4_model_5_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_5_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_465[i]);
}

free(feature_mbfc_buffer_465);

free(mbfc_buffer_conv_4_model_5_conv_dw_bn_weight);

free(mbfc_buffer_conv_4_model_5_conv_dw_bn_bias);

free(mbfc_buffer_conv_4_model_5_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_4_model_5_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_466[i]);
}

free(mbfc_buffer_466);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_548[i]);
}

free(feature_mbfc_buffer_548);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_468[i]);
}

free(mbfc_buffer_468);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_4_model_5_project_conv_weight[i]);
}

free(mbfc_buffer_conv_4_model_5_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_469[i]);
}

free(mbfc_buffer_469);

free(mbfc_buffer_conv_4_model_5_project_bn_weight);

free(mbfc_buffer_conv_4_model_5_project_bn_bias);

free(mbfc_buffer_conv_4_model_5_project_bn_running_mean);

free(mbfc_buffer_conv_4_model_5_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(feature_mbfc_buffer_470[i]);
}

free(feature_mbfc_buffer_470);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_471[i]);
}

free(mbfc_buffer_471);

for(uint32_t i = 0; i < 65536; i++){
    free(mbfc_buffer_conv_45_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_45_conv_conv_weight);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_472[i]);
}

free(mbfc_buffer_472);

free(mbfc_buffer_conv_45_conv_bn_weight);

free(mbfc_buffer_conv_45_conv_bn_bias);

free(mbfc_buffer_conv_45_conv_bn_running_mean);

free(mbfc_buffer_conv_45_conv_bn_running_var);

for(uint32_t i = 0; i < 512; i++){
    free(feature_mbfc_buffer_473[i]);
}

free(feature_mbfc_buffer_473);

for(uint32_t i = 0; i < 512; i++){
    free(feature_mbfc_buffer_549[i]);
}

free(feature_mbfc_buffer_549);

for(uint32_t i = 0; i < 512; i++){
    free(feature_mbfc_buffer_475[i]);
}

free(feature_mbfc_buffer_475);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_conv_45_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_45_conv_dw_conv_weight);

for(uint32_t i = 0; i < 512; i++){
    free(feature_mbfc_buffer_476[i]);
}

free(feature_mbfc_buffer_476);

free(mbfc_buffer_conv_45_conv_dw_bn_weight);

free(mbfc_buffer_conv_45_conv_dw_bn_bias);

free(mbfc_buffer_conv_45_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_45_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_477[i]);
}

free(mbfc_buffer_477);

for(uint32_t i = 0; i < 512; i++){
    free(feature_mbfc_buffer_550[i]);
}

free(feature_mbfc_buffer_550);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_479[i]);
}

free(mbfc_buffer_479);

for(uint32_t i = 0; i < 65536; i++){
    free(mbfc_buffer_conv_45_project_conv_weight[i]);
}

free(mbfc_buffer_conv_45_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_480[i]);
}

free(mbfc_buffer_480);

free(mbfc_buffer_conv_45_project_bn_weight);

free(mbfc_buffer_conv_45_project_bn_bias);

free(mbfc_buffer_conv_45_project_bn_running_mean);

free(mbfc_buffer_conv_45_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_481[i]);
}

free(mbfc_buffer_481);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_5_model_0_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_0_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_482[i]);
}

free(mbfc_buffer_482);

free(mbfc_buffer_conv_5_model_0_conv_bn_weight);

free(mbfc_buffer_conv_5_model_0_conv_bn_bias);

free(mbfc_buffer_conv_5_model_0_conv_bn_running_mean);

free(mbfc_buffer_conv_5_model_0_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_483[i]);
}

free(mbfc_buffer_483);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_551[i]);
}

free(mbfc_buffer_551);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_485[i]);
}

free(mbfc_buffer_485);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_5_model_0_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_0_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_486[i]);
}

free(feature_mbfc_buffer_486);

free(mbfc_buffer_conv_5_model_0_conv_dw_bn_weight);

free(mbfc_buffer_conv_5_model_0_conv_dw_bn_bias);

free(mbfc_buffer_conv_5_model_0_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_5_model_0_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_487[i]);
}

free(feature_mbfc_buffer_487);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_552[i]);
}

free(mbfc_buffer_552);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_489[i]);
}

free(mbfc_buffer_489);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_5_model_0_project_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_0_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_490[i]);
}

free(mbfc_buffer_490);

free(mbfc_buffer_conv_5_model_0_project_bn_weight);

free(mbfc_buffer_conv_5_model_0_project_bn_bias);

free(mbfc_buffer_conv_5_model_0_project_bn_running_mean);

free(mbfc_buffer_conv_5_model_0_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_491[i]);
}

free(mbfc_buffer_491);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_492[i]);
}

free(mbfc_buffer_492);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_5_model_1_conv_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_1_conv_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_493[i]);
}

free(mbfc_buffer_493);

free(mbfc_buffer_conv_5_model_1_conv_bn_weight);

free(mbfc_buffer_conv_5_model_1_conv_bn_bias);

free(mbfc_buffer_conv_5_model_1_conv_bn_running_mean);

free(mbfc_buffer_conv_5_model_1_conv_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_494[i]);
}

free(mbfc_buffer_494);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_553[i]);
}

free(mbfc_buffer_553);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_496[i]);
}

free(mbfc_buffer_496);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_conv_5_model_1_conv_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_1_conv_dw_conv_weight);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_497[i]);
}

free(mbfc_buffer_497);

free(mbfc_buffer_conv_5_model_1_conv_dw_bn_weight);

free(mbfc_buffer_conv_5_model_1_conv_dw_bn_bias);

free(mbfc_buffer_conv_5_model_1_conv_dw_bn_running_mean);

free(mbfc_buffer_conv_5_model_1_conv_dw_bn_running_var);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_498[i]);
}

free(feature_mbfc_buffer_498);

for(uint32_t i = 0; i < 256; i++){
    free(mbfc_buffer_554[i]);
}

free(mbfc_buffer_554);

for(uint32_t i = 0; i < 256; i++){
    free(feature_mbfc_buffer_500[i]);
}

free(feature_mbfc_buffer_500);

for(uint32_t i = 0; i < 32768; i++){
    free(mbfc_buffer_conv_5_model_1_project_conv_weight[i]);
}

free(mbfc_buffer_conv_5_model_1_project_conv_weight);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_501[i]);
}

free(mbfc_buffer_501);

free(mbfc_buffer_conv_5_model_1_project_bn_weight);

free(mbfc_buffer_conv_5_model_1_project_bn_bias);

free(mbfc_buffer_conv_5_model_1_project_bn_running_mean);

free(mbfc_buffer_conv_5_model_1_project_bn_running_var);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_502[i]);
}

free(mbfc_buffer_502);

for(uint32_t i = 0; i < 128; i++){
    free(mbfc_buffer_503[i]);
}

free(mbfc_buffer_503);

for(uint32_t i = 0; i < 65536; i++){
    free(mbfc_buffer_conv_6_sep_conv_weight[i]);
}

free(mbfc_buffer_conv_6_sep_conv_weight);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_504[i]);
}

free(mbfc_buffer_504);

free(mbfc_buffer_conv_6_sep_bn_weight);

free(mbfc_buffer_conv_6_sep_bn_bias);

free(mbfc_buffer_conv_6_sep_bn_running_mean);

free(mbfc_buffer_conv_6_sep_bn_running_var);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_505[i]);
}

free(mbfc_buffer_505);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_555[i]);
}

free(mbfc_buffer_555);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_507[i]);
}

free(mbfc_buffer_507);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_conv_6_dw_conv_weight[i]);
}

free(mbfc_buffer_conv_6_dw_conv_weight);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_508[i]);
}

free(mbfc_buffer_508);

free(mbfc_buffer_conv_6_dw_bn_weight);

free(mbfc_buffer_conv_6_dw_bn_bias);

free(mbfc_buffer_conv_6_dw_bn_running_mean);

free(mbfc_buffer_conv_6_dw_bn_running_var);

for(uint32_t i = 0; i < 512; i++){
    free(mbfc_buffer_509[i]);
}

free(mbfc_buffer_509);

free(mbfc_buffer_517);

free(mbfc_buffer_557);

free(mbfc_buffer_519);

free(mbfc_buffer_bn_weight);

free(mbfc_buffer_bn_bias);

free(mbfc_buffer_bn_running_mean);

free(mbfc_buffer_bn_running_var);

free(mbfc_buffer_520);

free(mbfc_buffer_521);

free(output_output);

free(mbfc_kernels);
free(mbfc_biases);
}
