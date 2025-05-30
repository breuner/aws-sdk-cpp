﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/AccessControlTranslation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

AccessControlTranslation::AccessControlTranslation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AccessControlTranslation& AccessControlTranslation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = OwnerOverrideMapper::GetOwnerOverrideForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ownerNode.GetText()).c_str()));
      m_ownerHasBeenSet = true;
    }
  }

  return *this;
}

void AccessControlTranslation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_ownerHasBeenSet)
  {
   XmlNode ownerNode = parentNode.CreateChildElement("Owner");
   ownerNode.SetText(OwnerOverrideMapper::GetNameForOwnerOverride(m_owner));
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
