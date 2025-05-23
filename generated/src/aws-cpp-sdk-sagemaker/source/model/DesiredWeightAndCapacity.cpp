﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DesiredWeightAndCapacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DesiredWeightAndCapacity::DesiredWeightAndCapacity(JsonView jsonValue)
{
  *this = jsonValue;
}

DesiredWeightAndCapacity& DesiredWeightAndCapacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");
    m_variantNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredWeight"))
  {
    m_desiredWeight = jsonValue.GetDouble("DesiredWeight");
    m_desiredWeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredInstanceCount"))
  {
    m_desiredInstanceCount = jsonValue.GetInteger("DesiredInstanceCount");
    m_desiredInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerlessUpdateConfig"))
  {
    m_serverlessUpdateConfig = jsonValue.GetObject("ServerlessUpdateConfig");
    m_serverlessUpdateConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DesiredWeightAndCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_desiredWeightHasBeenSet)
  {
   payload.WithDouble("DesiredWeight", m_desiredWeight);

  }

  if(m_desiredInstanceCountHasBeenSet)
  {
   payload.WithInteger("DesiredInstanceCount", m_desiredInstanceCount);

  }

  if(m_serverlessUpdateConfigHasBeenSet)
  {
   payload.WithObject("ServerlessUpdateConfig", m_serverlessUpdateConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
