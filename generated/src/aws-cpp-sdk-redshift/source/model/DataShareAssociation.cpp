﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareAssociation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

DataShareAssociation::DataShareAssociation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DataShareAssociation& DataShareAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode consumerIdentifierNode = resultNode.FirstChild("ConsumerIdentifier");
    if(!consumerIdentifierNode.IsNull())
    {
      m_consumerIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(consumerIdentifierNode.GetText());
      m_consumerIdentifierHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = DataShareStatusMapper::GetDataShareStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode consumerRegionNode = resultNode.FirstChild("ConsumerRegion");
    if(!consumerRegionNode.IsNull())
    {
      m_consumerRegion = Aws::Utils::Xml::DecodeEscapedXmlText(consumerRegionNode.GetText());
      m_consumerRegionHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode statusChangeDateNode = resultNode.FirstChild("StatusChangeDate");
    if(!statusChangeDateNode.IsNull())
    {
      m_statusChangeDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusChangeDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_statusChangeDateHasBeenSet = true;
    }
    XmlNode producerAllowedWritesNode = resultNode.FirstChild("ProducerAllowedWrites");
    if(!producerAllowedWritesNode.IsNull())
    {
      m_producerAllowedWrites = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(producerAllowedWritesNode.GetText()).c_str()).c_str());
      m_producerAllowedWritesHasBeenSet = true;
    }
    XmlNode consumerAcceptedWritesNode = resultNode.FirstChild("ConsumerAcceptedWrites");
    if(!consumerAcceptedWritesNode.IsNull())
    {
      m_consumerAcceptedWrites = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(consumerAcceptedWritesNode.GetText()).c_str()).c_str());
      m_consumerAcceptedWritesHasBeenSet = true;
    }
  }

  return *this;
}

void DataShareAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_consumerIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(DataShareStatusMapper::GetNameForDataShareStatus(m_status)) << "&";
  }

  if(m_consumerRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusChangeDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusChangeDate=" << StringUtils::URLEncode(m_statusChangeDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_producerAllowedWritesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProducerAllowedWrites=" << std::boolalpha << m_producerAllowedWrites << "&";
  }

  if(m_consumerAcceptedWritesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConsumerAcceptedWrites=" << std::boolalpha << m_consumerAcceptedWrites << "&";
  }

}

void DataShareAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_consumerIdentifierHasBeenSet)
  {
      oStream << location << ".ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(DataShareStatusMapper::GetNameForDataShareStatus(m_status)) << "&";
  }
  if(m_consumerRegionHasBeenSet)
  {
      oStream << location << ".ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusChangeDateHasBeenSet)
  {
      oStream << location << ".StatusChangeDate=" << StringUtils::URLEncode(m_statusChangeDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_producerAllowedWritesHasBeenSet)
  {
      oStream << location << ".ProducerAllowedWrites=" << std::boolalpha << m_producerAllowedWrites << "&";
  }
  if(m_consumerAcceptedWritesHasBeenSet)
  {
      oStream << location << ".ConsumerAcceptedWrites=" << std::boolalpha << m_consumerAcceptedWrites << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
