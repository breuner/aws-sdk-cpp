﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotebookInstanceLifecycleConfigsResult::ListNotebookInstanceLifecycleConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotebookInstanceLifecycleConfigsResult& ListNotebookInstanceLifecycleConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigs"))
  {
    Aws::Utils::Array<JsonView> notebookInstanceLifecycleConfigsJsonList = jsonValue.GetArray("NotebookInstanceLifecycleConfigs");
    for(unsigned notebookInstanceLifecycleConfigsIndex = 0; notebookInstanceLifecycleConfigsIndex < notebookInstanceLifecycleConfigsJsonList.GetLength(); ++notebookInstanceLifecycleConfigsIndex)
    {
      m_notebookInstanceLifecycleConfigs.push_back(notebookInstanceLifecycleConfigsJsonList[notebookInstanceLifecycleConfigsIndex].AsObject());
    }
    m_notebookInstanceLifecycleConfigsHasBeenSet = true;
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
