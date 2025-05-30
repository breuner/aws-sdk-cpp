﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyPrivateDnsNameOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyPrivateDnsNameOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyPrivateDnsNameOptions&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_privateDnsHostnameTypeHasBeenSet)
  {
    ss << "PrivateDnsHostnameType=" << StringUtils::URLEncode(HostnameTypeMapper::GetNameForHostnameType(m_privateDnsHostnameType)) << "&";
  }

  if(m_enableResourceNameDnsARecordHasBeenSet)
  {
    ss << "EnableResourceNameDnsARecord=" << std::boolalpha << m_enableResourceNameDnsARecord << "&";
  }

  if(m_enableResourceNameDnsAAAARecordHasBeenSet)
  {
    ss << "EnableResourceNameDnsAAAARecord=" << std::boolalpha << m_enableResourceNameDnsAAAARecord << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyPrivateDnsNameOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
