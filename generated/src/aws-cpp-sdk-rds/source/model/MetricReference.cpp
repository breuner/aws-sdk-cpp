﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/MetricReference.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

MetricReference::MetricReference(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetricReference& MetricReference::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode referenceDetailsNode = resultNode.FirstChild("ReferenceDetails");
    if(!referenceDetailsNode.IsNull())
    {
      m_referenceDetails = referenceDetailsNode;
      m_referenceDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void MetricReference::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_referenceDetailsHasBeenSet)
  {
      Aws::StringStream referenceDetailsLocationAndMemberSs;
      referenceDetailsLocationAndMemberSs << location << index << locationValue << ".ReferenceDetails";
      m_referenceDetails.OutputToStream(oStream, referenceDetailsLocationAndMemberSs.str().c_str());
  }

}

void MetricReference::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_referenceDetailsHasBeenSet)
  {
      Aws::String referenceDetailsLocationAndMember(location);
      referenceDetailsLocationAndMember += ".ReferenceDetails";
      m_referenceDetails.OutputToStream(oStream, referenceDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
