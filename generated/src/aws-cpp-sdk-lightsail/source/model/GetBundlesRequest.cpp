﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetBundlesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBundlesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_includeInactiveHasBeenSet)
  {
   payload.WithBool("includeInactive", m_includeInactive);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  if(m_appCategoryHasBeenSet)
  {
   payload.WithString("appCategory", AppCategoryMapper::GetNameForAppCategory(m_appCategory));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBundlesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetBundles"));
  return headers;

}




