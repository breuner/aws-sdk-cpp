﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateNetworkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkInterface&";
  if(m_ipv4PrefixesHasBeenSet)
  {
    unsigned ipv4PrefixesCount = 1;
    for(auto& item : m_ipv4Prefixes)
    {
      item.OutputToStream(ss, "Ipv4Prefix.", ipv4PrefixesCount, "");
      ipv4PrefixesCount++;
    }
  }

  if(m_ipv4PrefixCountHasBeenSet)
  {
    ss << "Ipv4PrefixCount=" << m_ipv4PrefixCount << "&";
  }

  if(m_ipv6PrefixesHasBeenSet)
  {
    unsigned ipv6PrefixesCount = 1;
    for(auto& item : m_ipv6Prefixes)
    {
      item.OutputToStream(ss, "Ipv6Prefix.", ipv6PrefixesCount, "");
      ipv6PrefixesCount++;
    }
  }

  if(m_ipv6PrefixCountHasBeenSet)
  {
    ss << "Ipv6PrefixCount=" << m_ipv6PrefixCount << "&";
  }

  if(m_interfaceTypeHasBeenSet)
  {
    ss << "InterfaceType=" << StringUtils::URLEncode(NetworkInterfaceCreationTypeMapper::GetNameForNetworkInterfaceCreationType(m_interfaceType)) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_enablePrimaryIpv6HasBeenSet)
  {
    ss << "EnablePrimaryIpv6=" << std::boolalpha << m_enablePrimaryIpv6 << "&";
  }

  if(m_connectionTrackingSpecificationHasBeenSet)
  {
    m_connectionTrackingSpecification.OutputToStream(ss, "ConnectionTrackingSpecification");
  }

  if(m_operatorHasBeenSet)
  {
    m_operator.OutputToStream(ss, "Operator");
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
    ss << "PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_groupsHasBeenSet)
  {
    unsigned groupsCount = 1;
    for(auto& item : m_groups)
    {
      ss << "SecurityGroupId." << groupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupsCount++;
    }
  }

  if(m_privateIpAddressesHasBeenSet)
  {
    unsigned privateIpAddressesCount = 1;
    for(auto& item : m_privateIpAddresses)
    {
      item.OutputToStream(ss, "PrivateIpAddresses.", privateIpAddressesCount, "");
      privateIpAddressesCount++;
    }
  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
    ss << "SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
    unsigned ipv6AddressesCount = 1;
    for(auto& item : m_ipv6Addresses)
    {
      item.OutputToStream(ss, "Ipv6Addresses.", ipv6AddressesCount, "");
      ipv6AddressesCount++;
    }
  }

  if(m_ipv6AddressCountHasBeenSet)
  {
    ss << "Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
