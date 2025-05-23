﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListMultipartUploadsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMultipartUploadsResult::ListMultipartUploadsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMultipartUploadsResult& ListMultipartUploadsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UploadsList"))
  {
    Aws::Utils::Array<JsonView> uploadsListJsonList = jsonValue.GetArray("UploadsList");
    for(unsigned uploadsListIndex = 0; uploadsListIndex < uploadsListJsonList.GetLength(); ++uploadsListIndex)
    {
      m_uploadsList.push_back(uploadsListJsonList[uploadsListIndex].AsObject());
    }
    m_uploadsListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
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
