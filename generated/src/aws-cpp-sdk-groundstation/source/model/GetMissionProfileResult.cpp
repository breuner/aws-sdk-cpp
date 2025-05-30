﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMissionProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMissionProfileResult::GetMissionProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMissionProfileResult& GetMissionProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactPostPassDurationSeconds"))
  {
    m_contactPostPassDurationSeconds = jsonValue.GetInteger("contactPostPassDurationSeconds");
    m_contactPostPassDurationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contactPrePassDurationSeconds"))
  {
    m_contactPrePassDurationSeconds = jsonValue.GetInteger("contactPrePassDurationSeconds");
    m_contactPrePassDurationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataflowEdges"))
  {
    Aws::Utils::Array<JsonView> dataflowEdgesJsonList = jsonValue.GetArray("dataflowEdges");
    for(unsigned dataflowEdgesIndex = 0; dataflowEdgesIndex < dataflowEdgesJsonList.GetLength(); ++dataflowEdgesIndex)
    {
      Aws::Utils::Array<JsonView> dataflowEdgeJsonList = dataflowEdgesJsonList[dataflowEdgesIndex].AsArray();
      Aws::Vector<Aws::String> dataflowEdgeList;
      dataflowEdgeList.reserve((size_t)dataflowEdgeJsonList.GetLength());
      for(unsigned dataflowEdgeIndex = 0; dataflowEdgeIndex < dataflowEdgeJsonList.GetLength(); ++dataflowEdgeIndex)
      {
        dataflowEdgeList.push_back(dataflowEdgeJsonList[dataflowEdgeIndex].AsString());
      }
      m_dataflowEdges.push_back(std::move(dataflowEdgeList));
    }
    m_dataflowEdgesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumViableContactDurationSeconds"))
  {
    m_minimumViableContactDurationSeconds = jsonValue.GetInteger("minimumViableContactDurationSeconds");
    m_minimumViableContactDurationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");
    m_missionProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("missionProfileId"))
  {
    m_missionProfileId = jsonValue.GetString("missionProfileId");
    m_missionProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamsKmsKey"))
  {
    m_streamsKmsKey = jsonValue.GetObject("streamsKmsKey");
    m_streamsKmsKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamsKmsRole"))
  {
    m_streamsKmsRole = jsonValue.GetString("streamsKmsRole");
    m_streamsKmsRoleHasBeenSet = true;
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
  if(jsonValue.ValueExists("trackingConfigArn"))
  {
    m_trackingConfigArn = jsonValue.GetString("trackingConfigArn");
    m_trackingConfigArnHasBeenSet = true;
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
