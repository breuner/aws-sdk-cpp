﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/GetPipelineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineDefinitionResult::GetPipelineDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPipelineDefinitionResult& GetPipelineDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineObjects"))
  {
    Aws::Utils::Array<JsonView> pipelineObjectsJsonList = jsonValue.GetArray("pipelineObjects");
    for(unsigned pipelineObjectsIndex = 0; pipelineObjectsIndex < pipelineObjectsJsonList.GetLength(); ++pipelineObjectsIndex)
    {
      m_pipelineObjects.push_back(pipelineObjectsJsonList[pipelineObjectsIndex].AsObject());
    }
    m_pipelineObjectsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterObjects"))
  {
    Aws::Utils::Array<JsonView> parameterObjectsJsonList = jsonValue.GetArray("parameterObjects");
    for(unsigned parameterObjectsIndex = 0; parameterObjectsIndex < parameterObjectsJsonList.GetLength(); ++parameterObjectsIndex)
    {
      m_parameterObjects.push_back(parameterObjectsJsonList[parameterObjectsIndex].AsObject());
    }
    m_parameterObjectsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterValues"))
  {
    Aws::Utils::Array<JsonView> parameterValuesJsonList = jsonValue.GetArray("parameterValues");
    for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
    {
      m_parameterValues.push_back(parameterValuesJsonList[parameterValuesIndex].AsObject());
    }
    m_parameterValuesHasBeenSet = true;
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
