﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamPoolAllocationsResponse.h>
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

GetIpamPoolAllocationsResponse::GetIpamPoolAllocationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIpamPoolAllocationsResponse& GetIpamPoolAllocationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamPoolAllocationsResponse"))
  {
    resultNode = rootNode.FirstChild("GetIpamPoolAllocationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamPoolAllocationsNode = resultNode.FirstChild("ipamPoolAllocationSet");
    if(!ipamPoolAllocationsNode.IsNull())
    {
      XmlNode ipamPoolAllocationsMember = ipamPoolAllocationsNode.FirstChild("item");
      m_ipamPoolAllocationsHasBeenSet = !ipamPoolAllocationsMember.IsNull();
      while(!ipamPoolAllocationsMember.IsNull())
      {
        m_ipamPoolAllocations.push_back(ipamPoolAllocationsMember);
        ipamPoolAllocationsMember = ipamPoolAllocationsMember.NextNode("item");
      }

      m_ipamPoolAllocationsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamPoolAllocationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
