﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/UpdateTagsForResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

Aws::String UpdateTagsForResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateTagsForResource&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_tagsToAddHasBeenSet)
  {
    if (m_tagsToAdd.empty())
    {
      ss << "TagsToAdd=&";
    }
    else
    {
      unsigned tagsToAddCount = 1;
      for(auto& item : m_tagsToAdd)
      {
        item.OutputToStream(ss, "TagsToAdd.member.", tagsToAddCount, "");
        tagsToAddCount++;
      }
    }
  }

  if(m_tagsToRemoveHasBeenSet)
  {
    if (m_tagsToRemove.empty())
    {
      ss << "TagsToRemove=&";
    }
    else
    {
      unsigned tagsToRemoveCount = 1;
      for(auto& item : m_tagsToRemove)
      {
        ss << "TagsToRemove.member." << tagsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagsToRemoveCount++;
      }
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateTagsForResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
