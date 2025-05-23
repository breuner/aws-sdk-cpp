﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/LambdaAction.h>
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

LambdaAction::LambdaAction(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LambdaAction& LambdaAction::operator =(const XmlNode& xmlNode)
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
    XmlNode functionArnNode = resultNode.FirstChild("FunctionArn");
    if(!functionArnNode.IsNull())
    {
      m_functionArn = Aws::Utils::Xml::DecodeEscapedXmlText(functionArnNode.GetText());
      m_functionArnHasBeenSet = true;
    }
    XmlNode invocationTypeNode = resultNode.FirstChild("InvocationType");
    if(!invocationTypeNode.IsNull())
    {
      m_invocationType = InvocationTypeMapper::GetInvocationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invocationTypeNode.GetText()).c_str()));
      m_invocationTypeHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_functionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }

  if(m_invocationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InvocationType=" << StringUtils::URLEncode(InvocationTypeMapper::GetNameForInvocationType(m_invocationType)) << "&";
  }

}

void LambdaAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_functionArnHasBeenSet)
  {
      oStream << location << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }
  if(m_invocationTypeHasBeenSet)
  {
      oStream << location << ".InvocationType=" << StringUtils::URLEncode(InvocationTypeMapper::GetNameForInvocationType(m_invocationType)) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
