﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CloneStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CloneStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceStackIdHasBeenSet)
  {
   payload.WithString("SourceStackId", m_sourceStackId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(StackAttributesKeysMapper::GetNameForStackAttributesKeys(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_defaultInstanceProfileArnHasBeenSet)
  {
   payload.WithString("DefaultInstanceProfileArn", m_defaultInstanceProfileArn);

  }

  if(m_defaultOsHasBeenSet)
  {
   payload.WithString("DefaultOs", m_defaultOs);

  }

  if(m_hostnameThemeHasBeenSet)
  {
   payload.WithString("HostnameTheme", m_hostnameTheme);

  }

  if(m_defaultAvailabilityZoneHasBeenSet)
  {
   payload.WithString("DefaultAvailabilityZone", m_defaultAvailabilityZone);

  }

  if(m_defaultSubnetIdHasBeenSet)
  {
   payload.WithString("DefaultSubnetId", m_defaultSubnetId);

  }

  if(m_customJsonHasBeenSet)
  {
   payload.WithString("CustomJson", m_customJson);

  }

  if(m_configurationManagerHasBeenSet)
  {
   payload.WithObject("ConfigurationManager", m_configurationManager.Jsonize());

  }

  if(m_chefConfigurationHasBeenSet)
  {
   payload.WithObject("ChefConfiguration", m_chefConfiguration.Jsonize());

  }

  if(m_useCustomCookbooksHasBeenSet)
  {
   payload.WithBool("UseCustomCookbooks", m_useCustomCookbooks);

  }

  if(m_useOpsworksSecurityGroupsHasBeenSet)
  {
   payload.WithBool("UseOpsworksSecurityGroups", m_useOpsworksSecurityGroups);

  }

  if(m_customCookbooksSourceHasBeenSet)
  {
   payload.WithObject("CustomCookbooksSource", m_customCookbooksSource.Jsonize());

  }

  if(m_defaultSshKeyNameHasBeenSet)
  {
   payload.WithString("DefaultSshKeyName", m_defaultSshKeyName);

  }

  if(m_clonePermissionsHasBeenSet)
  {
   payload.WithBool("ClonePermissions", m_clonePermissions);

  }

  if(m_cloneAppIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloneAppIdsJsonList(m_cloneAppIds.size());
   for(unsigned cloneAppIdsIndex = 0; cloneAppIdsIndex < cloneAppIdsJsonList.GetLength(); ++cloneAppIdsIndex)
   {
     cloneAppIdsJsonList[cloneAppIdsIndex].AsString(m_cloneAppIds[cloneAppIdsIndex]);
   }
   payload.WithArray("CloneAppIds", std::move(cloneAppIdsJsonList));

  }

  if(m_defaultRootDeviceTypeHasBeenSet)
  {
   payload.WithString("DefaultRootDeviceType", RootDeviceTypeMapper::GetNameForRootDeviceType(m_defaultRootDeviceType));
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CloneStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.CloneStack"));
  return headers;

}




