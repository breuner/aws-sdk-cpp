﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetModifyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceFleetModifyConfig::InstanceFleetModifyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceFleetModifyConfig& InstanceFleetModifyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceFleetId"))
  {
    m_instanceFleetId = jsonValue.GetString("InstanceFleetId");
    m_instanceFleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetOnDemandCapacity"))
  {
    m_targetOnDemandCapacity = jsonValue.GetInteger("TargetOnDemandCapacity");
    m_targetOnDemandCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetSpotCapacity"))
  {
    m_targetSpotCapacity = jsonValue.GetInteger("TargetSpotCapacity");
    m_targetSpotCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResizeSpecifications"))
  {
    m_resizeSpecifications = jsonValue.GetObject("ResizeSpecifications");
    m_resizeSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceTypeConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceTypeConfigsJsonList = jsonValue.GetArray("InstanceTypeConfigs");
    for(unsigned instanceTypeConfigsIndex = 0; instanceTypeConfigsIndex < instanceTypeConfigsJsonList.GetLength(); ++instanceTypeConfigsIndex)
    {
      m_instanceTypeConfigs.push_back(instanceTypeConfigsJsonList[instanceTypeConfigsIndex].AsObject());
    }
    m_instanceTypeConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Context"))
  {
    m_context = jsonValue.GetString("Context");
    m_contextHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceFleetModifyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceFleetIdHasBeenSet)
  {
   payload.WithString("InstanceFleetId", m_instanceFleetId);

  }

  if(m_targetOnDemandCapacityHasBeenSet)
  {
   payload.WithInteger("TargetOnDemandCapacity", m_targetOnDemandCapacity);

  }

  if(m_targetSpotCapacityHasBeenSet)
  {
   payload.WithInteger("TargetSpotCapacity", m_targetSpotCapacity);

  }

  if(m_resizeSpecificationsHasBeenSet)
  {
   payload.WithObject("ResizeSpecifications", m_resizeSpecifications.Jsonize());

  }

  if(m_instanceTypeConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypeConfigsJsonList(m_instanceTypeConfigs.size());
   for(unsigned instanceTypeConfigsIndex = 0; instanceTypeConfigsIndex < instanceTypeConfigsJsonList.GetLength(); ++instanceTypeConfigsIndex)
   {
     instanceTypeConfigsJsonList[instanceTypeConfigsIndex].AsObject(m_instanceTypeConfigs[instanceTypeConfigsIndex].Jsonize());
   }
   payload.WithArray("InstanceTypeConfigs", std::move(instanceTypeConfigsJsonList));

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("Context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
