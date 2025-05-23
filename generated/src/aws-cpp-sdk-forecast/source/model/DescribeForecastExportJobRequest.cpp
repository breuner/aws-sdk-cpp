﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeForecastExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeForecastExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forecastExportJobArnHasBeenSet)
  {
   payload.WithString("ForecastExportJobArn", m_forecastExportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeForecastExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DescribeForecastExportJob"));
  return headers;

}




