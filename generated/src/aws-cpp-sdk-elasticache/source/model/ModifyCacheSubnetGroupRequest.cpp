﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyCacheSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String ModifyCacheSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCacheSubnetGroup&";
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
    ss << "CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  if(m_cacheSubnetGroupDescriptionHasBeenSet)
  {
    ss << "CacheSubnetGroupDescription=" << StringUtils::URLEncode(m_cacheSubnetGroupDescription.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
    if (m_subnetIds.empty())
    {
      ss << "SubnetIds=&";
    }
    else
    {
      unsigned subnetIdsCount = 1;
      for(auto& item : m_subnetIds)
      {
        ss << "SubnetIds.SubnetIdentifier." << subnetIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        subnetIdsCount++;
      }
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyCacheSubnetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
