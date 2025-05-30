﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchDeleteConnectionResult.h>
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

BatchDeleteConnectionResult::BatchDeleteConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteConnectionResult& BatchDeleteConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Succeeded"))
  {
    Aws::Utils::Array<JsonView> succeededJsonList = jsonValue.GetArray("Succeeded");
    for(unsigned succeededIndex = 0; succeededIndex < succeededJsonList.GetLength(); ++succeededIndex)
    {
      m_succeeded.push_back(succeededJsonList[succeededIndex].AsString());
    }
    m_succeededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Map<Aws::String, JsonView> errorsJsonMap = jsonValue.GetObject("Errors").GetAllObjects();
    for(auto& errorsItem : errorsJsonMap)
    {
      m_errors[errorsItem.first] = errorsItem.second.AsObject();
    }
    m_errorsHasBeenSet = true;
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
