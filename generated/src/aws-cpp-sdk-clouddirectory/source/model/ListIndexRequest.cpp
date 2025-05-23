﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rangesOnIndexedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rangesOnIndexedValuesJsonList(m_rangesOnIndexedValues.size());
   for(unsigned rangesOnIndexedValuesIndex = 0; rangesOnIndexedValuesIndex < rangesOnIndexedValuesJsonList.GetLength(); ++rangesOnIndexedValuesIndex)
   {
     rangesOnIndexedValuesJsonList[rangesOnIndexedValuesIndex].AsObject(m_rangesOnIndexedValues[rangesOnIndexedValuesIndex].Jsonize());
   }
   payload.WithArray("RangesOnIndexedValues", std::move(rangesOnIndexedValuesJsonList));

  }

  if(m_indexReferenceHasBeenSet)
  {
   payload.WithObject("IndexReference", m_indexReference.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  if(m_consistencyLevelHasBeenSet && m_consistencyLevel != ConsistencyLevel::NOT_SET)
  {
    headers.emplace("x-amz-consistency-level", ConsistencyLevelMapper::GetNameForConsistencyLevel(m_consistencyLevel));
  }

  return headers;

}




