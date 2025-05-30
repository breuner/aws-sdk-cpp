﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateUsagePlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUsagePlanResult::UpdateUsagePlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUsagePlanResult& UpdateUsagePlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiStages"))
  {
    Aws::Utils::Array<JsonView> apiStagesJsonList = jsonValue.GetArray("apiStages");
    for(unsigned apiStagesIndex = 0; apiStagesIndex < apiStagesJsonList.GetLength(); ++apiStagesIndex)
    {
      m_apiStages.push_back(apiStagesJsonList[apiStagesIndex].AsObject());
    }
    m_apiStagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throttle"))
  {
    m_throttle = jsonValue.GetObject("throttle");
    m_throttleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quota"))
  {
    m_quota = jsonValue.GetObject("quota");
    m_quotaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCode"))
  {
    m_productCode = jsonValue.GetString("productCode");
    m_productCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
