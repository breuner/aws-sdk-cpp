﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAppInstanceUserEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_allowMessagesHasBeenSet)
  {
   payload.WithString("AllowMessages", AllowMessagesMapper::GetNameForAllowMessages(m_allowMessages));
  }

  return payload.View().WriteReadable();
}




