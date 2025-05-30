﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpRouteAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

HttpRouteAction::HttpRouteAction(JsonView jsonValue)
{
  *this = jsonValue;
}

HttpRouteAction& HttpRouteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("weightedTargets"))
  {
    Aws::Utils::Array<JsonView> weightedTargetsJsonList = jsonValue.GetArray("weightedTargets");
    for(unsigned weightedTargetsIndex = 0; weightedTargetsIndex < weightedTargetsJsonList.GetLength(); ++weightedTargetsIndex)
    {
      m_weightedTargets.push_back(weightedTargetsJsonList[weightedTargetsIndex].AsObject());
    }
    m_weightedTargetsHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpRouteAction::Jsonize() const
{
  JsonValue payload;

  if(m_weightedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weightedTargetsJsonList(m_weightedTargets.size());
   for(unsigned weightedTargetsIndex = 0; weightedTargetsIndex < weightedTargetsJsonList.GetLength(); ++weightedTargetsIndex)
   {
     weightedTargetsJsonList[weightedTargetsIndex].AsObject(m_weightedTargets[weightedTargetsIndex].Jsonize());
   }
   payload.WithArray("weightedTargets", std::move(weightedTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
