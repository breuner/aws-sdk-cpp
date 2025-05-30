﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StartAssetBundleExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAssetBundleExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetBundleExportJobIdHasBeenSet)
  {
   payload.WithString("AssetBundleExportJobId", m_assetBundleExportJobId);

  }

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("ResourceArns", std::move(resourceArnsJsonList));

  }

  if(m_includeAllDependenciesHasBeenSet)
  {
   payload.WithBool("IncludeAllDependencies", m_includeAllDependencies);

  }

  if(m_exportFormatHasBeenSet)
  {
   payload.WithString("ExportFormat", AssetBundleExportFormatMapper::GetNameForAssetBundleExportFormat(m_exportFormat));
  }

  if(m_cloudFormationOverridePropertyConfigurationHasBeenSet)
  {
   payload.WithObject("CloudFormationOverridePropertyConfiguration", m_cloudFormationOverridePropertyConfiguration.Jsonize());

  }

  if(m_includePermissionsHasBeenSet)
  {
   payload.WithBool("IncludePermissions", m_includePermissions);

  }

  if(m_includeTagsHasBeenSet)
  {
   payload.WithBool("IncludeTags", m_includeTags);

  }

  if(m_validationStrategyHasBeenSet)
  {
   payload.WithObject("ValidationStrategy", m_validationStrategy.Jsonize());

  }

  if(m_includeFolderMembershipsHasBeenSet)
  {
   payload.WithBool("IncludeFolderMemberships", m_includeFolderMemberships);

  }

  if(m_includeFolderMembersHasBeenSet)
  {
   payload.WithString("IncludeFolderMembers", IncludeFolderMembersMapper::GetNameForIncludeFolderMembers(m_includeFolderMembers));
  }

  return payload.View().WriteReadable();
}




