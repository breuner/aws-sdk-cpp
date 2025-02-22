﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetSnapshotBlockPublicAccessStateResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetSnapshotBlockPublicAccessStateResponse::GetSnapshotBlockPublicAccessStateResponse() : 
    m_state(SnapshotBlockPublicAccessState::NOT_SET),
    m_managedBy(ManagedBy::NOT_SET)
{
}

GetSnapshotBlockPublicAccessStateResponse::GetSnapshotBlockPublicAccessStateResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : GetSnapshotBlockPublicAccessStateResponse()
{
  *this = result;
}

GetSnapshotBlockPublicAccessStateResponse& GetSnapshotBlockPublicAccessStateResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSnapshotBlockPublicAccessStateResponse"))
  {
    resultNode = rootNode.FirstChild("GetSnapshotBlockPublicAccessStateResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SnapshotBlockPublicAccessStateMapper::GetSnapshotBlockPublicAccessStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetSnapshotBlockPublicAccessStateResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
