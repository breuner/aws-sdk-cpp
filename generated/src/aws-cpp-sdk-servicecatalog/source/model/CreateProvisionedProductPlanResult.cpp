﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CreateProvisionedProductPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisionedProductPlanResult::CreateProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateProvisionedProductPlanResult& CreateProvisionedProductPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PlanName"))
  {
    m_planName = jsonValue.GetString("PlanName");
    m_planNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlanId"))
  {
    m_planId = jsonValue.GetString("PlanId");
    m_planIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionProductId"))
  {
    m_provisionProductId = jsonValue.GetString("ProvisionProductId");
    m_provisionProductIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedProductName"))
  {
    m_provisionedProductName = jsonValue.GetString("ProvisionedProductName");
    m_provisionedProductNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");
    m_provisioningArtifactIdHasBeenSet = true;
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
