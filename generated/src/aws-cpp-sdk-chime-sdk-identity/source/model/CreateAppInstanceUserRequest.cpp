﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/CreateAppInstanceUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAppInstanceUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceArnHasBeenSet)
  {
   payload.WithString("AppInstanceArn", m_appInstanceArn);

  }

  if(m_appInstanceUserIdHasBeenSet)
  {
   payload.WithString("AppInstanceUserId", m_appInstanceUserId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

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

  if(m_expirationSettingsHasBeenSet)
  {
   payload.WithObject("ExpirationSettings", m_expirationSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




