﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobAnalysisOverrideTags.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleImportJobAnalysisOverrideTags::AssetBundleImportJobAnalysisOverrideTags(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetBundleImportJobAnalysisOverrideTags& AssetBundleImportJobAnalysisOverrideTags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnalysisIds"))
  {
    Aws::Utils::Array<JsonView> analysisIdsJsonList = jsonValue.GetArray("AnalysisIds");
    for(unsigned analysisIdsIndex = 0; analysisIdsIndex < analysisIdsJsonList.GetLength(); ++analysisIdsIndex)
    {
      m_analysisIds.push_back(analysisIdsJsonList[analysisIdsIndex].AsString());
    }
    m_analysisIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobAnalysisOverrideTags::Jsonize() const
{
  JsonValue payload;

  if(m_analysisIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisIdsJsonList(m_analysisIds.size());
   for(unsigned analysisIdsIndex = 0; analysisIdsIndex < analysisIdsJsonList.GetLength(); ++analysisIdsIndex)
   {
     analysisIdsJsonList[analysisIdsIndex].AsString(m_analysisIds[analysisIdsIndex]);
   }
   payload.WithArray("AnalysisIds", std::move(analysisIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
