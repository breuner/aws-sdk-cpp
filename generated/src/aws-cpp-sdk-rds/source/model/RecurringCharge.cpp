﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RecurringCharge.h>
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

RecurringCharge::RecurringCharge(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RecurringCharge& RecurringCharge::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recurringChargeAmountNode = resultNode.FirstChild("RecurringChargeAmount");
    if(!recurringChargeAmountNode.IsNull())
    {
      m_recurringChargeAmount = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recurringChargeAmountNode.GetText()).c_str()).c_str());
      m_recurringChargeAmountHasBeenSet = true;
    }
    XmlNode recurringChargeFrequencyNode = resultNode.FirstChild("RecurringChargeFrequency");
    if(!recurringChargeFrequencyNode.IsNull())
    {
      m_recurringChargeFrequency = Aws::Utils::Xml::DecodeEscapedXmlText(recurringChargeFrequencyNode.GetText());
      m_recurringChargeFrequencyHasBeenSet = true;
    }
  }

  return *this;
}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_recurringChargeAmountHasBeenSet)
  {
        oStream << location << index << locationValue << ".RecurringChargeAmount=" << StringUtils::URLEncode(m_recurringChargeAmount) << "&";
  }

  if(m_recurringChargeFrequencyHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecurringChargeFrequency=" << StringUtils::URLEncode(m_recurringChargeFrequency.c_str()) << "&";
  }

}

void RecurringCharge::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_recurringChargeAmountHasBeenSet)
  {
      oStream << location << ".RecurringChargeAmount=" << StringUtils::URLEncode(m_recurringChargeAmount) << "&";
  }
  if(m_recurringChargeFrequencyHasBeenSet)
  {
      oStream << location << ".RecurringChargeFrequency=" << StringUtils::URLEncode(m_recurringChargeFrequency.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
