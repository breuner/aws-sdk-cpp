﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateEventSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateEventSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateEventSubscription&";
  if(m_subscriptionNameHasBeenSet)
  {
    ss << "SubscriptionName=" << StringUtils::URLEncode(m_subscriptionName.c_str()) << "&";
  }

  if(m_snsTopicArnHasBeenSet)
  {
    ss << "SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
    if (m_eventCategories.empty())
    {
      ss << "EventCategories=&";
    }
    else
    {
      unsigned eventCategoriesCount = 1;
      for(auto& item : m_eventCategories)
      {
        ss << "EventCategories.EventCategory." << eventCategoriesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        eventCategoriesCount++;
      }
    }
  }

  if(m_sourceIdsHasBeenSet)
  {
    if (m_sourceIds.empty())
    {
      ss << "SourceIds=&";
    }
    else
    {
      unsigned sourceIdsCount = 1;
      for(auto& item : m_sourceIds)
      {
        ss << "SourceIds.SourceId." << sourceIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        sourceIdsCount++;
      }
    }
  }

  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateEventSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
