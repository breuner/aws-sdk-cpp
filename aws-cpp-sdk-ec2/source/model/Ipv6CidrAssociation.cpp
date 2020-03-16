﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/Ipv6CidrAssociation.h>
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

Ipv6CidrAssociation::Ipv6CidrAssociation() : 
    m_ipv6CidrHasBeenSet(false),
    m_associatedResourceHasBeenSet(false)
{
}

Ipv6CidrAssociation::Ipv6CidrAssociation(const XmlNode& xmlNode) : 
    m_ipv6CidrHasBeenSet(false),
    m_associatedResourceHasBeenSet(false)
{
  *this = xmlNode;
}

Ipv6CidrAssociation& Ipv6CidrAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrNode = resultNode.FirstChild("ipv6Cidr");
    if(!ipv6CidrNode.IsNull())
    {
      m_ipv6Cidr = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6CidrNode.GetText());
      m_ipv6CidrHasBeenSet = true;
    }
    XmlNode associatedResourceNode = resultNode.FirstChild("associatedResource");
    if(!associatedResourceNode.IsNull())
    {
      m_associatedResource = Aws::Utils::Xml::DecodeEscapedXmlText(associatedResourceNode.GetText());
      m_associatedResourceHasBeenSet = true;
    }
  }

  return *this;
}

void Ipv6CidrAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6CidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Cidr=" << StringUtils::URLEncode(m_ipv6Cidr.c_str()) << "&";
  }

  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }

}

void Ipv6CidrAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6CidrHasBeenSet)
  {
      oStream << location << ".Ipv6Cidr=" << StringUtils::URLEncode(m_ipv6Cidr.c_str()) << "&";
  }
  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws