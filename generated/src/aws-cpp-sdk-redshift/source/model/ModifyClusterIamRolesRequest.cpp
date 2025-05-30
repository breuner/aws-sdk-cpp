﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifyClusterIamRolesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterIamRoles&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_addIamRolesHasBeenSet)
  {
    if (m_addIamRoles.empty())
    {
      ss << "AddIamRoles=&";
    }
    else
    {
      unsigned addIamRolesCount = 1;
      for(auto& item : m_addIamRoles)
      {
        ss << "AddIamRoles.IamRoleArn." << addIamRolesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        addIamRolesCount++;
      }
    }
  }

  if(m_removeIamRolesHasBeenSet)
  {
    if (m_removeIamRoles.empty())
    {
      ss << "RemoveIamRoles=&";
    }
    else
    {
      unsigned removeIamRolesCount = 1;
      for(auto& item : m_removeIamRoles)
      {
        ss << "RemoveIamRoles.IamRoleArn." << removeIamRolesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        removeIamRolesCount++;
      }
    }
  }

  if(m_defaultIamRoleArnHasBeenSet)
  {
    ss << "DefaultIamRoleArn=" << StringUtils::URLEncode(m_defaultIamRoleArn.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterIamRolesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
