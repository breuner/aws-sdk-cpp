﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddFlowVpcInterfacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddFlowVpcInterfacesResult::AddFlowVpcInterfacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddFlowVpcInterfacesResult& AddFlowVpcInterfacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcInterfaces"))
  {
    Aws::Utils::Array<JsonView> vpcInterfacesJsonList = jsonValue.GetArray("vpcInterfaces");
    for(unsigned vpcInterfacesIndex = 0; vpcInterfacesIndex < vpcInterfacesJsonList.GetLength(); ++vpcInterfacesIndex)
    {
      m_vpcInterfaces.push_back(vpcInterfacesJsonList[vpcInterfacesIndex].AsObject());
    }
    m_vpcInterfacesHasBeenSet = true;
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
