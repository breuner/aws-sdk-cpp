﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyInstancesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPolicyInstancesResult::ListTrafficPolicyInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTrafficPolicyInstancesResult& ListTrafficPolicyInstancesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstancesNode = resultNode.FirstChild("TrafficPolicyInstances");
    if(!trafficPolicyInstancesNode.IsNull())
    {
      XmlNode trafficPolicyInstancesMember = trafficPolicyInstancesNode.FirstChild("TrafficPolicyInstance");
      m_trafficPolicyInstancesHasBeenSet = !trafficPolicyInstancesMember.IsNull();
      while(!trafficPolicyInstancesMember.IsNull())
      {
        m_trafficPolicyInstances.push_back(trafficPolicyInstancesMember);
        trafficPolicyInstancesMember = trafficPolicyInstancesMember.NextNode("TrafficPolicyInstance");
      }

      m_trafficPolicyInstancesHasBeenSet = true;
    }
    XmlNode hostedZoneIdMarkerNode = resultNode.FirstChild("HostedZoneIdMarker");
    if(!hostedZoneIdMarkerNode.IsNull())
    {
      m_hostedZoneIdMarker = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdMarkerNode.GetText());
      m_hostedZoneIdMarkerHasBeenSet = true;
    }
    XmlNode trafficPolicyInstanceNameMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceNameMarker");
    if(!trafficPolicyInstanceNameMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceNameMarker = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceNameMarkerNode.GetText());
      m_trafficPolicyInstanceNameMarkerHasBeenSet = true;
    }
    XmlNode trafficPolicyInstanceTypeMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceTypeMarker");
    if(!trafficPolicyInstanceTypeMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceTypeMarker = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceTypeMarkerNode.GetText()).c_str()));
      m_trafficPolicyInstanceTypeMarkerHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
      m_maxItemsHasBeenSet = true;
    }
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
