﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateKeyRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateKeyRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyRegistrationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyRegistrationJsonList(m_keyRegistration.size());
   for(unsigned keyRegistrationIndex = 0; keyRegistrationIndex < keyRegistrationJsonList.GetLength(); ++keyRegistrationIndex)
   {
     keyRegistrationJsonList[keyRegistrationIndex].AsObject(m_keyRegistration[keyRegistrationIndex].Jsonize());
   }
   payload.WithArray("KeyRegistration", std::move(keyRegistrationJsonList));

  }

  return payload.View().WriteReadable();
}




