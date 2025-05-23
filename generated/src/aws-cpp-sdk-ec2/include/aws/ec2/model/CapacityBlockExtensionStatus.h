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
  enum class CapacityBlockExtensionStatus
  {
    NOT_SET,
    payment_pending,
    payment_failed,
    payment_succeeded
  };

namespace CapacityBlockExtensionStatusMapper
{
AWS_EC2_API CapacityBlockExtensionStatus GetCapacityBlockExtensionStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityBlockExtensionStatus(CapacityBlockExtensionStatus value);
} // namespace CapacityBlockExtensionStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
