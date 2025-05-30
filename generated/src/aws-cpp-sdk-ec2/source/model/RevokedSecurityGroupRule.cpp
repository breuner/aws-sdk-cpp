﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RevokedSecurityGroupRule.h>
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

RevokedSecurityGroupRule::RevokedSecurityGroupRule(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RevokedSecurityGroupRule& RevokedSecurityGroupRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupRuleIdNode = resultNode.FirstChild("securityGroupRuleId");
    if(!securityGroupRuleIdNode.IsNull())
    {
      m_securityGroupRuleId = Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupRuleIdNode.GetText());
      m_securityGroupRuleIdHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("groupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = Aws::Utils::Xml::DecodeEscapedXmlText(groupIdNode.GetText());
      m_groupIdHasBeenSet = true;
    }
    XmlNode isEgressNode = resultNode.FirstChild("isEgress");
    if(!isEgressNode.IsNull())
    {
      m_isEgress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isEgressNode.GetText()).c_str()).c_str());
      m_isEgressHasBeenSet = true;
    }
    XmlNode ipProtocolNode = resultNode.FirstChild("ipProtocol");
    if(!ipProtocolNode.IsNull())
    {
      m_ipProtocol = Aws::Utils::Xml::DecodeEscapedXmlText(ipProtocolNode.GetText());
      m_ipProtocolHasBeenSet = true;
    }
    XmlNode fromPortNode = resultNode.FirstChild("fromPort");
    if(!fromPortNode.IsNull())
    {
      m_fromPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fromPortNode.GetText()).c_str()).c_str());
      m_fromPortHasBeenSet = true;
    }
    XmlNode toPortNode = resultNode.FirstChild("toPort");
    if(!toPortNode.IsNull())
    {
      m_toPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(toPortNode.GetText()).c_str()).c_str());
      m_toPortHasBeenSet = true;
    }
    XmlNode cidrIpv4Node = resultNode.FirstChild("cidrIpv4");
    if(!cidrIpv4Node.IsNull())
    {
      m_cidrIpv4 = Aws::Utils::Xml::DecodeEscapedXmlText(cidrIpv4Node.GetText());
      m_cidrIpv4HasBeenSet = true;
    }
    XmlNode cidrIpv6Node = resultNode.FirstChild("cidrIpv6");
    if(!cidrIpv6Node.IsNull())
    {
      m_cidrIpv6 = Aws::Utils::Xml::DecodeEscapedXmlText(cidrIpv6Node.GetText());
      m_cidrIpv6HasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode referencedGroupIdNode = resultNode.FirstChild("referencedGroupId");
    if(!referencedGroupIdNode.IsNull())
    {
      m_referencedGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(referencedGroupIdNode.GetText());
      m_referencedGroupIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void RevokedSecurityGroupRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_isEgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsEgress=" << std::boolalpha << m_isEgress << "&";
  }

  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }

  if(m_fromPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromPort=" << m_fromPort << "&";
  }

  if(m_toPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".ToPort=" << m_toPort << "&";
  }

  if(m_cidrIpv4HasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIpv4=" << StringUtils::URLEncode(m_cidrIpv4.c_str()) << "&";
  }

  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_referencedGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReferencedGroupId=" << StringUtils::URLEncode(m_referencedGroupId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void RevokedSecurityGroupRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_securityGroupRuleIdHasBeenSet)
  {
      oStream << location << ".SecurityGroupRuleId=" << StringUtils::URLEncode(m_securityGroupRuleId.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_isEgressHasBeenSet)
  {
      oStream << location << ".IsEgress=" << std::boolalpha << m_isEgress << "&";
  }
  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }
  if(m_fromPortHasBeenSet)
  {
      oStream << location << ".FromPort=" << m_fromPort << "&";
  }
  if(m_toPortHasBeenSet)
  {
      oStream << location << ".ToPort=" << m_toPort << "&";
  }
  if(m_cidrIpv4HasBeenSet)
  {
      oStream << location << ".CidrIpv4=" << StringUtils::URLEncode(m_cidrIpv4.c_str()) << "&";
  }
  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_referencedGroupIdHasBeenSet)
  {
      oStream << location << ".ReferencedGroupId=" << StringUtils::URLEncode(m_referencedGroupId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
