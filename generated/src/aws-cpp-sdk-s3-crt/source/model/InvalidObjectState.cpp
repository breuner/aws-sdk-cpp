﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InvalidObjectState.h>
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

InvalidObjectState::InvalidObjectState(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InvalidObjectState& InvalidObjectState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = StorageClassMapper::GetStorageClassForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageClassNode.GetText()).c_str()));
      m_storageClassHasBeenSet = true;
    }
    XmlNode accessTierNode = resultNode.FirstChild("AccessTier");
    if(!accessTierNode.IsNull())
    {
      m_accessTier = IntelligentTieringAccessTierMapper::GetIntelligentTieringAccessTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accessTierNode.GetText()).c_str()));
      m_accessTierHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidObjectState::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_accessTierHasBeenSet)
  {
   XmlNode accessTierNode = parentNode.CreateChildElement("AccessTier");
   accessTierNode.SetText(IntelligentTieringAccessTierMapper::GetNameForIntelligentTieringAccessTier(m_accessTier));
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
