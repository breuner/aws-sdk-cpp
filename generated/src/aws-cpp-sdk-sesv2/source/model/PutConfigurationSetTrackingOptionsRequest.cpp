﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutConfigurationSetTrackingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customRedirectDomainHasBeenSet)
  {
   payload.WithString("CustomRedirectDomain", m_customRedirectDomain);

  }

  if(m_httpsPolicyHasBeenSet)
  {
   payload.WithString("HttpsPolicy", HttpsPolicyMapper::GetNameForHttpsPolicy(m_httpsPolicy));
  }

  return payload.View().WriteReadable();
}




