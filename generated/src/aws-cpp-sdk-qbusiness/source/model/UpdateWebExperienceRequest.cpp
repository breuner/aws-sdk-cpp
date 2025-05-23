﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateWebExperienceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWebExperienceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithString("subtitle", m_subtitle);

  }

  if(m_welcomeMessageHasBeenSet)
  {
   payload.WithString("welcomeMessage", m_welcomeMessage);

  }

  if(m_samplePromptsControlModeHasBeenSet)
  {
   payload.WithString("samplePromptsControlMode", WebExperienceSamplePromptsControlModeMapper::GetNameForWebExperienceSamplePromptsControlMode(m_samplePromptsControlMode));
  }

  if(m_identityProviderConfigurationHasBeenSet)
  {
   payload.WithObject("identityProviderConfiguration", m_identityProviderConfiguration.Jsonize());

  }

  if(m_originsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> originsJsonList(m_origins.size());
   for(unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex)
   {
     originsJsonList[originsIndex].AsString(m_origins[originsIndex]);
   }
   payload.WithArray("origins", std::move(originsJsonList));

  }

  if(m_browserExtensionConfigurationHasBeenSet)
  {
   payload.WithObject("browserExtensionConfiguration", m_browserExtensionConfiguration.Jsonize());

  }

  if(m_customizationConfigurationHasBeenSet)
  {
   payload.WithObject("customizationConfiguration", m_customizationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




