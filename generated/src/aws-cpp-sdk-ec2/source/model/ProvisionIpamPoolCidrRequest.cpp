﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionIpamPoolCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ProvisionIpamPoolCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ProvisionIpamPoolCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_cidrAuthorizationContextHasBeenSet)
  {
    m_cidrAuthorizationContext.OutputToStream(ss, "CidrAuthorizationContext");
  }

  if(m_netmaskLengthHasBeenSet)
  {
    ss << "NetmaskLength=" << m_netmaskLength << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_verificationMethodHasBeenSet)
  {
    ss << "VerificationMethod=" << StringUtils::URLEncode(VerificationMethodMapper::GetNameForVerificationMethod(m_verificationMethod)) << "&";
  }

  if(m_ipamExternalResourceVerificationTokenIdHasBeenSet)
  {
    ss << "IpamExternalResourceVerificationTokenId=" << StringUtils::URLEncode(m_ipamExternalResourceVerificationTokenId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ProvisionIpamPoolCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
