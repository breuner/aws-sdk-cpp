﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateDistributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDistributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_distributionNameHasBeenSet)
  {
   payload.WithString("distributionName", m_distributionName);

  }

  if(m_originHasBeenSet)
  {
   payload.WithObject("origin", m_origin.Jsonize());

  }

  if(m_defaultCacheBehaviorHasBeenSet)
  {
   payload.WithObject("defaultCacheBehavior", m_defaultCacheBehavior.Jsonize());

  }

  if(m_cacheBehaviorSettingsHasBeenSet)
  {
   payload.WithObject("cacheBehaviorSettings", m_cacheBehaviorSettings.Jsonize());

  }

  if(m_cacheBehaviorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cacheBehaviorsJsonList(m_cacheBehaviors.size());
   for(unsigned cacheBehaviorsIndex = 0; cacheBehaviorsIndex < cacheBehaviorsJsonList.GetLength(); ++cacheBehaviorsIndex)
   {
     cacheBehaviorsJsonList[cacheBehaviorsIndex].AsObject(m_cacheBehaviors[cacheBehaviorsIndex].Jsonize());
   }
   payload.WithArray("cacheBehaviors", std::move(cacheBehaviorsJsonList));

  }

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("isEnabled", m_isEnabled);

  }

  if(m_viewerMinimumTlsProtocolVersionHasBeenSet)
  {
   payload.WithString("viewerMinimumTlsProtocolVersion", ViewerMinimumTlsProtocolVersionEnumMapper::GetNameForViewerMinimumTlsProtocolVersionEnum(m_viewerMinimumTlsProtocolVersion));
  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_useDefaultCertificateHasBeenSet)
  {
   payload.WithBool("useDefaultCertificate", m_useDefaultCertificate);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDistributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateDistribution"));
  return headers;

}




