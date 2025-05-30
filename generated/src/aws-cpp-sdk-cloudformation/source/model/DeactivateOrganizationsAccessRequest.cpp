﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeactivateOrganizationsAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String DeactivateOrganizationsAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeactivateOrganizationsAccess&";
  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeactivateOrganizationsAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
