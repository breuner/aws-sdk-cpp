﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/RequestServiceQuotaIncreaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RequestServiceQuotaIncreaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_desiredValueHasBeenSet)
  {
   payload.WithDouble("DesiredValue", m_desiredValue);

  }

  if(m_contextIdHasBeenSet)
  {
   payload.WithString("ContextId", m_contextId);

  }

  if(m_supportCaseAllowedHasBeenSet)
  {
   payload.WithBool("SupportCaseAllowed", m_supportCaseAllowed);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RequestServiceQuotaIncreaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.RequestServiceQuotaIncrease"));
  return headers;

}




