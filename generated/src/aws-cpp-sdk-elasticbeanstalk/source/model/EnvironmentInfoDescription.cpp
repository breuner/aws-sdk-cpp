﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>
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

EnvironmentInfoDescription::EnvironmentInfoDescription(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EnvironmentInfoDescription& EnvironmentInfoDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode infoTypeNode = resultNode.FirstChild("InfoType");
    if(!infoTypeNode.IsNull())
    {
      m_infoType = EnvironmentInfoTypeMapper::GetEnvironmentInfoTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(infoTypeNode.GetText()).c_str()));
      m_infoTypeHasBeenSet = true;
    }
    XmlNode ec2InstanceIdNode = resultNode.FirstChild("Ec2InstanceId");
    if(!ec2InstanceIdNode.IsNull())
    {
      m_ec2InstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(ec2InstanceIdNode.GetText());
      m_ec2InstanceIdHasBeenSet = true;
    }
    XmlNode sampleTimestampNode = resultNode.FirstChild("SampleTimestamp");
    if(!sampleTimestampNode.IsNull())
    {
      m_sampleTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampleTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_sampleTimestampHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentInfoDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_infoTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InfoType=" << StringUtils::URLEncode(EnvironmentInfoTypeMapper::GetNameForEnvironmentInfoType(m_infoType)) << "&";
  }

  if(m_ec2InstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ec2InstanceId=" << StringUtils::URLEncode(m_ec2InstanceId.c_str()) << "&";
  }

  if(m_sampleTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampleTimestamp=" << StringUtils::URLEncode(m_sampleTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void EnvironmentInfoDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_infoTypeHasBeenSet)
  {
      oStream << location << ".InfoType=" << StringUtils::URLEncode(EnvironmentInfoTypeMapper::GetNameForEnvironmentInfoType(m_infoType)) << "&";
  }
  if(m_ec2InstanceIdHasBeenSet)
  {
      oStream << location << ".Ec2InstanceId=" << StringUtils::URLEncode(m_ec2InstanceId.c_str()) << "&";
  }
  if(m_sampleTimestampHasBeenSet)
  {
      oStream << location << ".SampleTimestamp=" << StringUtils::URLEncode(m_sampleTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
