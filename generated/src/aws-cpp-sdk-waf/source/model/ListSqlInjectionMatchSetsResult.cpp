﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListSqlInjectionMatchSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSqlInjectionMatchSetsResult::ListSqlInjectionMatchSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSqlInjectionMatchSetsResult& ListSqlInjectionMatchSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SqlInjectionMatchSets"))
  {
    Aws::Utils::Array<JsonView> sqlInjectionMatchSetsJsonList = jsonValue.GetArray("SqlInjectionMatchSets");
    for(unsigned sqlInjectionMatchSetsIndex = 0; sqlInjectionMatchSetsIndex < sqlInjectionMatchSetsJsonList.GetLength(); ++sqlInjectionMatchSetsIndex)
    {
      m_sqlInjectionMatchSets.push_back(sqlInjectionMatchSetsJsonList[sqlInjectionMatchSetsIndex].AsObject());
    }
    m_sqlInjectionMatchSetsHasBeenSet = true;
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
