﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListICD10CMInferenceJobsResult::ListICD10CMInferenceJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListICD10CMInferenceJobsResult& ListICD10CMInferenceJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComprehendMedicalAsyncJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> comprehendMedicalAsyncJobPropertiesListJsonList = jsonValue.GetArray("ComprehendMedicalAsyncJobPropertiesList");
    for(unsigned comprehendMedicalAsyncJobPropertiesListIndex = 0; comprehendMedicalAsyncJobPropertiesListIndex < comprehendMedicalAsyncJobPropertiesListJsonList.GetLength(); ++comprehendMedicalAsyncJobPropertiesListIndex)
    {
      m_comprehendMedicalAsyncJobPropertiesList.push_back(comprehendMedicalAsyncJobPropertiesListJsonList[comprehendMedicalAsyncJobPropertiesListIndex].AsObject());
    }
    m_comprehendMedicalAsyncJobPropertiesListHasBeenSet = true;
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
