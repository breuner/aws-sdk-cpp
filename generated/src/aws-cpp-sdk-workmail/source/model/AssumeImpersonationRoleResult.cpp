﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AssumeImpersonationRoleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssumeImpersonationRoleResult::AssumeImpersonationRoleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssumeImpersonationRoleResult& AssumeImpersonationRoleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");
    m_tokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiresIn"))
  {
    m_expiresIn = jsonValue.GetInt64("ExpiresIn");
    m_expiresInHasBeenSet = true;
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
