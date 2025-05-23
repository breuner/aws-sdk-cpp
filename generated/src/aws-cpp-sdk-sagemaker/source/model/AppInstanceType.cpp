﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppInstanceTypeMapper
      {

        static const int system_HASH = HashingUtils::HashString("system");
        static const int ml_t3_micro_HASH = HashingUtils::HashString("ml.t3.micro");
        static const int ml_t3_small_HASH = HashingUtils::HashString("ml.t3.small");
        static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
        static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
        static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
        static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_8xlarge_HASH = HashingUtils::HashString("ml.m5.8xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_16xlarge_HASH = HashingUtils::HashString("ml.m5.16xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_m5d_large_HASH = HashingUtils::HashString("ml.m5d.large");
        static const int ml_m5d_xlarge_HASH = HashingUtils::HashString("ml.m5d.xlarge");
        static const int ml_m5d_2xlarge_HASH = HashingUtils::HashString("ml.m5d.2xlarge");
        static const int ml_m5d_4xlarge_HASH = HashingUtils::HashString("ml.m5d.4xlarge");
        static const int ml_m5d_8xlarge_HASH = HashingUtils::HashString("ml.m5d.8xlarge");
        static const int ml_m5d_12xlarge_HASH = HashingUtils::HashString("ml.m5d.12xlarge");
        static const int ml_m5d_16xlarge_HASH = HashingUtils::HashString("ml.m5d.16xlarge");
        static const int ml_m5d_24xlarge_HASH = HashingUtils::HashString("ml.m5d.24xlarge");
        static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_12xlarge_HASH = HashingUtils::HashString("ml.c5.12xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5_24xlarge_HASH = HashingUtils::HashString("ml.c5.24xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_p3dn_24xlarge_HASH = HashingUtils::HashString("ml.p3dn.24xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");
        static const int ml_r5_large_HASH = HashingUtils::HashString("ml.r5.large");
        static const int ml_r5_xlarge_HASH = HashingUtils::HashString("ml.r5.xlarge");
        static const int ml_r5_2xlarge_HASH = HashingUtils::HashString("ml.r5.2xlarge");
        static const int ml_r5_4xlarge_HASH = HashingUtils::HashString("ml.r5.4xlarge");
        static const int ml_r5_8xlarge_HASH = HashingUtils::HashString("ml.r5.8xlarge");
        static const int ml_r5_12xlarge_HASH = HashingUtils::HashString("ml.r5.12xlarge");
        static const int ml_r5_16xlarge_HASH = HashingUtils::HashString("ml.r5.16xlarge");
        static const int ml_r5_24xlarge_HASH = HashingUtils::HashString("ml.r5.24xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_g6_xlarge_HASH = HashingUtils::HashString("ml.g6.xlarge");
        static const int ml_g6_2xlarge_HASH = HashingUtils::HashString("ml.g6.2xlarge");
        static const int ml_g6_4xlarge_HASH = HashingUtils::HashString("ml.g6.4xlarge");
        static const int ml_g6_8xlarge_HASH = HashingUtils::HashString("ml.g6.8xlarge");
        static const int ml_g6_12xlarge_HASH = HashingUtils::HashString("ml.g6.12xlarge");
        static const int ml_g6_16xlarge_HASH = HashingUtils::HashString("ml.g6.16xlarge");
        static const int ml_g6_24xlarge_HASH = HashingUtils::HashString("ml.g6.24xlarge");
        static const int ml_g6_48xlarge_HASH = HashingUtils::HashString("ml.g6.48xlarge");
        static const int ml_g6e_xlarge_HASH = HashingUtils::HashString("ml.g6e.xlarge");
        static const int ml_g6e_2xlarge_HASH = HashingUtils::HashString("ml.g6e.2xlarge");
        static const int ml_g6e_4xlarge_HASH = HashingUtils::HashString("ml.g6e.4xlarge");
        static const int ml_g6e_8xlarge_HASH = HashingUtils::HashString("ml.g6e.8xlarge");
        static const int ml_g6e_12xlarge_HASH = HashingUtils::HashString("ml.g6e.12xlarge");
        static const int ml_g6e_16xlarge_HASH = HashingUtils::HashString("ml.g6e.16xlarge");
        static const int ml_g6e_24xlarge_HASH = HashingUtils::HashString("ml.g6e.24xlarge");
        static const int ml_g6e_48xlarge_HASH = HashingUtils::HashString("ml.g6e.48xlarge");
        static const int ml_geospatial_interactive_HASH = HashingUtils::HashString("ml.geospatial.interactive");
        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
        static const int ml_trn1_2xlarge_HASH = HashingUtils::HashString("ml.trn1.2xlarge");
        static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
        static const int ml_trn1n_32xlarge_HASH = HashingUtils::HashString("ml.trn1n.32xlarge");
        static const int ml_p5_48xlarge_HASH = HashingUtils::HashString("ml.p5.48xlarge");
        static const int ml_p5en_48xlarge_HASH = HashingUtils::HashString("ml.p5en.48xlarge");
        static const int ml_m6i_large_HASH = HashingUtils::HashString("ml.m6i.large");
        static const int ml_m6i_xlarge_HASH = HashingUtils::HashString("ml.m6i.xlarge");
        static const int ml_m6i_2xlarge_HASH = HashingUtils::HashString("ml.m6i.2xlarge");
        static const int ml_m6i_4xlarge_HASH = HashingUtils::HashString("ml.m6i.4xlarge");
        static const int ml_m6i_8xlarge_HASH = HashingUtils::HashString("ml.m6i.8xlarge");
        static const int ml_m6i_12xlarge_HASH = HashingUtils::HashString("ml.m6i.12xlarge");
        static const int ml_m6i_16xlarge_HASH = HashingUtils::HashString("ml.m6i.16xlarge");
        static const int ml_m6i_24xlarge_HASH = HashingUtils::HashString("ml.m6i.24xlarge");
        static const int ml_m6i_32xlarge_HASH = HashingUtils::HashString("ml.m6i.32xlarge");
        static const int ml_m7i_large_HASH = HashingUtils::HashString("ml.m7i.large");
        static const int ml_m7i_xlarge_HASH = HashingUtils::HashString("ml.m7i.xlarge");
        static const int ml_m7i_2xlarge_HASH = HashingUtils::HashString("ml.m7i.2xlarge");
        static const int ml_m7i_4xlarge_HASH = HashingUtils::HashString("ml.m7i.4xlarge");
        static const int ml_m7i_8xlarge_HASH = HashingUtils::HashString("ml.m7i.8xlarge");
        static const int ml_m7i_12xlarge_HASH = HashingUtils::HashString("ml.m7i.12xlarge");
        static const int ml_m7i_16xlarge_HASH = HashingUtils::HashString("ml.m7i.16xlarge");
        static const int ml_m7i_24xlarge_HASH = HashingUtils::HashString("ml.m7i.24xlarge");
        static const int ml_m7i_48xlarge_HASH = HashingUtils::HashString("ml.m7i.48xlarge");
        static const int ml_c6i_large_HASH = HashingUtils::HashString("ml.c6i.large");
        static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
        static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
        static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
        static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
        static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
        static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
        static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
        static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
        static const int ml_c7i_large_HASH = HashingUtils::HashString("ml.c7i.large");
        static const int ml_c7i_xlarge_HASH = HashingUtils::HashString("ml.c7i.xlarge");
        static const int ml_c7i_2xlarge_HASH = HashingUtils::HashString("ml.c7i.2xlarge");
        static const int ml_c7i_4xlarge_HASH = HashingUtils::HashString("ml.c7i.4xlarge");
        static const int ml_c7i_8xlarge_HASH = HashingUtils::HashString("ml.c7i.8xlarge");
        static const int ml_c7i_12xlarge_HASH = HashingUtils::HashString("ml.c7i.12xlarge");
        static const int ml_c7i_16xlarge_HASH = HashingUtils::HashString("ml.c7i.16xlarge");
        static const int ml_c7i_24xlarge_HASH = HashingUtils::HashString("ml.c7i.24xlarge");
        static const int ml_c7i_48xlarge_HASH = HashingUtils::HashString("ml.c7i.48xlarge");
        static const int ml_r6i_large_HASH = HashingUtils::HashString("ml.r6i.large");
        static const int ml_r6i_xlarge_HASH = HashingUtils::HashString("ml.r6i.xlarge");
        static const int ml_r6i_2xlarge_HASH = HashingUtils::HashString("ml.r6i.2xlarge");
        static const int ml_r6i_4xlarge_HASH = HashingUtils::HashString("ml.r6i.4xlarge");
        static const int ml_r6i_8xlarge_HASH = HashingUtils::HashString("ml.r6i.8xlarge");
        static const int ml_r6i_12xlarge_HASH = HashingUtils::HashString("ml.r6i.12xlarge");
        static const int ml_r6i_16xlarge_HASH = HashingUtils::HashString("ml.r6i.16xlarge");
        static const int ml_r6i_24xlarge_HASH = HashingUtils::HashString("ml.r6i.24xlarge");
        static const int ml_r6i_32xlarge_HASH = HashingUtils::HashString("ml.r6i.32xlarge");
        static const int ml_r7i_large_HASH = HashingUtils::HashString("ml.r7i.large");
        static const int ml_r7i_xlarge_HASH = HashingUtils::HashString("ml.r7i.xlarge");
        static const int ml_r7i_2xlarge_HASH = HashingUtils::HashString("ml.r7i.2xlarge");
        static const int ml_r7i_4xlarge_HASH = HashingUtils::HashString("ml.r7i.4xlarge");
        static const int ml_r7i_8xlarge_HASH = HashingUtils::HashString("ml.r7i.8xlarge");
        static const int ml_r7i_12xlarge_HASH = HashingUtils::HashString("ml.r7i.12xlarge");
        static const int ml_r7i_16xlarge_HASH = HashingUtils::HashString("ml.r7i.16xlarge");
        static const int ml_r7i_24xlarge_HASH = HashingUtils::HashString("ml.r7i.24xlarge");
        static const int ml_r7i_48xlarge_HASH = HashingUtils::HashString("ml.r7i.48xlarge");
        static const int ml_m6id_large_HASH = HashingUtils::HashString("ml.m6id.large");
        static const int ml_m6id_xlarge_HASH = HashingUtils::HashString("ml.m6id.xlarge");
        static const int ml_m6id_2xlarge_HASH = HashingUtils::HashString("ml.m6id.2xlarge");
        static const int ml_m6id_4xlarge_HASH = HashingUtils::HashString("ml.m6id.4xlarge");
        static const int ml_m6id_8xlarge_HASH = HashingUtils::HashString("ml.m6id.8xlarge");
        static const int ml_m6id_12xlarge_HASH = HashingUtils::HashString("ml.m6id.12xlarge");
        static const int ml_m6id_16xlarge_HASH = HashingUtils::HashString("ml.m6id.16xlarge");
        static const int ml_m6id_24xlarge_HASH = HashingUtils::HashString("ml.m6id.24xlarge");
        static const int ml_m6id_32xlarge_HASH = HashingUtils::HashString("ml.m6id.32xlarge");
        static const int ml_c6id_large_HASH = HashingUtils::HashString("ml.c6id.large");
        static const int ml_c6id_xlarge_HASH = HashingUtils::HashString("ml.c6id.xlarge");
        static const int ml_c6id_2xlarge_HASH = HashingUtils::HashString("ml.c6id.2xlarge");
        static const int ml_c6id_4xlarge_HASH = HashingUtils::HashString("ml.c6id.4xlarge");
        static const int ml_c6id_8xlarge_HASH = HashingUtils::HashString("ml.c6id.8xlarge");
        static const int ml_c6id_12xlarge_HASH = HashingUtils::HashString("ml.c6id.12xlarge");
        static const int ml_c6id_16xlarge_HASH = HashingUtils::HashString("ml.c6id.16xlarge");
        static const int ml_c6id_24xlarge_HASH = HashingUtils::HashString("ml.c6id.24xlarge");
        static const int ml_c6id_32xlarge_HASH = HashingUtils::HashString("ml.c6id.32xlarge");
        static const int ml_r6id_large_HASH = HashingUtils::HashString("ml.r6id.large");
        static const int ml_r6id_xlarge_HASH = HashingUtils::HashString("ml.r6id.xlarge");
        static const int ml_r6id_2xlarge_HASH = HashingUtils::HashString("ml.r6id.2xlarge");
        static const int ml_r6id_4xlarge_HASH = HashingUtils::HashString("ml.r6id.4xlarge");
        static const int ml_r6id_8xlarge_HASH = HashingUtils::HashString("ml.r6id.8xlarge");
        static const int ml_r6id_12xlarge_HASH = HashingUtils::HashString("ml.r6id.12xlarge");
        static const int ml_r6id_16xlarge_HASH = HashingUtils::HashString("ml.r6id.16xlarge");
        static const int ml_r6id_24xlarge_HASH = HashingUtils::HashString("ml.r6id.24xlarge");
        static const int ml_r6id_32xlarge_HASH = HashingUtils::HashString("ml.r6id.32xlarge");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, AppInstanceType& enumValue)
        {
          if (hashCode == system_HASH)
          {
            enumValue = AppInstanceType::system;
            return true;
          }
          else if (hashCode == ml_t3_micro_HASH)
          {
            enumValue = AppInstanceType::ml_t3_micro;
            return true;
          }
          else if (hashCode == ml_t3_small_HASH)
          {
            enumValue = AppInstanceType::ml_t3_small;
            return true;
          }
          else if (hashCode == ml_t3_medium_HASH)
          {
            enumValue = AppInstanceType::ml_t3_medium;
            return true;
          }
          else if (hashCode == ml_t3_large_HASH)
          {
            enumValue = AppInstanceType::ml_t3_large;
            return true;
          }
          else if (hashCode == ml_t3_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_t3_xlarge;
            return true;
          }
          else if (hashCode == ml_t3_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_t3_2xlarge;
            return true;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            enumValue = AppInstanceType::ml_m5_large;
            return true;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_xlarge;
            return true;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_2xlarge;
            return true;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_4xlarge;
            return true;
          }
          else if (hashCode == ml_m5_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_8xlarge;
            return true;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_12xlarge;
            return true;
          }
          else if (hashCode == ml_m5_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_16xlarge;
            return true;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5_24xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_large_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_large;
            return true;
          }
          else if (hashCode == ml_m5d_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_2xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_4xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_8xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_12xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_16xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m5d_24xlarge;
            return true;
          }
          else if (hashCode == ml_c5_large_HASH)
          {
            enumValue = AppInstanceType::ml_c5_large;
            return true;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_xlarge;
            return true;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_2xlarge;
            return true;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_4xlarge;
            return true;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_9xlarge;
            return true;
          }
          else if (hashCode == ml_c5_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_12xlarge;
            return true;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_18xlarge;
            return true;
          }
          else if (hashCode == ml_c5_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c5_24xlarge;
            return true;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p3_2xlarge;
            return true;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p3_8xlarge;
            return true;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p3_16xlarge;
            return true;
          }
          else if (hashCode == ml_p3dn_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p3dn_24xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_2xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_4xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_8xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_12xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g4dn_16xlarge;
            return true;
          }
          else if (hashCode == ml_r5_large_HASH)
          {
            enumValue = AppInstanceType::ml_r5_large;
            return true;
          }
          else if (hashCode == ml_r5_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_xlarge;
            return true;
          }
          else if (hashCode == ml_r5_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_2xlarge;
            return true;
          }
          else if (hashCode == ml_r5_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_4xlarge;
            return true;
          }
          else if (hashCode == ml_r5_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_8xlarge;
            return true;
          }
          else if (hashCode == ml_r5_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_12xlarge;
            return true;
          }
          else if (hashCode == ml_r5_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_16xlarge;
            return true;
          }
          else if (hashCode == ml_r5_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r5_24xlarge;
            return true;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_xlarge;
            return true;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_2xlarge;
            return true;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_4xlarge;
            return true;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_8xlarge;
            return true;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_16xlarge;
            return true;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_12xlarge;
            return true;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_24xlarge;
            return true;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g5_48xlarge;
            return true;
          }
          else if (hashCode == ml_g6_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_xlarge;
            return true;
          }
          else if (hashCode == ml_g6_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_2xlarge;
            return true;
          }
          else if (hashCode == ml_g6_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_4xlarge;
            return true;
          }
          else if (hashCode == ml_g6_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_8xlarge;
            return true;
          }
          else if (hashCode == ml_g6_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_12xlarge;
            return true;
          }
          else if (hashCode == ml_g6_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_16xlarge;
            return true;
          }
          else if (hashCode == ml_g6_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_24xlarge;
            return true;
          }
          else if (hashCode == ml_g6_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6_48xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_2xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_4xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_8xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_12xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_16xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_24xlarge;
            return true;
          }
          else if (hashCode == ml_g6e_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_g6e_48xlarge;
            return true;
          }
          else if (hashCode == ml_geospatial_interactive_HASH)
          {
            enumValue = AppInstanceType::ml_geospatial_interactive;
            return true;
          }
          else if (hashCode == ml_p4d_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p4d_24xlarge;
            return true;
          }
          else if (hashCode == ml_p4de_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p4de_24xlarge;
            return true;
          }
          else if (hashCode == ml_trn1_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_trn1_2xlarge;
            return true;
          }
          else if (hashCode == ml_trn1_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_trn1_32xlarge;
            return true;
          }
          else if (hashCode == ml_trn1n_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_trn1n_32xlarge;
            return true;
          }
          else if (hashCode == ml_p5_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p5_48xlarge;
            return true;
          }
          else if (hashCode == ml_p5en_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_p5en_48xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_large_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_large;
            return true;
          }
          else if (hashCode == ml_m6i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_2xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_4xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_8xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_12xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_16xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_24xlarge;
            return true;
          }
          else if (hashCode == ml_m6i_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6i_32xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_large_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_large;
            return true;
          }
          else if (hashCode == ml_m7i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_2xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_4xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_8xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_12xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_16xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_24xlarge;
            return true;
          }
          else if (hashCode == ml_m7i_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m7i_48xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_large_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_large;
            return true;
          }
          else if (hashCode == ml_c6i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_2xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_24xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6i_32xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_large_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_large;
            return true;
          }
          else if (hashCode == ml_c7i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_2xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_4xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_8xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_12xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_16xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_24xlarge;
            return true;
          }
          else if (hashCode == ml_c7i_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c7i_48xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_large_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_large;
            return true;
          }
          else if (hashCode == ml_r6i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_2xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_4xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_8xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, AppInstanceType& enumValue)
        {
          if (hashCode == ml_r6i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_12xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_16xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_24xlarge;
            return true;
          }
          else if (hashCode == ml_r6i_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6i_32xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_large_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_large;
            return true;
          }
          else if (hashCode == ml_r7i_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_2xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_4xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_8xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_12xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_16xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_24xlarge;
            return true;
          }
          else if (hashCode == ml_r7i_48xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r7i_48xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_large_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_large;
            return true;
          }
          else if (hashCode == ml_m6id_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_2xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_4xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_8xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_12xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_16xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_24xlarge;
            return true;
          }
          else if (hashCode == ml_m6id_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_m6id_32xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_large_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_large;
            return true;
          }
          else if (hashCode == ml_c6id_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_2xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_24xlarge;
            return true;
          }
          else if (hashCode == ml_c6id_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_c6id_32xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_large_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_large;
            return true;
          }
          else if (hashCode == ml_r6id_xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_2xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_2xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_4xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_4xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_8xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_8xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_12xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_12xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_16xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_16xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_24xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_24xlarge;
            return true;
          }
          else if (hashCode == ml_r6id_32xlarge_HASH)
          {
            enumValue = AppInstanceType::ml_r6id_32xlarge;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(AppInstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case AppInstanceType::system:
            value = "system";
            return true;
          case AppInstanceType::ml_t3_micro:
            value = "ml.t3.micro";
            return true;
          case AppInstanceType::ml_t3_small:
            value = "ml.t3.small";
            return true;
          case AppInstanceType::ml_t3_medium:
            value = "ml.t3.medium";
            return true;
          case AppInstanceType::ml_t3_large:
            value = "ml.t3.large";
            return true;
          case AppInstanceType::ml_t3_xlarge:
            value = "ml.t3.xlarge";
            return true;
          case AppInstanceType::ml_t3_2xlarge:
            value = "ml.t3.2xlarge";
            return true;
          case AppInstanceType::ml_m5_large:
            value = "ml.m5.large";
            return true;
          case AppInstanceType::ml_m5_xlarge:
            value = "ml.m5.xlarge";
            return true;
          case AppInstanceType::ml_m5_2xlarge:
            value = "ml.m5.2xlarge";
            return true;
          case AppInstanceType::ml_m5_4xlarge:
            value = "ml.m5.4xlarge";
            return true;
          case AppInstanceType::ml_m5_8xlarge:
            value = "ml.m5.8xlarge";
            return true;
          case AppInstanceType::ml_m5_12xlarge:
            value = "ml.m5.12xlarge";
            return true;
          case AppInstanceType::ml_m5_16xlarge:
            value = "ml.m5.16xlarge";
            return true;
          case AppInstanceType::ml_m5_24xlarge:
            value = "ml.m5.24xlarge";
            return true;
          case AppInstanceType::ml_m5d_large:
            value = "ml.m5d.large";
            return true;
          case AppInstanceType::ml_m5d_xlarge:
            value = "ml.m5d.xlarge";
            return true;
          case AppInstanceType::ml_m5d_2xlarge:
            value = "ml.m5d.2xlarge";
            return true;
          case AppInstanceType::ml_m5d_4xlarge:
            value = "ml.m5d.4xlarge";
            return true;
          case AppInstanceType::ml_m5d_8xlarge:
            value = "ml.m5d.8xlarge";
            return true;
          case AppInstanceType::ml_m5d_12xlarge:
            value = "ml.m5d.12xlarge";
            return true;
          case AppInstanceType::ml_m5d_16xlarge:
            value = "ml.m5d.16xlarge";
            return true;
          case AppInstanceType::ml_m5d_24xlarge:
            value = "ml.m5d.24xlarge";
            return true;
          case AppInstanceType::ml_c5_large:
            value = "ml.c5.large";
            return true;
          case AppInstanceType::ml_c5_xlarge:
            value = "ml.c5.xlarge";
            return true;
          case AppInstanceType::ml_c5_2xlarge:
            value = "ml.c5.2xlarge";
            return true;
          case AppInstanceType::ml_c5_4xlarge:
            value = "ml.c5.4xlarge";
            return true;
          case AppInstanceType::ml_c5_9xlarge:
            value = "ml.c5.9xlarge";
            return true;
          case AppInstanceType::ml_c5_12xlarge:
            value = "ml.c5.12xlarge";
            return true;
          case AppInstanceType::ml_c5_18xlarge:
            value = "ml.c5.18xlarge";
            return true;
          case AppInstanceType::ml_c5_24xlarge:
            value = "ml.c5.24xlarge";
            return true;
          case AppInstanceType::ml_p3_2xlarge:
            value = "ml.p3.2xlarge";
            return true;
          case AppInstanceType::ml_p3_8xlarge:
            value = "ml.p3.8xlarge";
            return true;
          case AppInstanceType::ml_p3_16xlarge:
            value = "ml.p3.16xlarge";
            return true;
          case AppInstanceType::ml_p3dn_24xlarge:
            value = "ml.p3dn.24xlarge";
            return true;
          case AppInstanceType::ml_g4dn_xlarge:
            value = "ml.g4dn.xlarge";
            return true;
          case AppInstanceType::ml_g4dn_2xlarge:
            value = "ml.g4dn.2xlarge";
            return true;
          case AppInstanceType::ml_g4dn_4xlarge:
            value = "ml.g4dn.4xlarge";
            return true;
          case AppInstanceType::ml_g4dn_8xlarge:
            value = "ml.g4dn.8xlarge";
            return true;
          case AppInstanceType::ml_g4dn_12xlarge:
            value = "ml.g4dn.12xlarge";
            return true;
          case AppInstanceType::ml_g4dn_16xlarge:
            value = "ml.g4dn.16xlarge";
            return true;
          case AppInstanceType::ml_r5_large:
            value = "ml.r5.large";
            return true;
          case AppInstanceType::ml_r5_xlarge:
            value = "ml.r5.xlarge";
            return true;
          case AppInstanceType::ml_r5_2xlarge:
            value = "ml.r5.2xlarge";
            return true;
          case AppInstanceType::ml_r5_4xlarge:
            value = "ml.r5.4xlarge";
            return true;
          case AppInstanceType::ml_r5_8xlarge:
            value = "ml.r5.8xlarge";
            return true;
          case AppInstanceType::ml_r5_12xlarge:
            value = "ml.r5.12xlarge";
            return true;
          case AppInstanceType::ml_r5_16xlarge:
            value = "ml.r5.16xlarge";
            return true;
          case AppInstanceType::ml_r5_24xlarge:
            value = "ml.r5.24xlarge";
            return true;
          case AppInstanceType::ml_g5_xlarge:
            value = "ml.g5.xlarge";
            return true;
          case AppInstanceType::ml_g5_2xlarge:
            value = "ml.g5.2xlarge";
            return true;
          case AppInstanceType::ml_g5_4xlarge:
            value = "ml.g5.4xlarge";
            return true;
          case AppInstanceType::ml_g5_8xlarge:
            value = "ml.g5.8xlarge";
            return true;
          case AppInstanceType::ml_g5_16xlarge:
            value = "ml.g5.16xlarge";
            return true;
          case AppInstanceType::ml_g5_12xlarge:
            value = "ml.g5.12xlarge";
            return true;
          case AppInstanceType::ml_g5_24xlarge:
            value = "ml.g5.24xlarge";
            return true;
          case AppInstanceType::ml_g5_48xlarge:
            value = "ml.g5.48xlarge";
            return true;
          case AppInstanceType::ml_g6_xlarge:
            value = "ml.g6.xlarge";
            return true;
          case AppInstanceType::ml_g6_2xlarge:
            value = "ml.g6.2xlarge";
            return true;
          case AppInstanceType::ml_g6_4xlarge:
            value = "ml.g6.4xlarge";
            return true;
          case AppInstanceType::ml_g6_8xlarge:
            value = "ml.g6.8xlarge";
            return true;
          case AppInstanceType::ml_g6_12xlarge:
            value = "ml.g6.12xlarge";
            return true;
          case AppInstanceType::ml_g6_16xlarge:
            value = "ml.g6.16xlarge";
            return true;
          case AppInstanceType::ml_g6_24xlarge:
            value = "ml.g6.24xlarge";
            return true;
          case AppInstanceType::ml_g6_48xlarge:
            value = "ml.g6.48xlarge";
            return true;
          case AppInstanceType::ml_g6e_xlarge:
            value = "ml.g6e.xlarge";
            return true;
          case AppInstanceType::ml_g6e_2xlarge:
            value = "ml.g6e.2xlarge";
            return true;
          case AppInstanceType::ml_g6e_4xlarge:
            value = "ml.g6e.4xlarge";
            return true;
          case AppInstanceType::ml_g6e_8xlarge:
            value = "ml.g6e.8xlarge";
            return true;
          case AppInstanceType::ml_g6e_12xlarge:
            value = "ml.g6e.12xlarge";
            return true;
          case AppInstanceType::ml_g6e_16xlarge:
            value = "ml.g6e.16xlarge";
            return true;
          case AppInstanceType::ml_g6e_24xlarge:
            value = "ml.g6e.24xlarge";
            return true;
          case AppInstanceType::ml_g6e_48xlarge:
            value = "ml.g6e.48xlarge";
            return true;
          case AppInstanceType::ml_geospatial_interactive:
            value = "ml.geospatial.interactive";
            return true;
          case AppInstanceType::ml_p4d_24xlarge:
            value = "ml.p4d.24xlarge";
            return true;
          case AppInstanceType::ml_p4de_24xlarge:
            value = "ml.p4de.24xlarge";
            return true;
          case AppInstanceType::ml_trn1_2xlarge:
            value = "ml.trn1.2xlarge";
            return true;
          case AppInstanceType::ml_trn1_32xlarge:
            value = "ml.trn1.32xlarge";
            return true;
          case AppInstanceType::ml_trn1n_32xlarge:
            value = "ml.trn1n.32xlarge";
            return true;
          case AppInstanceType::ml_p5_48xlarge:
            value = "ml.p5.48xlarge";
            return true;
          case AppInstanceType::ml_p5en_48xlarge:
            value = "ml.p5en.48xlarge";
            return true;
          case AppInstanceType::ml_m6i_large:
            value = "ml.m6i.large";
            return true;
          case AppInstanceType::ml_m6i_xlarge:
            value = "ml.m6i.xlarge";
            return true;
          case AppInstanceType::ml_m6i_2xlarge:
            value = "ml.m6i.2xlarge";
            return true;
          case AppInstanceType::ml_m6i_4xlarge:
            value = "ml.m6i.4xlarge";
            return true;
          case AppInstanceType::ml_m6i_8xlarge:
            value = "ml.m6i.8xlarge";
            return true;
          case AppInstanceType::ml_m6i_12xlarge:
            value = "ml.m6i.12xlarge";
            return true;
          case AppInstanceType::ml_m6i_16xlarge:
            value = "ml.m6i.16xlarge";
            return true;
          case AppInstanceType::ml_m6i_24xlarge:
            value = "ml.m6i.24xlarge";
            return true;
          case AppInstanceType::ml_m6i_32xlarge:
            value = "ml.m6i.32xlarge";
            return true;
          case AppInstanceType::ml_m7i_large:
            value = "ml.m7i.large";
            return true;
          case AppInstanceType::ml_m7i_xlarge:
            value = "ml.m7i.xlarge";
            return true;
          case AppInstanceType::ml_m7i_2xlarge:
            value = "ml.m7i.2xlarge";
            return true;
          case AppInstanceType::ml_m7i_4xlarge:
            value = "ml.m7i.4xlarge";
            return true;
          case AppInstanceType::ml_m7i_8xlarge:
            value = "ml.m7i.8xlarge";
            return true;
          case AppInstanceType::ml_m7i_12xlarge:
            value = "ml.m7i.12xlarge";
            return true;
          case AppInstanceType::ml_m7i_16xlarge:
            value = "ml.m7i.16xlarge";
            return true;
          case AppInstanceType::ml_m7i_24xlarge:
            value = "ml.m7i.24xlarge";
            return true;
          case AppInstanceType::ml_m7i_48xlarge:
            value = "ml.m7i.48xlarge";
            return true;
          case AppInstanceType::ml_c6i_large:
            value = "ml.c6i.large";
            return true;
          case AppInstanceType::ml_c6i_xlarge:
            value = "ml.c6i.xlarge";
            return true;
          case AppInstanceType::ml_c6i_2xlarge:
            value = "ml.c6i.2xlarge";
            return true;
          case AppInstanceType::ml_c6i_4xlarge:
            value = "ml.c6i.4xlarge";
            return true;
          case AppInstanceType::ml_c6i_8xlarge:
            value = "ml.c6i.8xlarge";
            return true;
          case AppInstanceType::ml_c6i_12xlarge:
            value = "ml.c6i.12xlarge";
            return true;
          case AppInstanceType::ml_c6i_16xlarge:
            value = "ml.c6i.16xlarge";
            return true;
          case AppInstanceType::ml_c6i_24xlarge:
            value = "ml.c6i.24xlarge";
            return true;
          case AppInstanceType::ml_c6i_32xlarge:
            value = "ml.c6i.32xlarge";
            return true;
          case AppInstanceType::ml_c7i_large:
            value = "ml.c7i.large";
            return true;
          case AppInstanceType::ml_c7i_xlarge:
            value = "ml.c7i.xlarge";
            return true;
          case AppInstanceType::ml_c7i_2xlarge:
            value = "ml.c7i.2xlarge";
            return true;
          case AppInstanceType::ml_c7i_4xlarge:
            value = "ml.c7i.4xlarge";
            return true;
          case AppInstanceType::ml_c7i_8xlarge:
            value = "ml.c7i.8xlarge";
            return true;
          case AppInstanceType::ml_c7i_12xlarge:
            value = "ml.c7i.12xlarge";
            return true;
          case AppInstanceType::ml_c7i_16xlarge:
            value = "ml.c7i.16xlarge";
            return true;
          case AppInstanceType::ml_c7i_24xlarge:
            value = "ml.c7i.24xlarge";
            return true;
          case AppInstanceType::ml_c7i_48xlarge:
            value = "ml.c7i.48xlarge";
            return true;
          case AppInstanceType::ml_r6i_large:
            value = "ml.r6i.large";
            return true;
          case AppInstanceType::ml_r6i_xlarge:
            value = "ml.r6i.xlarge";
            return true;
          case AppInstanceType::ml_r6i_2xlarge:
            value = "ml.r6i.2xlarge";
            return true;
          case AppInstanceType::ml_r6i_4xlarge:
            value = "ml.r6i.4xlarge";
            return true;
          case AppInstanceType::ml_r6i_8xlarge:
            value = "ml.r6i.8xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(AppInstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case AppInstanceType::ml_r6i_12xlarge:
            value = "ml.r6i.12xlarge";
            return true;
          case AppInstanceType::ml_r6i_16xlarge:
            value = "ml.r6i.16xlarge";
            return true;
          case AppInstanceType::ml_r6i_24xlarge:
            value = "ml.r6i.24xlarge";
            return true;
          case AppInstanceType::ml_r6i_32xlarge:
            value = "ml.r6i.32xlarge";
            return true;
          case AppInstanceType::ml_r7i_large:
            value = "ml.r7i.large";
            return true;
          case AppInstanceType::ml_r7i_xlarge:
            value = "ml.r7i.xlarge";
            return true;
          case AppInstanceType::ml_r7i_2xlarge:
            value = "ml.r7i.2xlarge";
            return true;
          case AppInstanceType::ml_r7i_4xlarge:
            value = "ml.r7i.4xlarge";
            return true;
          case AppInstanceType::ml_r7i_8xlarge:
            value = "ml.r7i.8xlarge";
            return true;
          case AppInstanceType::ml_r7i_12xlarge:
            value = "ml.r7i.12xlarge";
            return true;
          case AppInstanceType::ml_r7i_16xlarge:
            value = "ml.r7i.16xlarge";
            return true;
          case AppInstanceType::ml_r7i_24xlarge:
            value = "ml.r7i.24xlarge";
            return true;
          case AppInstanceType::ml_r7i_48xlarge:
            value = "ml.r7i.48xlarge";
            return true;
          case AppInstanceType::ml_m6id_large:
            value = "ml.m6id.large";
            return true;
          case AppInstanceType::ml_m6id_xlarge:
            value = "ml.m6id.xlarge";
            return true;
          case AppInstanceType::ml_m6id_2xlarge:
            value = "ml.m6id.2xlarge";
            return true;
          case AppInstanceType::ml_m6id_4xlarge:
            value = "ml.m6id.4xlarge";
            return true;
          case AppInstanceType::ml_m6id_8xlarge:
            value = "ml.m6id.8xlarge";
            return true;
          case AppInstanceType::ml_m6id_12xlarge:
            value = "ml.m6id.12xlarge";
            return true;
          case AppInstanceType::ml_m6id_16xlarge:
            value = "ml.m6id.16xlarge";
            return true;
          case AppInstanceType::ml_m6id_24xlarge:
            value = "ml.m6id.24xlarge";
            return true;
          case AppInstanceType::ml_m6id_32xlarge:
            value = "ml.m6id.32xlarge";
            return true;
          case AppInstanceType::ml_c6id_large:
            value = "ml.c6id.large";
            return true;
          case AppInstanceType::ml_c6id_xlarge:
            value = "ml.c6id.xlarge";
            return true;
          case AppInstanceType::ml_c6id_2xlarge:
            value = "ml.c6id.2xlarge";
            return true;
          case AppInstanceType::ml_c6id_4xlarge:
            value = "ml.c6id.4xlarge";
            return true;
          case AppInstanceType::ml_c6id_8xlarge:
            value = "ml.c6id.8xlarge";
            return true;
          case AppInstanceType::ml_c6id_12xlarge:
            value = "ml.c6id.12xlarge";
            return true;
          case AppInstanceType::ml_c6id_16xlarge:
            value = "ml.c6id.16xlarge";
            return true;
          case AppInstanceType::ml_c6id_24xlarge:
            value = "ml.c6id.24xlarge";
            return true;
          case AppInstanceType::ml_c6id_32xlarge:
            value = "ml.c6id.32xlarge";
            return true;
          case AppInstanceType::ml_r6id_large:
            value = "ml.r6id.large";
            return true;
          case AppInstanceType::ml_r6id_xlarge:
            value = "ml.r6id.xlarge";
            return true;
          case AppInstanceType::ml_r6id_2xlarge:
            value = "ml.r6id.2xlarge";
            return true;
          case AppInstanceType::ml_r6id_4xlarge:
            value = "ml.r6id.4xlarge";
            return true;
          case AppInstanceType::ml_r6id_8xlarge:
            value = "ml.r6id.8xlarge";
            return true;
          case AppInstanceType::ml_r6id_12xlarge:
            value = "ml.r6id.12xlarge";
            return true;
          case AppInstanceType::ml_r6id_16xlarge:
            value = "ml.r6id.16xlarge";
            return true;
          case AppInstanceType::ml_r6id_24xlarge:
            value = "ml.r6id.24xlarge";
            return true;
          case AppInstanceType::ml_r6id_32xlarge:
            value = "ml.r6id.32xlarge";
            return true;
          default:
            return false;
          }
        }

        AppInstanceType GetAppInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          AppInstanceType enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppInstanceType>(hashCode);
          }

          return AppInstanceType::NOT_SET;
        }

        Aws::String GetNameForAppInstanceType(AppInstanceType enumValue)
        {
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace AppInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
