﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

AlarmIdentifier::AlarmIdentifier(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AlarmIdentifier& AlarmIdentifier::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = CloudWatchRegionMapper::GetCloudWatchRegionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText()).c_str()));
      m_regionHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmIdentifier::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(CloudWatchRegionMapper::GetNameForCloudWatchRegion(m_region));
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
