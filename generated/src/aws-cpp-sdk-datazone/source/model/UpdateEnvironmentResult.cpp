﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateEnvironmentResult::UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateEnvironmentResult& UpdateEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountRegion"))
  {
    m_awsAccountRegion = jsonValue.GetString("awsAccountRegion");
    m_awsAccountRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentProperties"))
  {
    m_deploymentProperties = jsonValue.GetObject("deploymentProperties");
    m_deploymentPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentActions"))
  {
    Aws::Utils::Array<JsonView> environmentActionsJsonList = jsonValue.GetArray("environmentActions");
    for(unsigned environmentActionsIndex = 0; environmentActionsIndex < environmentActionsJsonList.GetLength(); ++environmentActionsIndex)
    {
      m_environmentActions.push_back(environmentActionsJsonList[environmentActionsIndex].AsObject());
    }
    m_environmentActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");
    m_environmentBlueprintIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentConfigurationId"))
  {
    m_environmentConfigurationId = jsonValue.GetString("environmentConfigurationId");
    m_environmentConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentProfileId"))
  {
    m_environmentProfileId = jsonValue.GetString("environmentProfileId");
    m_environmentProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastDeployment"))
  {
    m_lastDeployment = jsonValue.GetObject("lastDeployment");
    m_lastDeploymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");
    m_providerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedResources"))
  {
    Aws::Utils::Array<JsonView> provisionedResourcesJsonList = jsonValue.GetArray("provisionedResources");
    for(unsigned provisionedResourcesIndex = 0; provisionedResourcesIndex < provisionedResourcesJsonList.GetLength(); ++provisionedResourcesIndex)
    {
      m_provisionedResources.push_back(provisionedResourcesJsonList[provisionedResourcesIndex].AsObject());
    }
    m_provisionedResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisioningProperties"))
  {
    m_provisioningProperties = jsonValue.GetObject("provisioningProperties");
    m_provisioningPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userParameters"))
  {
    Aws::Utils::Array<JsonView> userParametersJsonList = jsonValue.GetArray("userParameters");
    for(unsigned userParametersIndex = 0; userParametersIndex < userParametersJsonList.GetLength(); ++userParametersIndex)
    {
      m_userParameters.push_back(userParametersJsonList[userParametersIndex].AsObject());
    }
    m_userParametersHasBeenSet = true;
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
