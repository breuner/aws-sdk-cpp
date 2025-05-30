﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ApplicationMetrics::ApplicationMetrics(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ApplicationMetrics& ApplicationMetrics::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(durationNode.GetText()).c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode requestCountNode = resultNode.FirstChild("RequestCount");
    if(!requestCountNode.IsNull())
    {
      m_requestCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requestCountNode.GetText()).c_str()).c_str());
      m_requestCountHasBeenSet = true;
    }
    XmlNode statusCodesNode = resultNode.FirstChild("StatusCodes");
    if(!statusCodesNode.IsNull())
    {
      m_statusCodes = statusCodesNode;
      m_statusCodesHasBeenSet = true;
    }
    XmlNode latencyNode = resultNode.FirstChild("Latency");
    if(!latencyNode.IsNull())
    {
      m_latency = latencyNode;
      m_latencyHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationMetrics::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_requestCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestCount=" << m_requestCount << "&";
  }

  if(m_statusCodesHasBeenSet)
  {
      Aws::StringStream statusCodesLocationAndMemberSs;
      statusCodesLocationAndMemberSs << location << index << locationValue << ".StatusCodes";
      m_statusCodes.OutputToStream(oStream, statusCodesLocationAndMemberSs.str().c_str());
  }

  if(m_latencyHasBeenSet)
  {
      Aws::StringStream latencyLocationAndMemberSs;
      latencyLocationAndMemberSs << location << index << locationValue << ".Latency";
      m_latency.OutputToStream(oStream, latencyLocationAndMemberSs.str().c_str());
  }

}

void ApplicationMetrics::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_requestCountHasBeenSet)
  {
      oStream << location << ".RequestCount=" << m_requestCount << "&";
  }
  if(m_statusCodesHasBeenSet)
  {
      Aws::String statusCodesLocationAndMember(location);
      statusCodesLocationAndMember += ".StatusCodes";
      m_statusCodes.OutputToStream(oStream, statusCodesLocationAndMember.c_str());
  }
  if(m_latencyHasBeenSet)
  {
      Aws::String latencyLocationAndMember(location);
      latencyLocationAndMember += ".Latency";
      m_latency.OutputToStream(oStream, latencyLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
