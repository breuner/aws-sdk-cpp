﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/GetAttachmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttachmentResult::GetAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAttachmentResult& GetAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UrlExpiry"))
  {
    m_urlExpiry = jsonValue.GetString("UrlExpiry");
    m_urlExpiryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentSizeInBytes"))
  {
    m_attachmentSizeInBytes = jsonValue.GetInt64("AttachmentSizeInBytes");
    m_attachmentSizeInBytesHasBeenSet = true;
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
