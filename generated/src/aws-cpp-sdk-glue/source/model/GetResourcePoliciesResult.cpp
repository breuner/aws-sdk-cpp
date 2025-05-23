﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetResourcePoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourcePoliciesResult::GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourcePoliciesResult& GetResourcePoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GetResourcePoliciesResponseList"))
  {
    Aws::Utils::Array<JsonView> getResourcePoliciesResponseListJsonList = jsonValue.GetArray("GetResourcePoliciesResponseList");
    for(unsigned getResourcePoliciesResponseListIndex = 0; getResourcePoliciesResponseListIndex < getResourcePoliciesResponseListJsonList.GetLength(); ++getResourcePoliciesResponseListIndex)
    {
      m_getResourcePoliciesResponseList.push_back(getResourcePoliciesResponseListJsonList[getResourcePoliciesResponseListIndex].AsObject());
    }
    m_getResourcePoliciesResponseListHasBeenSet = true;
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
