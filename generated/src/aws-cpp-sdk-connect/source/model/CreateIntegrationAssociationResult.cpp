﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateIntegrationAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIntegrationAssociationResult::CreateIntegrationAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateIntegrationAssociationResult& CreateIntegrationAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IntegrationAssociationId"))
  {
    m_integrationAssociationId = jsonValue.GetString("IntegrationAssociationId");
    m_integrationAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntegrationAssociationArn"))
  {
    m_integrationAssociationArn = jsonValue.GetString("IntegrationAssociationArn");
    m_integrationAssociationArnHasBeenSet = true;
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
