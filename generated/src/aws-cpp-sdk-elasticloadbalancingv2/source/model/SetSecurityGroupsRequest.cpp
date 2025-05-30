﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetSecurityGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String SetSecurityGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetSecurityGroups&";
  if(m_loadBalancerArnHasBeenSet)
  {
    ss << "LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
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

  if(m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet)
  {
    ss << "EnforceSecurityGroupInboundRulesOnPrivateLinkTraffic=" << StringUtils::URLEncode(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnumMapper::GetNameForEnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum(m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic)) << "&";
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  SetSecurityGroupsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
