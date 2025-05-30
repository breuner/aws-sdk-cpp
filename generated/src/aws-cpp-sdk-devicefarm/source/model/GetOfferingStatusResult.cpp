﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/GetOfferingStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOfferingStatusResult::GetOfferingStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOfferingStatusResult& GetOfferingStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("current"))
  {
    Aws::Map<Aws::String, JsonView> currentJsonMap = jsonValue.GetObject("current").GetAllObjects();
    for(auto& currentItem : currentJsonMap)
    {
      m_current[currentItem.first] = currentItem.second.AsObject();
    }
    m_currentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextPeriod"))
  {
    Aws::Map<Aws::String, JsonView> nextPeriodJsonMap = jsonValue.GetObject("nextPeriod").GetAllObjects();
    for(auto& nextPeriodItem : nextPeriodJsonMap)
    {
      m_nextPeriod[nextPeriodItem.first] = nextPeriodItem.second.AsObject();
    }
    m_nextPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
