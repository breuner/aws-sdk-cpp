﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AdvancedCostOptimizationMetrics.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AdvancedCostOptimizationMetrics::AdvancedCostOptimizationMetrics(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AdvancedCostOptimizationMetrics& AdvancedCostOptimizationMetrics::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode isEnabledNode = resultNode.FirstChild("IsEnabled");
    if(!isEnabledNode.IsNull())
    {
      m_isEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isEnabledNode.GetText()).c_str()).c_str());
      m_isEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void AdvancedCostOptimizationMetrics::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_isEnabledHasBeenSet)
  {
   XmlNode isEnabledNode = parentNode.CreateChildElement("IsEnabled");
   ss << std::boolalpha << m_isEnabled;
   isEnabledNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
