﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ListAppInstanceUsersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppInstanceUsersResult::ListAppInstanceUsersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppInstanceUsersResult& ListAppInstanceUsersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceArn"))
  {
    m_appInstanceArn = jsonValue.GetString("AppInstanceArn");
    m_appInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppInstanceUsers"))
  {
    Aws::Utils::Array<JsonView> appInstanceUsersJsonList = jsonValue.GetArray("AppInstanceUsers");
    for(unsigned appInstanceUsersIndex = 0; appInstanceUsersIndex < appInstanceUsersJsonList.GetLength(); ++appInstanceUsersIndex)
    {
      m_appInstanceUsers.push_back(appInstanceUsersJsonList[appInstanceUsersIndex].AsObject());
    }
    m_appInstanceUsersHasBeenSet = true;
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
