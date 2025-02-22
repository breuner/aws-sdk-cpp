﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class NodeAggregatorType
  {
    NOT_SET,
    Count
  };

namespace NodeAggregatorTypeMapper
{
AWS_SSM_API NodeAggregatorType GetNodeAggregatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNodeAggregatorType(NodeAggregatorType value);
} // namespace NodeAggregatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
