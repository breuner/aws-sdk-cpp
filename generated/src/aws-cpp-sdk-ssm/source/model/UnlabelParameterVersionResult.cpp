﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UnlabelParameterVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UnlabelParameterVersionResult::UnlabelParameterVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UnlabelParameterVersionResult& UnlabelParameterVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RemovedLabels"))
  {
    Aws::Utils::Array<JsonView> removedLabelsJsonList = jsonValue.GetArray("RemovedLabels");
    for(unsigned removedLabelsIndex = 0; removedLabelsIndex < removedLabelsJsonList.GetLength(); ++removedLabelsIndex)
    {
      m_removedLabels.push_back(removedLabelsJsonList[removedLabelsIndex].AsString());
    }
    m_removedLabelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvalidLabels"))
  {
    Aws::Utils::Array<JsonView> invalidLabelsJsonList = jsonValue.GetArray("InvalidLabels");
    for(unsigned invalidLabelsIndex = 0; invalidLabelsIndex < invalidLabelsJsonList.GetLength(); ++invalidLabelsIndex)
    {
      m_invalidLabels.push_back(invalidLabelsJsonList[invalidLabelsIndex].AsString());
    }
    m_invalidLabelsHasBeenSet = true;
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
