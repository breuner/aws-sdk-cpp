﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeInstanceEventWindowsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceEventWindowsResponse::DescribeInstanceEventWindowsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstanceEventWindowsResponse& DescribeInstanceEventWindowsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstanceEventWindowsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeInstanceEventWindowsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceEventWindowsNode = resultNode.FirstChild("instanceEventWindowSet");
    if(!instanceEventWindowsNode.IsNull())
    {
      XmlNode instanceEventWindowsMember = instanceEventWindowsNode.FirstChild("item");
      m_instanceEventWindowsHasBeenSet = !instanceEventWindowsMember.IsNull();
      while(!instanceEventWindowsMember.IsNull())
      {
        m_instanceEventWindows.push_back(instanceEventWindowsMember);
        instanceEventWindowsMember = instanceEventWindowsMember.NextNode("item");
      }

      m_instanceEventWindowsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeInstanceEventWindowsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
