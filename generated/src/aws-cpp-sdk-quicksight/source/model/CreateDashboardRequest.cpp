﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_sourceEntityHasBeenSet)
  {
   payload.WithObject("SourceEntity", m_sourceEntity.Jsonize());

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

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_dashboardPublishOptionsHasBeenSet)
  {
   payload.WithObject("DashboardPublishOptions", m_dashboardPublishOptions.Jsonize());

  }

  if(m_themeArnHasBeenSet)
  {
   payload.WithString("ThemeArn", m_themeArn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_validationStrategyHasBeenSet)
  {
   payload.WithObject("ValidationStrategy", m_validationStrategy.Jsonize());

  }

  if(m_folderArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderArnsJsonList(m_folderArns.size());
   for(unsigned folderArnsIndex = 0; folderArnsIndex < folderArnsJsonList.GetLength(); ++folderArnsIndex)
   {
     folderArnsJsonList[folderArnsIndex].AsString(m_folderArns[folderArnsIndex]);
   }
   payload.WithArray("FolderArns", std::move(folderArnsJsonList));

  }

  if(m_linkSharingConfigurationHasBeenSet)
  {
   payload.WithObject("LinkSharingConfiguration", m_linkSharingConfiguration.Jsonize());

  }

  if(m_linkEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkEntitiesJsonList(m_linkEntities.size());
   for(unsigned linkEntitiesIndex = 0; linkEntitiesIndex < linkEntitiesJsonList.GetLength(); ++linkEntitiesIndex)
   {
     linkEntitiesJsonList[linkEntitiesIndex].AsString(m_linkEntities[linkEntitiesIndex]);
   }
   payload.WithArray("LinkEntities", std::move(linkEntitiesJsonList));

  }

  return payload.View().WriteReadable();
}




