﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RestoreDBClusterFromS3Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RestoreDBClusterFromS3Result::RestoreDBClusterFromS3Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RestoreDBClusterFromS3Result& RestoreDBClusterFromS3Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RestoreDBClusterFromS3Result"))
  {
    resultNode = rootNode.FirstChild("RestoreDBClusterFromS3Result");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterNode = resultNode.FirstChild("DBCluster");
    if(!dBClusterNode.IsNull())
    {
      m_dBCluster = dBClusterNode;
      m_dBClusterHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::RestoreDBClusterFromS3Result", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
