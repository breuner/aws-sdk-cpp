﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AccountAttributeValue.h>
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

AccountAttributeValue::AccountAttributeValue(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AccountAttributeValue& AccountAttributeValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeValueNode = resultNode.FirstChild("attributeValue");
    if(!attributeValueNode.IsNull())
    {
      m_attributeValue = Aws::Utils::Xml::DecodeEscapedXmlText(attributeValueNode.GetText());
      m_attributeValueHasBeenSet = true;
    }
  }

  return *this;
}

void AccountAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }

}

void AccountAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeValueHasBeenSet)
  {
      oStream << location << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
