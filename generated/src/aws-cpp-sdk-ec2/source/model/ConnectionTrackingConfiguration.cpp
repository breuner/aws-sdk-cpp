﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectionTrackingConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ConnectionTrackingConfiguration::ConnectionTrackingConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConnectionTrackingConfiguration& ConnectionTrackingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tcpEstablishedTimeoutNode = resultNode.FirstChild("tcpEstablishedTimeout");
    if(!tcpEstablishedTimeoutNode.IsNull())
    {
      m_tcpEstablishedTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tcpEstablishedTimeoutNode.GetText()).c_str()).c_str());
      m_tcpEstablishedTimeoutHasBeenSet = true;
    }
    XmlNode udpStreamTimeoutNode = resultNode.FirstChild("udpStreamTimeout");
    if(!udpStreamTimeoutNode.IsNull())
    {
      m_udpStreamTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(udpStreamTimeoutNode.GetText()).c_str()).c_str());
      m_udpStreamTimeoutHasBeenSet = true;
    }
    XmlNode udpTimeoutNode = resultNode.FirstChild("udpTimeout");
    if(!udpTimeoutNode.IsNull())
    {
      m_udpTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(udpTimeoutNode.GetText()).c_str()).c_str());
      m_udpTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tcpEstablishedTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".TcpEstablishedTimeout=" << m_tcpEstablishedTimeout << "&";
  }

  if(m_udpStreamTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".UdpStreamTimeout=" << m_udpStreamTimeout << "&";
  }

  if(m_udpTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".UdpTimeout=" << m_udpTimeout << "&";
  }

}

void ConnectionTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tcpEstablishedTimeoutHasBeenSet)
  {
      oStream << location << ".TcpEstablishedTimeout=" << m_tcpEstablishedTimeout << "&";
  }
  if(m_udpStreamTimeoutHasBeenSet)
  {
      oStream << location << ".UdpStreamTimeout=" << m_udpStreamTimeout << "&";
  }
  if(m_udpTimeoutHasBeenSet)
  {
      oStream << location << ".UdpTimeout=" << m_udpTimeout << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
