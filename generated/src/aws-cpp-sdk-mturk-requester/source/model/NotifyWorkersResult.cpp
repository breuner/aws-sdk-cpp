﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/NotifyWorkersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

NotifyWorkersResult::NotifyWorkersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

NotifyWorkersResult& NotifyWorkersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotifyWorkersFailureStatuses"))
  {
    Aws::Utils::Array<JsonView> notifyWorkersFailureStatusesJsonList = jsonValue.GetArray("NotifyWorkersFailureStatuses");
    for(unsigned notifyWorkersFailureStatusesIndex = 0; notifyWorkersFailureStatusesIndex < notifyWorkersFailureStatusesJsonList.GetLength(); ++notifyWorkersFailureStatusesIndex)
    {
      m_notifyWorkersFailureStatuses.push_back(notifyWorkersFailureStatusesJsonList[notifyWorkersFailureStatusesIndex].AsObject());
    }
    m_notifyWorkersFailureStatusesHasBeenSet = true;
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
