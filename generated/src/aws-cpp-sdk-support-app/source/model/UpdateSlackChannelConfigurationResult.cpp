﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/UpdateSlackChannelConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSlackChannelConfigurationResult::UpdateSlackChannelConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSlackChannelConfigurationResult& UpdateSlackChannelConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelRoleArn"))
  {
    m_channelRoleArn = jsonValue.GetString("channelRoleArn");
    m_channelRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnAddCorrespondenceToCase"))
  {
    m_notifyOnAddCorrespondenceToCase = jsonValue.GetBool("notifyOnAddCorrespondenceToCase");
    m_notifyOnAddCorrespondenceToCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnCaseSeverity"))
  {
    m_notifyOnCaseSeverity = NotificationSeverityLevelMapper::GetNotificationSeverityLevelForName(jsonValue.GetString("notifyOnCaseSeverity"));
    m_notifyOnCaseSeverityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnCreateOrReopenCase"))
  {
    m_notifyOnCreateOrReopenCase = jsonValue.GetBool("notifyOnCreateOrReopenCase");
    m_notifyOnCreateOrReopenCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnResolveCase"))
  {
    m_notifyOnResolveCase = jsonValue.GetBool("notifyOnResolveCase");
    m_notifyOnResolveCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");
    m_teamIdHasBeenSet = true;
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
