﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateDataKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_encryptionContextHasBeenSet)
  {
   JsonValue encryptionContextJsonMap;
   for(auto& encryptionContextItem : m_encryptionContext)
   {
     encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
   }
   payload.WithObject("EncryptionContext", std::move(encryptionContextJsonMap));

  }

  if(m_numberOfBytesHasBeenSet)
  {
   payload.WithInteger("NumberOfBytes", m_numberOfBytes);

  }

  if(m_keySpecHasBeenSet)
  {
   payload.WithString("KeySpec", DataKeySpecMapper::GetNameForDataKeySpec(m_keySpec));
  }

  if(m_grantTokensHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
   for(unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex)
   {
     grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
   }
   payload.WithArray("GrantTokens", std::move(grantTokensJsonList));

  }

  if(m_recipientHasBeenSet)
  {
   payload.WithObject("Recipient", m_recipient.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateDataKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GenerateDataKey"));
  return headers;

}




