﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListPredictorBacktestExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPredictorBacktestExportJobsResult::ListPredictorBacktestExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPredictorBacktestExportJobsResult& ListPredictorBacktestExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorBacktestExportJobs"))
  {
    Aws::Utils::Array<JsonView> predictorBacktestExportJobsJsonList = jsonValue.GetArray("PredictorBacktestExportJobs");
    for(unsigned predictorBacktestExportJobsIndex = 0; predictorBacktestExportJobsIndex < predictorBacktestExportJobsJsonList.GetLength(); ++predictorBacktestExportJobsIndex)
    {
      m_predictorBacktestExportJobs.push_back(predictorBacktestExportJobsJsonList[predictorBacktestExportJobsIndex].AsObject());
    }
    m_predictorBacktestExportJobsHasBeenSet = true;
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
