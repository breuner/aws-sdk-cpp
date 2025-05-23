﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StartContinuousExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartContinuousExportResult::StartContinuousExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartContinuousExportResult& StartContinuousExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");
    m_exportIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = DataSourceMapper::GetDataSourceForName(jsonValue.GetString("dataSource"));
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaStorageConfig"))
  {
    Aws::Map<Aws::String, JsonView> schemaStorageConfigJsonMap = jsonValue.GetObject("schemaStorageConfig").GetAllObjects();
    for(auto& schemaStorageConfigItem : schemaStorageConfigJsonMap)
    {
      m_schemaStorageConfig[schemaStorageConfigItem.first] = schemaStorageConfigItem.second.AsString();
    }
    m_schemaStorageConfigHasBeenSet = true;
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
