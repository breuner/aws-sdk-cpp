﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InventorySchedule.h>
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

InventorySchedule::InventorySchedule(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InventorySchedule& InventorySchedule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode frequencyNode = resultNode.FirstChild("Frequency");
    if(!frequencyNode.IsNull())
    {
      m_frequency = InventoryFrequencyMapper::GetInventoryFrequencyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(frequencyNode.GetText()).c_str()));
      m_frequencyHasBeenSet = true;
    }
  }

  return *this;
}

void InventorySchedule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_frequencyHasBeenSet)
  {
   XmlNode frequencyNode = parentNode.CreateChildElement("Frequency");
   frequencyNode.SetText(InventoryFrequencyMapper::GetNameForInventoryFrequency(m_frequency));
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
