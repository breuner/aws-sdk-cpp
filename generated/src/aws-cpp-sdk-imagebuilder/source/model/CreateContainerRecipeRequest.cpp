﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateContainerRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContainerRecipeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerTypeHasBeenSet)
  {
   payload.WithString("containerType", ContainerTypeMapper::GetNameForContainerType(m_containerType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_componentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
   for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
   {
     componentsJsonList[componentsIndex].AsObject(m_components[componentsIndex].Jsonize());
   }
   payload.WithArray("components", std::move(componentsJsonList));

  }

  if(m_instanceConfigurationHasBeenSet)
  {
   payload.WithObject("instanceConfiguration", m_instanceConfiguration.Jsonize());

  }

  if(m_dockerfileTemplateDataHasBeenSet)
  {
   payload.WithString("dockerfileTemplateData", m_dockerfileTemplateData);

  }

  if(m_dockerfileTemplateUriHasBeenSet)
  {
   payload.WithString("dockerfileTemplateUri", m_dockerfileTemplateUri);

  }

  if(m_platformOverrideHasBeenSet)
  {
   payload.WithString("platformOverride", PlatformMapper::GetNameForPlatform(m_platformOverride));
  }

  if(m_imageOsVersionOverrideHasBeenSet)
  {
   payload.WithString("imageOsVersionOverride", m_imageOsVersionOverride);

  }

  if(m_parentImageHasBeenSet)
  {
   payload.WithString("parentImage", m_parentImage);

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

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("workingDirectory", m_workingDirectory);

  }

  if(m_targetRepositoryHasBeenSet)
  {
   payload.WithObject("targetRepository", m_targetRepository.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




