﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListHostKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHostKeysResult::ListHostKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHostKeysResult& ListHostKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");
    m_serverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostKeys"))
  {
    Aws::Utils::Array<JsonView> hostKeysJsonList = jsonValue.GetArray("HostKeys");
    for(unsigned hostKeysIndex = 0; hostKeysIndex < hostKeysJsonList.GetLength(); ++hostKeysIndex)
    {
      m_hostKeys.push_back(hostKeysJsonList[hostKeysIndex].AsObject());
    }
    m_hostKeysHasBeenSet = true;
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
