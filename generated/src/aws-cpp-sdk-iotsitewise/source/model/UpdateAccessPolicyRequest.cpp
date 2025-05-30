﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessPolicyIdentityHasBeenSet)
  {
   payload.WithObject("accessPolicyIdentity", m_accessPolicyIdentity.Jsonize());

  }

  if(m_accessPolicyResourceHasBeenSet)
  {
   payload.WithObject("accessPolicyResource", m_accessPolicyResource.Jsonize());

  }

  if(m_accessPolicyPermissionHasBeenSet)
  {
   payload.WithString("accessPolicyPermission", PermissionMapper::GetNameForPermission(m_accessPolicyPermission));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




