﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/GetAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.GetAlias"));
  return headers;

}




