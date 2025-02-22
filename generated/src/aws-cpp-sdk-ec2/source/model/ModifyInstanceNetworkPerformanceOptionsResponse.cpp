﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceNetworkPerformanceOptionsResponse.h>
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

ModifyInstanceNetworkPerformanceOptionsResponse::ModifyInstanceNetworkPerformanceOptionsResponse() : 
    m_bandwidthWeighting(InstanceBandwidthWeighting::NOT_SET)
{
}

ModifyInstanceNetworkPerformanceOptionsResponse::ModifyInstanceNetworkPerformanceOptionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : ModifyInstanceNetworkPerformanceOptionsResponse()
{
  *this = result;
}

ModifyInstanceNetworkPerformanceOptionsResponse& ModifyInstanceNetworkPerformanceOptionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyInstanceNetworkPerformanceOptionsResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyInstanceNetworkPerformanceOptionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
    }
    XmlNode bandwidthWeightingNode = resultNode.FirstChild("bandwidthWeighting");
    if(!bandwidthWeightingNode.IsNull())
    {
      m_bandwidthWeighting = InstanceBandwidthWeightingMapper::GetInstanceBandwidthWeightingForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bandwidthWeightingNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyInstanceNetworkPerformanceOptionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
