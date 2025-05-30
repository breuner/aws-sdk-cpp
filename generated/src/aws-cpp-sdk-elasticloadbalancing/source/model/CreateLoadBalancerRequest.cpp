﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

Aws::String CreateLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLoadBalancer&";
  if(m_loadBalancerNameHasBeenSet)
  {
    ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_listenersHasBeenSet)
  {
    if (m_listeners.empty())
    {
      ss << "Listeners=&";
    }
    else
    {
      unsigned listenersCount = 1;
      for(auto& item : m_listeners)
      {
        item.OutputToStream(ss, "Listeners.member.", listenersCount, "");
        listenersCount++;
      }
    }
  }

  if(m_availabilityZonesHasBeenSet)
  {
    if (m_availabilityZones.empty())
    {
      ss << "AvailabilityZones=&";
    }
    else
    {
      unsigned availabilityZonesCount = 1;
      for(auto& item : m_availabilityZones)
      {
        ss << "AvailabilityZones.member." << availabilityZonesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZonesCount++;
      }
    }
  }

  if(m_subnetsHasBeenSet)
  {
    if (m_subnets.empty())
    {
      ss << "Subnets=&";
    }
    else
    {
      unsigned subnetsCount = 1;
      for(auto& item : m_subnets)
      {
        ss << "Subnets.member." << subnetsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        subnetsCount++;
      }
    }
  }

  if(m_securityGroupsHasBeenSet)
  {
    if (m_securityGroups.empty())
    {
      ss << "SecurityGroups=&";
    }
    else
    {
      unsigned securityGroupsCount = 1;
      for(auto& item : m_securityGroups)
      {
        ss << "SecurityGroups.member." << securityGroupsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        securityGroupsCount++;
      }
    }
  }

  if(m_schemeHasBeenSet)
  {
    ss << "Scheme=" << StringUtils::URLEncode(m_scheme.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  CreateLoadBalancerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
