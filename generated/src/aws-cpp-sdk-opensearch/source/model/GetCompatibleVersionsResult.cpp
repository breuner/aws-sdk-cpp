﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetCompatibleVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCompatibleVersionsResult::GetCompatibleVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCompatibleVersionsResult& GetCompatibleVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CompatibleVersions"))
  {
    Aws::Utils::Array<JsonView> compatibleVersionsJsonList = jsonValue.GetArray("CompatibleVersions");
    for(unsigned compatibleVersionsIndex = 0; compatibleVersionsIndex < compatibleVersionsJsonList.GetLength(); ++compatibleVersionsIndex)
    {
      m_compatibleVersions.push_back(compatibleVersionsJsonList[compatibleVersionsIndex].AsObject());
    }
    m_compatibleVersionsHasBeenSet = true;
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
