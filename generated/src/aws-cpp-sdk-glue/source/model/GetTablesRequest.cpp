﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetTablesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTablesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_queryAsOfTimeHasBeenSet)
  {
   payload.WithDouble("QueryAsOfTime", m_queryAsOfTime.SecondsWithMSPrecision());
  }

  if(m_includeStatusDetailsHasBeenSet)
  {
   payload.WithBool("IncludeStatusDetails", m_includeStatusDetails);

  }

  if(m_attributesToGetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToGetJsonList(m_attributesToGet.size());
   for(unsigned attributesToGetIndex = 0; attributesToGetIndex < attributesToGetJsonList.GetLength(); ++attributesToGetIndex)
   {
     attributesToGetJsonList[attributesToGetIndex].AsString(TableAttributesMapper::GetNameForTableAttributes(m_attributesToGet[attributesToGetIndex]));
   }
   payload.WithArray("AttributesToGet", std::move(attributesToGetJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTablesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetTables"));
  return headers;

}




