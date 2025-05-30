﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/ModifyDBClusterParameterGroupResult.h>
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

ModifyDBClusterParameterGroupResult::ModifyDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyDBClusterParameterGroupResult& ModifyDBClusterParameterGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyDBClusterParameterGroupResult"))
  {
    resultNode = rootNode.FirstChild("ModifyDBClusterParameterGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterParameterGroupNameNode = resultNode.FirstChild("DBClusterParameterGroupName");
    if(!dBClusterParameterGroupNameNode.IsNull())
    {
      m_dBClusterParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterParameterGroupNameNode.GetText());
      m_dBClusterParameterGroupNameHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::DocDB::Model::ModifyDBClusterParameterGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
