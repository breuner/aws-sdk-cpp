﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BlockDeviceMapping.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

BlockDeviceMapping::BlockDeviceMapping(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

BlockDeviceMapping& BlockDeviceMapping::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode virtualNameNode = resultNode.FirstChild("VirtualName");
    if(!virtualNameNode.IsNull())
    {
      m_virtualName = Aws::Utils::Xml::DecodeEscapedXmlText(virtualNameNode.GetText());
      m_virtualNameHasBeenSet = true;
    }
    XmlNode deviceNameNode = resultNode.FirstChild("DeviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNameNode.GetText());
      m_deviceNameHasBeenSet = true;
    }
    XmlNode ebsNode = resultNode.FirstChild("Ebs");
    if(!ebsNode.IsNull())
    {
      m_ebs = ebsNode;
      m_ebsHasBeenSet = true;
    }
    XmlNode noDeviceNode = resultNode.FirstChild("NoDevice");
    if(!noDeviceNode.IsNull())
    {
      m_noDevice = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(noDeviceNode.GetText()).c_str()).c_str());
      m_noDeviceHasBeenSet = true;
    }
  }

  return *this;
}

void BlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_virtualNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
  }

  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_ebsHasBeenSet)
  {
      Aws::StringStream ebsLocationAndMemberSs;
      ebsLocationAndMemberSs << location << index << locationValue << ".Ebs";
      m_ebs.OutputToStream(oStream, ebsLocationAndMemberSs.str().c_str());
  }

  if(m_noDeviceHasBeenSet)
  {
      oStream << location << index << locationValue << ".NoDevice=" << std::boolalpha << m_noDevice << "&";
  }

}

void BlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_virtualNameHasBeenSet)
  {
      oStream << location << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
  }
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }
  if(m_ebsHasBeenSet)
  {
      Aws::String ebsLocationAndMember(location);
      ebsLocationAndMember += ".Ebs";
      m_ebs.OutputToStream(oStream, ebsLocationAndMember.c_str());
  }
  if(m_noDeviceHasBeenSet)
  {
      oStream << location << ".NoDevice=" << std::boolalpha << m_noDevice << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
