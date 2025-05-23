﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListWorldGenerationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorldGenerationJobsResult::ListWorldGenerationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorldGenerationJobsResult& ListWorldGenerationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("worldGenerationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> worldGenerationJobSummariesJsonList = jsonValue.GetArray("worldGenerationJobSummaries");
    for(unsigned worldGenerationJobSummariesIndex = 0; worldGenerationJobSummariesIndex < worldGenerationJobSummariesJsonList.GetLength(); ++worldGenerationJobSummariesIndex)
    {
      m_worldGenerationJobSummaries.push_back(worldGenerationJobSummariesJsonList[worldGenerationJobSummariesIndex].AsObject());
    }
    m_worldGenerationJobSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
