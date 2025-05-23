﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListMediaAnalysisJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMediaAnalysisJobsResult::ListMediaAnalysisJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMediaAnalysisJobsResult& ListMediaAnalysisJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaAnalysisJobs"))
  {
    Aws::Utils::Array<JsonView> mediaAnalysisJobsJsonList = jsonValue.GetArray("MediaAnalysisJobs");
    for(unsigned mediaAnalysisJobsIndex = 0; mediaAnalysisJobsIndex < mediaAnalysisJobsJsonList.GetLength(); ++mediaAnalysisJobsIndex)
    {
      m_mediaAnalysisJobs.push_back(mediaAnalysisJobsJsonList[mediaAnalysisJobsIndex].AsObject());
    }
    m_mediaAnalysisJobsHasBeenSet = true;
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
