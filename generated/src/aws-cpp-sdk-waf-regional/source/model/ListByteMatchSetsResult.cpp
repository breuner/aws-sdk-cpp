﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ListByteMatchSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListByteMatchSetsResult::ListByteMatchSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListByteMatchSetsResult& ListByteMatchSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ByteMatchSets"))
  {
    Aws::Utils::Array<JsonView> byteMatchSetsJsonList = jsonValue.GetArray("ByteMatchSets");
    for(unsigned byteMatchSetsIndex = 0; byteMatchSetsIndex < byteMatchSetsJsonList.GetLength(); ++byteMatchSetsIndex)
    {
      m_byteMatchSets.push_back(byteMatchSetsJsonList[byteMatchSetsIndex].AsObject());
    }
    m_byteMatchSetsHasBeenSet = true;
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
