﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateFpgaImageResponse.h>
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

CreateFpgaImageResponse::CreateFpgaImageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateFpgaImageResponse& CreateFpgaImageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateFpgaImageResponse"))
  {
    resultNode = rootNode.FirstChild("CreateFpgaImageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode fpgaImageIdNode = resultNode.FirstChild("fpgaImageId");
    if(!fpgaImageIdNode.IsNull())
    {
      m_fpgaImageId = Aws::Utils::Xml::DecodeEscapedXmlText(fpgaImageIdNode.GetText());
      m_fpgaImageIdHasBeenSet = true;
    }
    XmlNode fpgaImageGlobalIdNode = resultNode.FirstChild("fpgaImageGlobalId");
    if(!fpgaImageGlobalIdNode.IsNull())
    {
      m_fpgaImageGlobalId = Aws::Utils::Xml::DecodeEscapedXmlText(fpgaImageGlobalIdNode.GetText());
      m_fpgaImageGlobalIdHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateFpgaImageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
