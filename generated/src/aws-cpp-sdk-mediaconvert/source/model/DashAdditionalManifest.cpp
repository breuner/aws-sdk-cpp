﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashAdditionalManifest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DashAdditionalManifest::DashAdditionalManifest(JsonView jsonValue)
{
  *this = jsonValue;
}

DashAdditionalManifest& DashAdditionalManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("manifestNameModifier"))
  {
    m_manifestNameModifier = jsonValue.GetString("manifestNameModifier");
    m_manifestNameModifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectedOutputs"))
  {
    Aws::Utils::Array<JsonView> selectedOutputsJsonList = jsonValue.GetArray("selectedOutputs");
    for(unsigned selectedOutputsIndex = 0; selectedOutputsIndex < selectedOutputsJsonList.GetLength(); ++selectedOutputsIndex)
    {
      m_selectedOutputs.push_back(selectedOutputsJsonList[selectedOutputsIndex].AsString());
    }
    m_selectedOutputsHasBeenSet = true;
  }
  return *this;
}

JsonValue DashAdditionalManifest::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameModifierHasBeenSet)
  {
   payload.WithString("manifestNameModifier", m_manifestNameModifier);

  }

  if(m_selectedOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedOutputsJsonList(m_selectedOutputs.size());
   for(unsigned selectedOutputsIndex = 0; selectedOutputsIndex < selectedOutputsJsonList.GetLength(); ++selectedOutputsIndex)
   {
     selectedOutputsJsonList[selectedOutputsIndex].AsString(m_selectedOutputs[selectedOutputsIndex]);
   }
   payload.WithArray("selectedOutputs", std::move(selectedOutputsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
