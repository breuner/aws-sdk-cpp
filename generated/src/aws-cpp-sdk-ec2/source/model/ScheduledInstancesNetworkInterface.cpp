﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ScheduledInstancesNetworkInterface.h>
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

ScheduledInstancesNetworkInterface::ScheduledInstancesNetworkInterface(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ScheduledInstancesNetworkInterface& ScheduledInstancesNetworkInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associatePublicIpAddressNode = resultNode.FirstChild("AssociatePublicIpAddress");
    if(!associatePublicIpAddressNode.IsNull())
    {
      m_associatePublicIpAddress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatePublicIpAddressNode.GetText()).c_str()).c_str());
      m_associatePublicIpAddressHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("DeleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode deviceIndexNode = resultNode.FirstChild("DeviceIndex");
    if(!deviceIndexNode.IsNull())
    {
      m_deviceIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceIndexNode.GetText()).c_str()).c_str());
      m_deviceIndexHasBeenSet = true;
    }
    XmlNode groupsNode = resultNode.FirstChild("Group");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("SecurityGroupId");
      m_groupsHasBeenSet = !groupsMember.IsNull();
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember.GetText());
        groupsMember = groupsMember.NextNode("SecurityGroupId");
      }

      m_groupsHasBeenSet = true;
    }
    XmlNode ipv6AddressCountNode = resultNode.FirstChild("Ipv6AddressCount");
    if(!ipv6AddressCountNode.IsNull())
    {
      m_ipv6AddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressCountNode.GetText()).c_str()).c_str());
      m_ipv6AddressCountHasBeenSet = true;
    }
    XmlNode ipv6AddressesNode = resultNode.FirstChild("Ipv6Address");
    if(!ipv6AddressesNode.IsNull())
    {
      XmlNode ipv6AddressesMember = ipv6AddressesNode.FirstChild("Ipv6Address");
      m_ipv6AddressesHasBeenSet = !ipv6AddressesMember.IsNull();
      while(!ipv6AddressesMember.IsNull())
      {
        m_ipv6Addresses.push_back(ipv6AddressesMember);
        ipv6AddressesMember = ipv6AddressesMember.NextNode("Ipv6Address");
      }

      m_ipv6AddressesHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("NetworkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("PrivateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode privateIpAddressConfigsNode = resultNode.FirstChild("PrivateIpAddressConfig");
    if(!privateIpAddressConfigsNode.IsNull())
    {
      XmlNode privateIpAddressConfigsMember = privateIpAddressConfigsNode.FirstChild("PrivateIpAddressConfigSet");
      m_privateIpAddressConfigsHasBeenSet = !privateIpAddressConfigsMember.IsNull();
      while(!privateIpAddressConfigsMember.IsNull())
      {
        m_privateIpAddressConfigs.push_back(privateIpAddressConfigsMember);
        privateIpAddressConfigsMember = privateIpAddressConfigsMember.NextNode("PrivateIpAddressConfigSet");
      }

      m_privateIpAddressConfigsHasBeenSet = true;
    }
    XmlNode secondaryPrivateIpAddressCountNode = resultNode.FirstChild("SecondaryPrivateIpAddressCount");
    if(!secondaryPrivateIpAddressCountNode.IsNull())
    {
      m_secondaryPrivateIpAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondaryPrivateIpAddressCountNode.GetText()).c_str()).c_str());
      m_secondaryPrivateIpAddressCountHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesNetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceIndex=" << m_deviceIndex << "&";
  }

  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        oStream << location << index << locationValue << ".Group." << groupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_ipv6AddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location << index << locationValue << ".Ipv6Address." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_privateIpAddressConfigsHasBeenSet)
  {
      unsigned privateIpAddressConfigsIdx = 1;
      for(auto& item : m_privateIpAddressConfigs)
      {
        Aws::StringStream privateIpAddressConfigsSs;
        privateIpAddressConfigsSs << location << index << locationValue << ".PrivateIpAddressConfig." << privateIpAddressConfigsIdx++;
        item.OutputToStream(oStream, privateIpAddressConfigsSs.str().c_str());
      }
  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

}

void ScheduledInstancesNetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << ".DeviceIndex=" << m_deviceIndex << "&";
  }
  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        oStream << location << ".Group." << groupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ipv6AddressCountHasBeenSet)
  {
      oStream << location << ".Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }
  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location << ".Ipv6Address." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_privateIpAddressConfigsHasBeenSet)
  {
      unsigned privateIpAddressConfigsIdx = 1;
      for(auto& item : m_privateIpAddressConfigs)
      {
        Aws::StringStream privateIpAddressConfigsSs;
        privateIpAddressConfigsSs << location << ".PrivateIpAddressConfig." << privateIpAddressConfigsIdx++;
        item.OutputToStream(oStream, privateIpAddressConfigsSs.str().c_str());
      }
  }
  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
      oStream << location << ".SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
