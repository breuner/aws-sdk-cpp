﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeProtectionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeProtectionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectionGroupIdHasBeenSet)
  {
   payload.WithString("ProtectionGroupId", m_protectionGroupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProtectionGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DescribeProtectionGroup"));
  return headers;

}




