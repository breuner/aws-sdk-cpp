﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMetricsResult::GetMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMetricsResult& GetMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SummaryMetricQueryResults"))
  {
    Aws::Utils::Array<JsonView> summaryMetricQueryResultsJsonList = jsonValue.GetArray("SummaryMetricQueryResults");
    for(unsigned summaryMetricQueryResultsIndex = 0; summaryMetricQueryResultsIndex < summaryMetricQueryResultsJsonList.GetLength(); ++summaryMetricQueryResultsIndex)
    {
      m_summaryMetricQueryResults.push_back(summaryMetricQueryResultsJsonList[summaryMetricQueryResultsIndex].AsObject());
    }
    m_summaryMetricQueryResultsHasBeenSet = true;
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
