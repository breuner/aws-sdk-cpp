﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAvailablePhoneNumbersResult::SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchAvailablePhoneNumbersResult& SearchAvailablePhoneNumbersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableNumbersList"))
  {
    Aws::Utils::Array<JsonView> availableNumbersListJsonList = jsonValue.GetArray("AvailableNumbersList");
    for(unsigned availableNumbersListIndex = 0; availableNumbersListIndex < availableNumbersListJsonList.GetLength(); ++availableNumbersListIndex)
    {
      m_availableNumbersList.push_back(availableNumbersListJsonList[availableNumbersListIndex].AsObject());
    }
    m_availableNumbersListHasBeenSet = true;
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
