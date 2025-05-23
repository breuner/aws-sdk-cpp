﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeAttachment.h>
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

VolumeAttachment::VolumeAttachment(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VolumeAttachment& VolumeAttachment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode associatedResourceNode = resultNode.FirstChild("associatedResource");
    if(!associatedResourceNode.IsNull())
    {
      m_associatedResource = Aws::Utils::Xml::DecodeEscapedXmlText(associatedResourceNode.GetText());
      m_associatedResourceHasBeenSet = true;
    }
    XmlNode instanceOwningServiceNode = resultNode.FirstChild("instanceOwningService");
    if(!instanceOwningServiceNode.IsNull())
    {
      m_instanceOwningService = Aws::Utils::Xml::DecodeEscapedXmlText(instanceOwningServiceNode.GetText());
      m_instanceOwningServiceHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode deviceNode = resultNode.FirstChild("device");
    if(!deviceNode.IsNull())
    {
      m_device = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNode.GetText());
      m_deviceHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = VolumeAttachmentStateMapper::GetVolumeAttachmentStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode attachTimeNode = resultNode.FirstChild("attachTime");
    if(!attachTimeNode.IsNull())
    {
      m_attachTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attachTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_attachTimeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }

  if(m_instanceOwningServiceHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceOwningService=" << StringUtils::URLEncode(m_instanceOwningService.c_str()) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_deviceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Device=" << StringUtils::URLEncode(m_device.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(VolumeAttachmentStateMapper::GetNameForVolumeAttachmentState(m_state)) << "&";
  }

  if(m_attachTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void VolumeAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }
  if(m_instanceOwningServiceHasBeenSet)
  {
      oStream << location << ".InstanceOwningService=" << StringUtils::URLEncode(m_instanceOwningService.c_str()) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_deviceHasBeenSet)
  {
      oStream << location << ".Device=" << StringUtils::URLEncode(m_device.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(VolumeAttachmentStateMapper::GetNameForVolumeAttachmentState(m_state)) << "&";
  }
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace EC2
} // namespace Aws
