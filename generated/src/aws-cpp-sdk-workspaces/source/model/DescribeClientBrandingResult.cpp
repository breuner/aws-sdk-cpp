﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeClientBrandingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClientBrandingResult::DescribeClientBrandingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeClientBrandingResult& DescribeClientBrandingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceTypeWindows"))
  {
    m_deviceTypeWindows = jsonValue.GetObject("DeviceTypeWindows");
    m_deviceTypeWindowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeOsx"))
  {
    m_deviceTypeOsx = jsonValue.GetObject("DeviceTypeOsx");
    m_deviceTypeOsxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeAndroid"))
  {
    m_deviceTypeAndroid = jsonValue.GetObject("DeviceTypeAndroid");
    m_deviceTypeAndroidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeIos"))
  {
    m_deviceTypeIos = jsonValue.GetObject("DeviceTypeIos");
    m_deviceTypeIosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeLinux"))
  {
    m_deviceTypeLinux = jsonValue.GetObject("DeviceTypeLinux");
    m_deviceTypeLinuxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypeWeb"))
  {
    m_deviceTypeWeb = jsonValue.GetObject("DeviceTypeWeb");
    m_deviceTypeWebHasBeenSet = true;
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
