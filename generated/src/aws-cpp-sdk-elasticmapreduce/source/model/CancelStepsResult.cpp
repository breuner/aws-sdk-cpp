﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CancelStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelStepsResult::CancelStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelStepsResult& CancelStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CancelStepsInfoList"))
  {
    Aws::Utils::Array<JsonView> cancelStepsInfoListJsonList = jsonValue.GetArray("CancelStepsInfoList");
    for(unsigned cancelStepsInfoListIndex = 0; cancelStepsInfoListIndex < cancelStepsInfoListJsonList.GetLength(); ++cancelStepsInfoListIndex)
    {
      m_cancelStepsInfoList.push_back(cancelStepsInfoListJsonList[cancelStepsInfoListIndex].AsObject());
    }
    m_cancelStepsInfoListHasBeenSet = true;
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
