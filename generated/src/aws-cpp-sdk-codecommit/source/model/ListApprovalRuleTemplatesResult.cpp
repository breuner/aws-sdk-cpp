﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListApprovalRuleTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApprovalRuleTemplatesResult::ListApprovalRuleTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApprovalRuleTemplatesResult& ListApprovalRuleTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("approvalRuleTemplateNames"))
  {
    Aws::Utils::Array<JsonView> approvalRuleTemplateNamesJsonList = jsonValue.GetArray("approvalRuleTemplateNames");
    for(unsigned approvalRuleTemplateNamesIndex = 0; approvalRuleTemplateNamesIndex < approvalRuleTemplateNamesJsonList.GetLength(); ++approvalRuleTemplateNamesIndex)
    {
      m_approvalRuleTemplateNames.push_back(approvalRuleTemplateNamesJsonList[approvalRuleTemplateNamesIndex].AsString());
    }
    m_approvalRuleTemplateNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
