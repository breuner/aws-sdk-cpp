﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetFileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFileResult::GetFileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFileResult& GetFileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");
    m_commitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blobId"))
  {
    m_blobId = jsonValue.GetString("blobId");
    m_blobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileMode"))
  {
    m_fileMode = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("fileMode"));
    m_fileModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");
    m_fileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileContent"))
  {
    m_fileContent = HashingUtils::Base64Decode(jsonValue.GetString("fileContent"));
    m_fileContentHasBeenSet = true;
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
