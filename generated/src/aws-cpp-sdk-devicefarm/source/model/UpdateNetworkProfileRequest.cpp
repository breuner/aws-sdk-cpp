﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/UpdateNetworkProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNetworkProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkProfileTypeMapper::GetNameForNetworkProfileType(m_type));
  }

  if(m_uplinkBandwidthBitsHasBeenSet)
  {
   payload.WithInt64("uplinkBandwidthBits", m_uplinkBandwidthBits);

  }

  if(m_downlinkBandwidthBitsHasBeenSet)
  {
   payload.WithInt64("downlinkBandwidthBits", m_downlinkBandwidthBits);

  }

  if(m_uplinkDelayMsHasBeenSet)
  {
   payload.WithInt64("uplinkDelayMs", m_uplinkDelayMs);

  }

  if(m_downlinkDelayMsHasBeenSet)
  {
   payload.WithInt64("downlinkDelayMs", m_downlinkDelayMs);

  }

  if(m_uplinkJitterMsHasBeenSet)
  {
   payload.WithInt64("uplinkJitterMs", m_uplinkJitterMs);

  }

  if(m_downlinkJitterMsHasBeenSet)
  {
   payload.WithInt64("downlinkJitterMs", m_downlinkJitterMs);

  }

  if(m_uplinkLossPercentHasBeenSet)
  {
   payload.WithInteger("uplinkLossPercent", m_uplinkLossPercent);

  }

  if(m_downlinkLossPercentHasBeenSet)
  {
   payload.WithInteger("downlinkLossPercent", m_downlinkLossPercent);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNetworkProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.UpdateNetworkProfile"));
  return headers;

}




