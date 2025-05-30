﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetTransitGatewayRegistrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTransitGatewayRegistrationsResult::GetTransitGatewayRegistrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTransitGatewayRegistrationsResult& GetTransitGatewayRegistrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransitGatewayRegistrations"))
  {
    Aws::Utils::Array<JsonView> transitGatewayRegistrationsJsonList = jsonValue.GetArray("TransitGatewayRegistrations");
    for(unsigned transitGatewayRegistrationsIndex = 0; transitGatewayRegistrationsIndex < transitGatewayRegistrationsJsonList.GetLength(); ++transitGatewayRegistrationsIndex)
    {
      m_transitGatewayRegistrations.push_back(transitGatewayRegistrationsJsonList[transitGatewayRegistrationsIndex].AsObject());
    }
    m_transitGatewayRegistrationsHasBeenSet = true;
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
