﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeTapeRecoveryPointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTapeRecoveryPointsResult::DescribeTapeRecoveryPointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTapeRecoveryPointsResult& DescribeTapeRecoveryPointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TapeRecoveryPointInfos"))
  {
    Aws::Utils::Array<JsonView> tapeRecoveryPointInfosJsonList = jsonValue.GetArray("TapeRecoveryPointInfos");
    for(unsigned tapeRecoveryPointInfosIndex = 0; tapeRecoveryPointInfosIndex < tapeRecoveryPointInfosJsonList.GetLength(); ++tapeRecoveryPointInfosIndex)
    {
      m_tapeRecoveryPointInfos.push_back(tapeRecoveryPointInfosJsonList[tapeRecoveryPointInfosIndex].AsObject());
    }
    m_tapeRecoveryPointInfosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
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
