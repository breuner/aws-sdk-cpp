﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateConfigurationSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateConfigurationSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_trackingOptionsHasBeenSet)
  {
   payload.WithObject("TrackingOptions", m_trackingOptions.Jsonize());

  }

  if(m_deliveryOptionsHasBeenSet)
  {
   payload.WithObject("DeliveryOptions", m_deliveryOptions.Jsonize());

  }

  if(m_reputationOptionsHasBeenSet)
  {
   payload.WithObject("ReputationOptions", m_reputationOptions.Jsonize());

  }

  if(m_sendingOptionsHasBeenSet)
  {
   payload.WithObject("SendingOptions", m_sendingOptions.Jsonize());

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

  if(m_suppressionOptionsHasBeenSet)
  {
   payload.WithObject("SuppressionOptions", m_suppressionOptions.Jsonize());

  }

  if(m_vdmOptionsHasBeenSet)
  {
   payload.WithObject("VdmOptions", m_vdmOptions.Jsonize());

  }

  if(m_archivingOptionsHasBeenSet)
  {
   payload.WithObject("ArchivingOptions", m_archivingOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




