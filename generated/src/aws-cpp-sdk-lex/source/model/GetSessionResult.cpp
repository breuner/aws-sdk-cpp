﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/GetSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionResult::GetSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSessionResult& GetSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recentIntentSummaryView"))
  {
    Aws::Utils::Array<JsonView> recentIntentSummaryViewJsonList = jsonValue.GetArray("recentIntentSummaryView");
    for(unsigned recentIntentSummaryViewIndex = 0; recentIntentSummaryViewIndex < recentIntentSummaryViewJsonList.GetLength(); ++recentIntentSummaryViewIndex)
    {
      m_recentIntentSummaryView.push_back(recentIntentSummaryViewJsonList[recentIntentSummaryViewIndex].AsObject());
    }
    m_recentIntentSummaryViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialogAction"))
  {
    m_dialogAction = jsonValue.GetObject("dialogAction");
    m_dialogActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
    m_activeContextsHasBeenSet = true;
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
