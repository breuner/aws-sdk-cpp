﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBClusterSnapshotAttributesResult::DescribeDBClusterSnapshotAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBClusterSnapshotAttributesResult& DescribeDBClusterSnapshotAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBClusterSnapshotAttributesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBClusterSnapshotAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterSnapshotAttributesResultNode = resultNode.FirstChild("DBClusterSnapshotAttributesResult");
    if(!dBClusterSnapshotAttributesResultNode.IsNull())
    {
      m_dBClusterSnapshotAttributesResult = dBClusterSnapshotAttributesResultNode;
      m_dBClusterSnapshotAttributesResultHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::DescribeDBClusterSnapshotAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
