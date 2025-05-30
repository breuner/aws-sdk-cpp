﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/CORSConfiguration.h>
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

CORSConfiguration::CORSConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CORSConfiguration& CORSConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cORSRulesNode = resultNode.FirstChild("CORSRule");
    if(!cORSRulesNode.IsNull())
    {
      XmlNode cORSRuleMember = cORSRulesNode;
      m_cORSRulesHasBeenSet = !cORSRuleMember.IsNull();
      while(!cORSRuleMember.IsNull())
      {
        m_cORSRules.push_back(cORSRuleMember);
        cORSRuleMember = cORSRuleMember.NextNode("CORSRule");
      }

      m_cORSRulesHasBeenSet = true;
    }
  }

  return *this;
}

void CORSConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_cORSRulesHasBeenSet)
  {
   for(const auto& item : m_cORSRules)
   {
     XmlNode cORSRulesNode = parentNode.CreateChildElement("CORSRule");
     item.AddToNode(cORSRulesNode);
   }
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
