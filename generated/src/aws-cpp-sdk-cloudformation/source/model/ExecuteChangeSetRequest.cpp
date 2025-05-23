﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ExecuteChangeSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ExecuteChangeSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ExecuteChangeSet&";
  if(m_changeSetNameHasBeenSet)
  {
    ss << "ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if(m_disableRollbackHasBeenSet)
  {
    ss << "DisableRollback=" << std::boolalpha << m_disableRollback << "&";
  }

  if(m_retainExceptOnCreateHasBeenSet)
  {
    ss << "RetainExceptOnCreate=" << std::boolalpha << m_retainExceptOnCreate << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ExecuteChangeSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
