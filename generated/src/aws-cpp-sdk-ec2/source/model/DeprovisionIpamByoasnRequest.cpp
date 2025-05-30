﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeprovisionIpamByoasnRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeprovisionIpamByoasnRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeprovisionIpamByoasn&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
    ss << "IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_asnHasBeenSet)
  {
    ss << "Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeprovisionIpamByoasnRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
