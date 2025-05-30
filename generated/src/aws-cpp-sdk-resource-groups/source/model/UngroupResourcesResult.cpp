﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/UngroupResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UngroupResourcesResult::UngroupResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UngroupResourcesResult& UngroupResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Succeeded"))
  {
    Aws::Utils::Array<JsonView> succeededJsonList = jsonValue.GetArray("Succeeded");
    for(unsigned succeededIndex = 0; succeededIndex < succeededJsonList.GetLength(); ++succeededIndex)
    {
      m_succeeded.push_back(succeededJsonList[succeededIndex].AsString());
    }
    m_succeededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failed"))
  {
    Aws::Utils::Array<JsonView> failedJsonList = jsonValue.GetArray("Failed");
    for(unsigned failedIndex = 0; failedIndex < failedJsonList.GetLength(); ++failedIndex)
    {
      m_failed.push_back(failedJsonList[failedIndex].AsObject());
    }
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Pending"))
  {
    Aws::Utils::Array<JsonView> pendingJsonList = jsonValue.GetArray("Pending");
    for(unsigned pendingIndex = 0; pendingIndex < pendingJsonList.GetLength(); ++pendingIndex)
    {
      m_pending.push_back(pendingJsonList[pendingIndex].AsObject());
    }
    m_pendingHasBeenSet = true;
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
