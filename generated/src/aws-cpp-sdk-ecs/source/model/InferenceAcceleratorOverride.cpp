﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/InferenceAcceleratorOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

InferenceAcceleratorOverride::InferenceAcceleratorOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceAcceleratorOverride& InferenceAcceleratorOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");
    m_deviceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceAcceleratorOverride::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", m_deviceType);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
