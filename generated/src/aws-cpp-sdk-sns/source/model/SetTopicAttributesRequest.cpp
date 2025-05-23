﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

Aws::String SetTopicAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetTopicAttributes&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_attributeNameHasBeenSet)
  {
    ss << "AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValueHasBeenSet)
  {
    ss << "AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  SetTopicAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
