﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/GetBillScenarioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBillScenarioRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBillScenarioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMPricingCalculator.GetBillScenario"));
  return headers;

}




