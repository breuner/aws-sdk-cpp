﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateAssetModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAssetModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetModelNameHasBeenSet)
  {
   payload.WithString("assetModelName", m_assetModelName);

  }

  if(m_assetModelTypeHasBeenSet)
  {
   payload.WithString("assetModelType", AssetModelTypeMapper::GetNameForAssetModelType(m_assetModelType));
  }

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_assetModelExternalIdHasBeenSet)
  {
   payload.WithString("assetModelExternalId", m_assetModelExternalId);

  }

  if(m_assetModelDescriptionHasBeenSet)
  {
   payload.WithString("assetModelDescription", m_assetModelDescription);

  }

  if(m_assetModelPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelPropertiesJsonList(m_assetModelProperties.size());
   for(unsigned assetModelPropertiesIndex = 0; assetModelPropertiesIndex < assetModelPropertiesJsonList.GetLength(); ++assetModelPropertiesIndex)
   {
     assetModelPropertiesJsonList[assetModelPropertiesIndex].AsObject(m_assetModelProperties[assetModelPropertiesIndex].Jsonize());
   }
   payload.WithArray("assetModelProperties", std::move(assetModelPropertiesJsonList));

  }

  if(m_assetModelHierarchiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelHierarchiesJsonList(m_assetModelHierarchies.size());
   for(unsigned assetModelHierarchiesIndex = 0; assetModelHierarchiesIndex < assetModelHierarchiesJsonList.GetLength(); ++assetModelHierarchiesIndex)
   {
     assetModelHierarchiesJsonList[assetModelHierarchiesIndex].AsObject(m_assetModelHierarchies[assetModelHierarchiesIndex].Jsonize());
   }
   payload.WithArray("assetModelHierarchies", std::move(assetModelHierarchiesJsonList));

  }

  if(m_assetModelCompositeModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetModelCompositeModelsJsonList(m_assetModelCompositeModels.size());
   for(unsigned assetModelCompositeModelsIndex = 0; assetModelCompositeModelsIndex < assetModelCompositeModelsJsonList.GetLength(); ++assetModelCompositeModelsIndex)
   {
     assetModelCompositeModelsJsonList[assetModelCompositeModelsIndex].AsObject(m_assetModelCompositeModels[assetModelCompositeModelsIndex].Jsonize());
   }
   payload.WithArray("assetModelCompositeModels", std::move(assetModelCompositeModelsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




