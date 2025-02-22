﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class ResourceTagLogicalOperator
  {
    NOT_SET,
    AND,
    OR
  };

namespace ResourceTagLogicalOperatorMapper
{
AWS_FMS_API ResourceTagLogicalOperator GetResourceTagLogicalOperatorForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForResourceTagLogicalOperator(ResourceTagLogicalOperator value);
} // namespace ResourceTagLogicalOperatorMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
