﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ListVirtualInterfaceTestHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualInterfaceTestHistoryResult::ListVirtualInterfaceTestHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualInterfaceTestHistoryResult& ListVirtualInterfaceTestHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualInterfaceTestHistory"))
  {
    Aws::Utils::Array<JsonView> virtualInterfaceTestHistoryJsonList = jsonValue.GetArray("virtualInterfaceTestHistory");
    for(unsigned virtualInterfaceTestHistoryIndex = 0; virtualInterfaceTestHistoryIndex < virtualInterfaceTestHistoryJsonList.GetLength(); ++virtualInterfaceTestHistoryIndex)
    {
      m_virtualInterfaceTestHistory.push_back(virtualInterfaceTestHistoryJsonList[virtualInterfaceTestHistoryIndex].AsObject());
    }
    m_virtualInterfaceTestHistoryHasBeenSet = true;
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
