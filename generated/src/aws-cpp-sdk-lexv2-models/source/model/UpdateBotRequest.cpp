﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_dataPrivacyHasBeenSet)
  {
   payload.WithObject("dataPrivacy", m_dataPrivacy.Jsonize());

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_botTypeHasBeenSet)
  {
   payload.WithString("botType", BotTypeMapper::GetNameForBotType(m_botType));
  }

  if(m_botMembersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> botMembersJsonList(m_botMembers.size());
   for(unsigned botMembersIndex = 0; botMembersIndex < botMembersJsonList.GetLength(); ++botMembersIndex)
   {
     botMembersJsonList[botMembersIndex].AsObject(m_botMembers[botMembersIndex].Jsonize());
   }
   payload.WithArray("botMembers", std::move(botMembersJsonList));

  }

  if(m_errorLogSettingsHasBeenSet)
  {
   payload.WithObject("errorLogSettings", m_errorLogSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




