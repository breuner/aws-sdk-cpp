﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetHealth.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetHealth::TargetHealth(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TargetHealth& TargetHealth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = TargetHealthStateEnumMapper::GetTargetHealthStateEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = TargetHealthReasonEnumMapper::GetTargetHealthReasonEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText()).c_str()));
      m_reasonHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(m_state)) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(TargetHealthReasonEnumMapper::GetNameForTargetHealthReasonEnum(m_reason)) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(m_state)) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << StringUtils::URLEncode(TargetHealthReasonEnumMapper::GetNameForTargetHealthReasonEnum(m_reason)) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
