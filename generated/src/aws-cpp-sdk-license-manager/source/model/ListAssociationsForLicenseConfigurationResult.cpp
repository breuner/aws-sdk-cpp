﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociationsForLicenseConfigurationResult::ListAssociationsForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociationsForLicenseConfigurationResult& ListAssociationsForLicenseConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConfigurationAssociations"))
  {
    Aws::Utils::Array<JsonView> licenseConfigurationAssociationsJsonList = jsonValue.GetArray("LicenseConfigurationAssociations");
    for(unsigned licenseConfigurationAssociationsIndex = 0; licenseConfigurationAssociationsIndex < licenseConfigurationAssociationsJsonList.GetLength(); ++licenseConfigurationAssociationsIndex)
    {
      m_licenseConfigurationAssociations.push_back(licenseConfigurationAssociationsJsonList[licenseConfigurationAssociationsIndex].AsObject());
    }
    m_licenseConfigurationAssociationsHasBeenSet = true;
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
