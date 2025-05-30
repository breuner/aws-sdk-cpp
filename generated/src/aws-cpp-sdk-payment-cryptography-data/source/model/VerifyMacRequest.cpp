﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyMacRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String VerifyMacRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  if(m_messageDataHasBeenSet)
  {
   payload.WithString("MessageData", m_messageData);

  }

  if(m_macHasBeenSet)
  {
   payload.WithString("Mac", m_mac);

  }

  if(m_verificationAttributesHasBeenSet)
  {
   payload.WithObject("VerificationAttributes", m_verificationAttributes.Jsonize());

  }

  if(m_macLengthHasBeenSet)
  {
   payload.WithInteger("MacLength", m_macLength);

  }

  return payload.View().WriteReadable();
}




