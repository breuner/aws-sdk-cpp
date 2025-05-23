﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListPartnerEventSourceAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartnerEventSourceAccountsResult::ListPartnerEventSourceAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPartnerEventSourceAccountsResult& ListPartnerEventSourceAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PartnerEventSourceAccounts"))
  {
    Aws::Utils::Array<JsonView> partnerEventSourceAccountsJsonList = jsonValue.GetArray("PartnerEventSourceAccounts");
    for(unsigned partnerEventSourceAccountsIndex = 0; partnerEventSourceAccountsIndex < partnerEventSourceAccountsJsonList.GetLength(); ++partnerEventSourceAccountsIndex)
    {
      m_partnerEventSourceAccounts.push_back(partnerEventSourceAccountsJsonList[partnerEventSourceAccountsIndex].AsObject());
    }
    m_partnerEventSourceAccountsHasBeenSet = true;
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
