﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CreatePresignedNotebookUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePresignedNotebookUrlResult::CreatePresignedNotebookUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePresignedNotebookUrlResult& CreatePresignedNotebookUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookUrl"))
  {
    m_notebookUrl = jsonValue.GetString("NotebookUrl");
    m_notebookUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthToken"))
  {
    m_authToken = jsonValue.GetString("AuthToken");
    m_authTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthTokenExpirationTime"))
  {
    m_authTokenExpirationTime = jsonValue.GetInt64("AuthTokenExpirationTime");
    m_authTokenExpirationTimeHasBeenSet = true;
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
