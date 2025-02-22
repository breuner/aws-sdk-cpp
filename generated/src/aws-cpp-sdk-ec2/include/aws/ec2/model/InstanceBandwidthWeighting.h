﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class InstanceBandwidthWeighting
  {
    NOT_SET,
    default_,
    vpc_1,
    ebs_1
  };

namespace InstanceBandwidthWeightingMapper
{
AWS_EC2_API InstanceBandwidthWeighting GetInstanceBandwidthWeightingForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceBandwidthWeighting(InstanceBandwidthWeighting value);
} // namespace InstanceBandwidthWeightingMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
