﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetIdleRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIdleRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithObject("orderBy", m_orderBy.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetIdleRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.GetIdleRecommendations"));
  return headers;

}




