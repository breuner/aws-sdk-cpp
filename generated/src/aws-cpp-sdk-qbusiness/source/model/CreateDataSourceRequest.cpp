﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_configurationHasBeenSet)
  {
    if(!m_configuration.View().IsNull())
    {
       payload.WithObject("configuration", JsonValue(m_configuration.View()));
    }
  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_syncScheduleHasBeenSet)
  {
   payload.WithString("syncSchedule", m_syncSchedule);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_documentEnrichmentConfigurationHasBeenSet)
  {
   payload.WithObject("documentEnrichmentConfiguration", m_documentEnrichmentConfiguration.Jsonize());

  }

  if(m_mediaExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("mediaExtractionConfiguration", m_mediaExtractionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




