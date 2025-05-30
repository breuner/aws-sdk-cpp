﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPermissionSetsProvisionedToAccountResult::ListPermissionSetsProvisionedToAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPermissionSetsProvisionedToAccountResult& ListPermissionSetsProvisionedToAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PermissionSets"))
  {
    Aws::Utils::Array<JsonView> permissionSetsJsonList = jsonValue.GetArray("PermissionSets");
    for(unsigned permissionSetsIndex = 0; permissionSetsIndex < permissionSetsJsonList.GetLength(); ++permissionSetsIndex)
    {
      m_permissionSets.push_back(permissionSetsJsonList[permissionSetsIndex].AsString());
    }
    m_permissionSetsHasBeenSet = true;
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
