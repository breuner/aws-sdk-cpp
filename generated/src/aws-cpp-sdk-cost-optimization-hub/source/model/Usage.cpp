﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Usage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

Usage::Usage(JsonView jsonValue)
{
  *this = jsonValue;
}

Usage& Usage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAmount"))
  {
    m_usageAmount = jsonValue.GetDouble("usageAmount");
    m_usageAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCode"))
  {
    m_productCode = jsonValue.GetString("productCode");
    m_productCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue Usage::Jsonize() const
{
  JsonValue payload;

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_usageAmountHasBeenSet)
  {
   payload.WithDouble("usageAmount", m_usageAmount);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("productCode", m_productCode);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
