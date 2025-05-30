﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ReplicationTime.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

ReplicationTime::ReplicationTime(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReplicationTime& ReplicationTime::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ReplicationTimeStatusMapper::GetReplicationTimeStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode timeNode = resultNode.FirstChild("Time");
    if(!timeNode.IsNull())
    {
      m_time = timeNode;
      m_timeHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationTime::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(ReplicationTimeStatusMapper::GetNameForReplicationTimeStatus(m_status));
  }

  if(m_timeHasBeenSet)
  {
   XmlNode timeNode = parentNode.CreateChildElement("Time");
   m_time.AddToNode(timeNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
