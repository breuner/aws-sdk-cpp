﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigRuleEvaluationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigRuleEvaluationStatusResult::DescribeConfigRuleEvaluationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigRuleEvaluationStatusResult& DescribeConfigRuleEvaluationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigRulesEvaluationStatus"))
  {
    Aws::Utils::Array<JsonView> configRulesEvaluationStatusJsonList = jsonValue.GetArray("ConfigRulesEvaluationStatus");
    for(unsigned configRulesEvaluationStatusIndex = 0; configRulesEvaluationStatusIndex < configRulesEvaluationStatusJsonList.GetLength(); ++configRulesEvaluationStatusIndex)
    {
      m_configRulesEvaluationStatus.push_back(configRulesEvaluationStatusJsonList[configRulesEvaluationStatusIndex].AsObject());
    }
    m_configRulesEvaluationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
