﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutProtectConfigurationRuleSetNumberOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutProtectConfigurationRuleSetNumberOverrideRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ProtectConfigurationRuleOverrideActionMapper::GetNameForProtectConfigurationRuleOverrideAction(m_action));
  }

  if(m_expirationTimestampHasBeenSet)
  {
   payload.WithDouble("ExpirationTimestamp", m_expirationTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutProtectConfigurationRuleSetNumberOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.PutProtectConfigurationRuleSetNumberOverride"));
  return headers;

}




