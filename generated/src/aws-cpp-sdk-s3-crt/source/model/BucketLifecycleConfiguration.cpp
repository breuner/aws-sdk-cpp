﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/BucketLifecycleConfiguration.h>
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

BucketLifecycleConfiguration::BucketLifecycleConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

BucketLifecycleConfiguration& BucketLifecycleConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode rulesNode = resultNode.FirstChild("Rule");
    if(!rulesNode.IsNull())
    {
      XmlNode ruleMember = rulesNode;
      m_rulesHasBeenSet = !ruleMember.IsNull();
      while(!ruleMember.IsNull())
      {
        m_rules.push_back(ruleMember);
        ruleMember = ruleMember.NextNode("Rule");
      }

      m_rulesHasBeenSet = true;
    }
  }

  return *this;
}

void BucketLifecycleConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_rulesHasBeenSet)
  {
   for(const auto& item : m_rules)
   {
     XmlNode rulesNode = parentNode.CreateChildElement("Rule");
     item.AddToNode(rulesNode);
   }
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
