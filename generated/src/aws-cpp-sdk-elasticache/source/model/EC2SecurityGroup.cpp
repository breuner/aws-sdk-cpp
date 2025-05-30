﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/EC2SecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

EC2SecurityGroup::EC2SecurityGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EC2SecurityGroup& EC2SecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupNameNode = resultNode.FirstChild("EC2SecurityGroupName");
    if(!eC2SecurityGroupNameNode.IsNull())
    {
      m_eC2SecurityGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(eC2SecurityGroupNameNode.GetText());
      m_eC2SecurityGroupNameHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupOwnerIdNode = resultNode.FirstChild("EC2SecurityGroupOwnerId");
    if(!eC2SecurityGroupOwnerIdNode.IsNull())
    {
      m_eC2SecurityGroupOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(eC2SecurityGroupOwnerIdNode.GetText());
      m_eC2SecurityGroupOwnerIdHasBeenSet = true;
    }
  }

  return *this;
}

void EC2SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_eC2SecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }

  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }

}

void EC2SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_eC2SecurityGroupNameHasBeenSet)
  {
      oStream << location << ".EC2SecurityGroupName=" << StringUtils::URLEncode(m_eC2SecurityGroupName.c_str()) << "&";
  }
  if(m_eC2SecurityGroupOwnerIdHasBeenSet)
  {
      oStream << location << ".EC2SecurityGroupOwnerId=" << StringUtils::URLEncode(m_eC2SecurityGroupOwnerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
