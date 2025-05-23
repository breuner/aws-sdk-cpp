﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverDnssecConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverDnssecConfigsResult::ListResolverDnssecConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResolverDnssecConfigsResult& ListResolverDnssecConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolverDnssecConfigs"))
  {
    Aws::Utils::Array<JsonView> resolverDnssecConfigsJsonList = jsonValue.GetArray("ResolverDnssecConfigs");
    for(unsigned resolverDnssecConfigsIndex = 0; resolverDnssecConfigsIndex < resolverDnssecConfigsJsonList.GetLength(); ++resolverDnssecConfigsIndex)
    {
      m_resolverDnssecConfigs.push_back(resolverDnssecConfigsJsonList[resolverDnssecConfigsIndex].AsObject());
    }
    m_resolverDnssecConfigsHasBeenSet = true;
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
