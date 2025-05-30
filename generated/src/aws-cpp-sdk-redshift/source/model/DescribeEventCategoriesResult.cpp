﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEventCategoriesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventCategoriesResult::DescribeEventCategoriesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeEventCategoriesResult& DescribeEventCategoriesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEventCategoriesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEventCategoriesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode eventCategoriesMapListNode = resultNode.FirstChild("EventCategoriesMapList");
    if(!eventCategoriesMapListNode.IsNull())
    {
      XmlNode eventCategoriesMapListMember = eventCategoriesMapListNode.FirstChild("EventCategoriesMap");
      m_eventCategoriesMapListHasBeenSet = !eventCategoriesMapListMember.IsNull();
      while(!eventCategoriesMapListMember.IsNull())
      {
        m_eventCategoriesMapList.push_back(eventCategoriesMapListMember);
        eventCategoriesMapListMember = eventCategoriesMapListMember.NextNode("EventCategoriesMap");
      }

      m_eventCategoriesMapListHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeEventCategoriesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
