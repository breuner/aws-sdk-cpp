﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RemoveRoleFromDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String RemoveRoleFromDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveRoleFromDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_featureNameHasBeenSet)
  {
    ss << "FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RemoveRoleFromDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
