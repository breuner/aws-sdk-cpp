﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/WorkmailAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

WorkmailAction::WorkmailAction(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

WorkmailAction& WorkmailAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
    XmlNode organizationArnNode = resultNode.FirstChild("OrganizationArn");
    if(!organizationArnNode.IsNull())
    {
      m_organizationArn = Aws::Utils::Xml::DecodeEscapedXmlText(organizationArnNode.GetText());
      m_organizationArnHasBeenSet = true;
    }
  }

  return *this;
}

void WorkmailAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_organizationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationArn=" << StringUtils::URLEncode(m_organizationArn.c_str()) << "&";
  }

}

void WorkmailAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_organizationArnHasBeenSet)
  {
      oStream << location << ".OrganizationArn=" << StringUtils::URLEncode(m_organizationArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
