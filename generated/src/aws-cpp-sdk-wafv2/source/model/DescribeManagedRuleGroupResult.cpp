﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DescribeManagedRuleGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeManagedRuleGroupResult::DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeManagedRuleGroupResult& DescribeManagedRuleGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");
    m_versionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");
    m_snsTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");
    m_capacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");
    m_labelNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableLabels"))
  {
    Aws::Utils::Array<JsonView> availableLabelsJsonList = jsonValue.GetArray("AvailableLabels");
    for(unsigned availableLabelsIndex = 0; availableLabelsIndex < availableLabelsJsonList.GetLength(); ++availableLabelsIndex)
    {
      m_availableLabels.push_back(availableLabelsJsonList[availableLabelsIndex].AsObject());
    }
    m_availableLabelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumedLabels"))
  {
    Aws::Utils::Array<JsonView> consumedLabelsJsonList = jsonValue.GetArray("ConsumedLabels");
    for(unsigned consumedLabelsIndex = 0; consumedLabelsIndex < consumedLabelsJsonList.GetLength(); ++consumedLabelsIndex)
    {
      m_consumedLabels.push_back(consumedLabelsJsonList[consumedLabelsIndex].AsObject());
    }
    m_consumedLabelsHasBeenSet = true;
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
