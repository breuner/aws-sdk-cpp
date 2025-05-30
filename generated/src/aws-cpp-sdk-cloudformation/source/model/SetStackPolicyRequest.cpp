﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/SetStackPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String SetStackPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetStackPolicy&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_stackPolicyBodyHasBeenSet)
  {
    ss << "StackPolicyBody=" << StringUtils::URLEncode(m_stackPolicyBody.c_str()) << "&";
  }

  if(m_stackPolicyURLHasBeenSet)
  {
    ss << "StackPolicyURL=" << StringUtils::URLEncode(m_stackPolicyURL.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  SetStackPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
