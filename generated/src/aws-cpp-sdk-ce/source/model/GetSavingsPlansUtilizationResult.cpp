﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlansUtilizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSavingsPlansUtilizationResult::GetSavingsPlansUtilizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSavingsPlansUtilizationResult& GetSavingsPlansUtilizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SavingsPlansUtilizationsByTime"))
  {
    Aws::Utils::Array<JsonView> savingsPlansUtilizationsByTimeJsonList = jsonValue.GetArray("SavingsPlansUtilizationsByTime");
    for(unsigned savingsPlansUtilizationsByTimeIndex = 0; savingsPlansUtilizationsByTimeIndex < savingsPlansUtilizationsByTimeJsonList.GetLength(); ++savingsPlansUtilizationsByTimeIndex)
    {
      m_savingsPlansUtilizationsByTime.push_back(savingsPlansUtilizationsByTimeJsonList[savingsPlansUtilizationsByTimeIndex].AsObject());
    }
    m_savingsPlansUtilizationsByTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");
    m_totalHasBeenSet = true;
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
