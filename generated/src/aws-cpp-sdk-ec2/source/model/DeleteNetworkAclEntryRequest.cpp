﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteNetworkAclEntryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkAclEntry&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_networkAclIdHasBeenSet)
  {
    ss << "NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
    ss << "RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_egressHasBeenSet)
  {
    ss << "Egress=" << std::boolalpha << m_egress << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteNetworkAclEntryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
