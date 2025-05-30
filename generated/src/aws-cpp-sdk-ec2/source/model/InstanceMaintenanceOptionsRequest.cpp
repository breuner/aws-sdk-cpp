﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMaintenanceOptionsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

InstanceMaintenanceOptionsRequest::InstanceMaintenanceOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceMaintenanceOptionsRequest& InstanceMaintenanceOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoRecoveryNode = resultNode.FirstChild("AutoRecovery");
    if(!autoRecoveryNode.IsNull())
    {
      m_autoRecovery = InstanceAutoRecoveryStateMapper::GetInstanceAutoRecoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoveryNode.GetText()).c_str()));
      m_autoRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMaintenanceOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRecovery=" << StringUtils::URLEncode(InstanceAutoRecoveryStateMapper::GetNameForInstanceAutoRecoveryState(m_autoRecovery)) << "&";
  }

}

void InstanceMaintenanceOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << ".AutoRecovery=" << StringUtils::URLEncode(InstanceAutoRecoveryStateMapper::GetNameForInstanceAutoRecoveryState(m_autoRecovery)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
