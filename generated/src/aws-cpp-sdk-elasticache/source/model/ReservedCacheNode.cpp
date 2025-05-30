﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ReservedCacheNode.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ReservedCacheNode::ReservedCacheNode(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReservedCacheNode& ReservedCacheNode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedCacheNodeIdNode = resultNode.FirstChild("ReservedCacheNodeId");
    if(!reservedCacheNodeIdNode.IsNull())
    {
      m_reservedCacheNodeId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedCacheNodeIdNode.GetText());
      m_reservedCacheNodeIdHasBeenSet = true;
    }
    XmlNode reservedCacheNodesOfferingIdNode = resultNode.FirstChild("ReservedCacheNodesOfferingId");
    if(!reservedCacheNodesOfferingIdNode.IsNull())
    {
      m_reservedCacheNodesOfferingId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedCacheNodesOfferingIdNode.GetText());
      m_reservedCacheNodesOfferingIdHasBeenSet = true;
    }
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(durationNode.GetText()).c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("FixedPrice");
    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fixedPriceNode.GetText()).c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode usagePriceNode = resultNode.FirstChild("UsagePrice");
    if(!usagePriceNode.IsNull())
    {
      m_usagePrice = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usagePriceNode.GetText()).c_str()).c_str());
      m_usagePriceHasBeenSet = true;
    }
    XmlNode cacheNodeCountNode = resultNode.FirstChild("CacheNodeCount");
    if(!cacheNodeCountNode.IsNull())
    {
      m_cacheNodeCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeCountNode.GetText()).c_str()).c_str());
      m_cacheNodeCountHasBeenSet = true;
    }
    XmlNode productDescriptionNode = resultNode.FirstChild("ProductDescription");
    if(!productDescriptionNode.IsNull())
    {
      m_productDescription = Aws::Utils::Xml::DecodeEscapedXmlText(productDescriptionNode.GetText());
      m_productDescriptionHasBeenSet = true;
    }
    XmlNode offeringTypeNode = resultNode.FirstChild("OfferingType");
    if(!offeringTypeNode.IsNull())
    {
      m_offeringType = Aws::Utils::Xml::DecodeEscapedXmlText(offeringTypeNode.GetText());
      m_offeringTypeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode recurringChargesNode = resultNode.FirstChild("RecurringCharges");
    if(!recurringChargesNode.IsNull())
    {
      XmlNode recurringChargesMember = recurringChargesNode.FirstChild("RecurringCharge");
      m_recurringChargesHasBeenSet = !recurringChargesMember.IsNull();
      while(!recurringChargesMember.IsNull())
      {
        m_recurringCharges.push_back(recurringChargesMember);
        recurringChargesMember = recurringChargesMember.NextNode("RecurringCharge");
      }

      m_recurringChargesHasBeenSet = true;
    }
    XmlNode reservationARNNode = resultNode.FirstChild("ReservationARN");
    if(!reservationARNNode.IsNull())
    {
      m_reservationARN = Aws::Utils::Xml::DecodeEscapedXmlText(reservationARNNode.GetText());
      m_reservationARNHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedCacheNode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedCacheNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedCacheNodeId=" << StringUtils::URLEncode(m_reservedCacheNodeId.c_str()) << "&";
  }

  if(m_reservedCacheNodesOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedCacheNodesOfferingId=" << StringUtils::URLEncode(m_reservedCacheNodesOfferingId.c_str()) << "&";
  }

  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_fixedPriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }

  if(m_usagePriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }

  if(m_cacheNodeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeCount=" << m_cacheNodeCount << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << index << locationValue << ".RecurringCharges.RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }

  if(m_reservationARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservationARN=" << StringUtils::URLEncode(m_reservationARN.c_str()) << "&";
  }

}

void ReservedCacheNode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedCacheNodeIdHasBeenSet)
  {
      oStream << location << ".ReservedCacheNodeId=" << StringUtils::URLEncode(m_reservedCacheNodeId.c_str()) << "&";
  }
  if(m_reservedCacheNodesOfferingIdHasBeenSet)
  {
      oStream << location << ".ReservedCacheNodesOfferingId=" << StringUtils::URLEncode(m_reservedCacheNodesOfferingId.c_str()) << "&";
  }
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
      oStream << location << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }
  if(m_cacheNodeCountHasBeenSet)
  {
      oStream << location << ".CacheNodeCount=" << m_cacheNodeCount << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << ".RecurringCharges.RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }
  if(m_reservationARNHasBeenSet)
  {
      oStream << location << ".ReservationARN=" << StringUtils::URLEncode(m_reservationARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
