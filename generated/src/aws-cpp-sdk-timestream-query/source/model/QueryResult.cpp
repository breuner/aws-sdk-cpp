﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryResult::QueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QueryResult& QueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");
    m_queryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("Rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
    m_rowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnInfo"))
  {
    Aws::Utils::Array<JsonView> columnInfoJsonList = jsonValue.GetArray("ColumnInfo");
    for(unsigned columnInfoIndex = 0; columnInfoIndex < columnInfoJsonList.GetLength(); ++columnInfoIndex)
    {
      m_columnInfo.push_back(columnInfoJsonList[columnInfoIndex].AsObject());
    }
    m_columnInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = jsonValue.GetObject("QueryStatus");
    m_queryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryInsightsResponse"))
  {
    m_queryInsightsResponse = jsonValue.GetObject("QueryInsightsResponse");
    m_queryInsightsResponseHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
