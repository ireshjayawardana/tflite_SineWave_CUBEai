/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Jul 31 15:10:13 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0x3eb4e46d3d595729U, 0x3e4de96bbe4f350eU, 0xbec2ffde3e791668U, 0x3ed1fae03edc12a8U,
  0xbed160b6bd28add7U, 0x3f0c0abd3e6a5597U, 0x3e0cf537be3a331aU, 0x3e7d7f3ebde3395cU,
  0xbcaf76c33efdaa94U, 0xbc50a59400000000U, 0xbf26b1c2U, 0xbefb5c52bebfdbb8U,
  0x3eae7251U, 0x3ed2a7cabee1048eU, 0xbe90a5a700000000U, 0xbf76af9400000000U,
  0xbe6f9013beb1e9a1U, 0xbe9c5678bec2306aU, 0x3e22cb7a3ebadffdU, 0x3e8d0bb3beb3ac84U,
  0xbd045be8bdf46af0U, 0xbecab367bed6fdebU, 0x3edb33c53cc3a510U, 0xbeb984af3d858e40U,
  0xbba6264c3f1518b7U, 0xbee2f6493e9cc64bU, 0xbe754ff0bf788024U, 0x3e92a3953db092a2U,
  0x3e8c43113ed8a65cU, 0x3ef84f73be9d9b6cU, 0xbeef925aba8fde00U, 0xbf4e7154bea84366U,
  0xbf6450243e9830e5U, 0xbf61a964be04b6c6U, 0x3e5368d2bd05bc4bU, 0xbdfc459abd9a4313U,
  0x3ed402373f4b77b7U, 0xbd29c464be4fe08aU, 0x3e9bd429be25deb6U, 0x3ebfbebe3ecb14ffU,
  0x3e8f6be3be8f233cU, 0x3dbc46eb3e532d12U, 0xbc6e7de0bf0ab7a7U, 0x3e9ec3363da6640bU,
  0x3ed23d69be1851e7U, 0xbc813c303eaa0fb5U, 0xbe00566abecade00U, 0xbf21cb1f3e93fa27U,
  0x3d9d9ef1be663866U, 0xbe1bf5fcbed64953U, 0xbe91aa263e7f8d1eU, 0x3ec122fcbd7899cfU,
  0xbe95f16dbd96ae4fU, 0xbe532d543e051560U, 0xbed7abe1be9fa027U, 0xbd7b78893e8b9bc9U,
  0xbe6c44f13dab5efbU, 0x3e245884bea91d26U, 0xbe0368babf51f081U, 0xbf09f4bcbd3947ebU,
  0xbd3df0b83ee7a45dU, 0x3ee1b7f6bd24ff9fU, 0xbf0aceff3e8a240dU, 0xbe068e983e9f97a1U,
  0xbea5096fbe0502aaU, 0x3eeec5ccbdad1bb4U, 0x3da539b4bf08f6c3U, 0xbdcd4f71bc5ec83aU,
  0xbe66449e3e814440U, 0x3d9bc36dbe9f5064U, 0xbef1ed443ea8d6c9U, 0x3e4771073d1da490U,
  0x3c2c8d83bf08102fU, 0x3da5dd3b3eac8ae1U, 0xbe5ad7c73e69d237U, 0x3ece2254bde1537cU,
  0xbec3f1bf3dbd584cU, 0x3dbbafbc3dbd932fU, 0x3e899e87bed2810aU, 0x3e579a0bbe93a230U,
  0x3e9e53e43ef302c9U, 0xbea6b71cbe8a20a8U, 0xbed8e472bf7fedffU, 0xbed58a69be8629f7U,
  0x3e41f792bd69e70fU, 0x3edf320bbddcbe06U, 0xbf16612d3ec38aefU, 0xbed18a4d3e3cb43aU,
  0xbe3f1ddcbe4c66b0U, 0xbd8de8f43cde4d50U, 0xbc61bde03e8582e5U, 0x3e4b3f5a3b9e7300U,
  0x3e3aa902be703322U, 0x3ce978c0be98790aU, 0xbda111b03dfd8e04U, 0xbe6682f1bde11f3cU,
  0x3d1056723ec9dc42U, 0x3e39243abdcecebcU, 0x3eaec5ffbefd6870U, 0xbc8a8928bc8fa6a4U,
  0x3e708f723e00eac0U, 0x3d7951cb3e86666aU, 0xbe918d16be92ef80U, 0xbefd8b63bdfc2d60U,
  0xbe08b2fcbed3407aU, 0xbe9b51663dfd68d4U, 0xbdd25e103eb771eeU, 0x3e31c2753ddfa50eU,
  0xbe6cf9b33d67509aU, 0x3d704881bed79967U, 0x3d0b3a03beacc7aaU, 0x3ea65a253e2e0faaU,
  0x3d86eedebdb91c67U, 0xbe632c3e3d704348U, 0xbed7cd323ea009c9U, 0x3e930e653ecfa573U,
  0xbdf622fcbe3e0bc4U, 0xbe7e62333e9ffdd2U, 0x3ec905eebe79aa61U, 0x3f0842193ec9921fU,
  0xbe791c53bd82c982U, 0x3d455e84be7cdc8eU, 0xbe764f5dbd5d8f78U, 0x3ce12ec0bba93a00U,
  0xbdc1c4f43e587b43U, 0xbe000688bea4e6bdU, 0xbeb7b99fbe3f2d81U, 0x3b691f82be704f77U,
  0x3e9532cabe36ef16U, 0x3e9711ee3ed08b2dU, 0x3e95765f3f598dfeU, 0xbd0a929cbec88f18U,
  0x3e40b1c6bd38f2ceU, 0x3ced32763eb80d71U, 0xbbaa58e93e9a352dU, 0x3f0a1f2dbd4dc6e8U,
  0x3dc09a8cbea2015cU, 0xbe6f46313d3992d0U, 0xbe5db9d23ecd5427U, 0xbe21040c3ebea105U,
  0x3e86d1393c787b40U, 0xbde8838cbeaa311aU, 0xbe7a39ec3ec379efU, 0x3e1259dabeac89e8U,
  0x3ece876700000000U, 0x3e147d213f12bcf1U, 0x3e93d1b5bc43237aU, 0xbf02449e3ea12f75U,
  0x3e8dde80U, 0xbc8b05d03dec014dU, 0xbc817c46bf113b51U, 0xbecd7dcfU,
  0xbeff5c6d3e87f244U, 0xbf0e14f1bf3acc9aU, 0x3f806cd33f0f4a4cU, 0x3ec489bd3f22629dU,
  0x3eea898c3fa349faU, 0x3ee100d8be5cea33U, 0x3dc234fe3f8b4ab3U, 0xbee79a263e784217U,
  0xbed52020U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

