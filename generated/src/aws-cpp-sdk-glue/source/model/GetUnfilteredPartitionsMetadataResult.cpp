﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredPartitionsMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUnfilteredPartitionsMetadataResult::GetUnfilteredPartitionsMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUnfilteredPartitionsMetadataResult& GetUnfilteredPartitionsMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UnfilteredPartitions"))
  {
    Aws::Utils::Array<JsonView> unfilteredPartitionsJsonList = jsonValue.GetArray("UnfilteredPartitions");
    for(unsigned unfilteredPartitionsIndex = 0; unfilteredPartitionsIndex < unfilteredPartitionsJsonList.GetLength(); ++unfilteredPartitionsIndex)
    {
      m_unfilteredPartitions.push_back(unfilteredPartitionsJsonList[unfilteredPartitionsIndex].AsObject());
    }
    m_unfilteredPartitionsHasBeenSet = true;
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
