﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetBackupSelectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBackupSelectionResult::GetBackupSelectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBackupSelectionResult& GetBackupSelectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupSelection"))
  {
    m_backupSelection = jsonValue.GetObject("BackupSelection");
    m_backupSelectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectionId"))
  {
    m_selectionId = jsonValue.GetString("SelectionId");
    m_selectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");
    m_backupPlanIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");
    m_creatorRequestIdHasBeenSet = true;
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
