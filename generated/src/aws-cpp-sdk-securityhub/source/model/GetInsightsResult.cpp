﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInsightsResult::GetInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInsightsResult& GetInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Insights"))
  {
    Aws::Utils::Array<JsonView> insightsJsonList = jsonValue.GetArray("Insights");
    for(unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex)
    {
      m_insights.push_back(insightsJsonList[insightsIndex].AsObject());
    }
    m_insightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
