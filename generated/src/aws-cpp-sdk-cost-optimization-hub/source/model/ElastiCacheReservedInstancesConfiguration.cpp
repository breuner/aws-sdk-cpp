﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstancesConfiguration.h>
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

ElastiCacheReservedInstancesConfiguration::ElastiCacheReservedInstancesConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ElastiCacheReservedInstancesConfiguration& ElastiCacheReservedInstancesConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountScope"))
  {
    m_accountScope = jsonValue.GetString("accountScope");
    m_accountScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetString("term");
    m_termHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservedInstancesRegion"))
  {
    m_reservedInstancesRegion = jsonValue.GetString("reservedInstancesRegion");
    m_reservedInstancesRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("upfrontCost");
    m_upfrontCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyRecurringCost"))
  {
    m_monthlyRecurringCost = jsonValue.GetString("monthlyRecurringCost");
    m_monthlyRecurringCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("normalizedUnitsToPurchase"))
  {
    m_normalizedUnitsToPurchase = jsonValue.GetString("normalizedUnitsToPurchase");
    m_normalizedUnitsToPurchaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfInstancesToPurchase"))
  {
    m_numberOfInstancesToPurchase = jsonValue.GetString("numberOfInstancesToPurchase");
    m_numberOfInstancesToPurchaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceFamily"))
  {
    m_instanceFamily = jsonValue.GetString("instanceFamily");
    m_instanceFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentGeneration"))
  {
    m_currentGeneration = jsonValue.GetString("currentGeneration");
    m_currentGenerationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sizeFlexEligible"))
  {
    m_sizeFlexEligible = jsonValue.GetBool("sizeFlexEligible");
    m_sizeFlexEligibleHasBeenSet = true;
  }
  return *this;
}

JsonValue ElastiCacheReservedInstancesConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("accountScope", m_accountScope);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_termHasBeenSet)
  {
   payload.WithString("term", m_term);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_reservedInstancesRegionHasBeenSet)
  {
   payload.WithString("reservedInstancesRegion", m_reservedInstancesRegion);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("upfrontCost", m_upfrontCost);

  }

  if(m_monthlyRecurringCostHasBeenSet)
  {
   payload.WithString("monthlyRecurringCost", m_monthlyRecurringCost);

  }

  if(m_normalizedUnitsToPurchaseHasBeenSet)
  {
   payload.WithString("normalizedUnitsToPurchase", m_normalizedUnitsToPurchase);

  }

  if(m_numberOfInstancesToPurchaseHasBeenSet)
  {
   payload.WithString("numberOfInstancesToPurchase", m_numberOfInstancesToPurchase);

  }

  if(m_instanceFamilyHasBeenSet)
  {
   payload.WithString("instanceFamily", m_instanceFamily);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_currentGenerationHasBeenSet)
  {
   payload.WithString("currentGeneration", m_currentGeneration);

  }

  if(m_sizeFlexEligibleHasBeenSet)
  {
   payload.WithBool("sizeFlexEligible", m_sizeFlexEligible);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
