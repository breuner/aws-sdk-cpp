﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ListMetricsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListMetricsResult::ListMetricsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListMetricsResult& ListMetricsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListMetricsResult"))
  {
    resultNode = rootNode.FirstChild("ListMetricsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metricsNode = resultNode.FirstChild("Metrics");
    if(!metricsNode.IsNull())
    {
      XmlNode metricsMember = metricsNode.FirstChild("member");
      m_metricsHasBeenSet = !metricsMember.IsNull();
      while(!metricsMember.IsNull())
      {
        m_metrics.push_back(metricsMember);
        metricsMember = metricsMember.NextNode("member");
      }

      m_metricsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode owningAccountsNode = resultNode.FirstChild("OwningAccounts");
    if(!owningAccountsNode.IsNull())
    {
      XmlNode owningAccountsMember = owningAccountsNode.FirstChild("member");
      m_owningAccountsHasBeenSet = !owningAccountsMember.IsNull();
      while(!owningAccountsMember.IsNull())
      {
        m_owningAccounts.push_back(owningAccountsMember.GetText());
        owningAccountsMember = owningAccountsMember.NextNode("member");
      }

      m_owningAccountsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::ListMetricsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
