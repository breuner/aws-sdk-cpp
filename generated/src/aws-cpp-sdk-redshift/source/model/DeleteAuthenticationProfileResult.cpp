﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteAuthenticationProfileResult.h>
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

DeleteAuthenticationProfileResult::DeleteAuthenticationProfileResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteAuthenticationProfileResult& DeleteAuthenticationProfileResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteAuthenticationProfileResult"))
  {
    resultNode = rootNode.FirstChild("DeleteAuthenticationProfileResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode authenticationProfileNameNode = resultNode.FirstChild("AuthenticationProfileName");
    if(!authenticationProfileNameNode.IsNull())
    {
      m_authenticationProfileName = Aws::Utils::Xml::DecodeEscapedXmlText(authenticationProfileNameNode.GetText());
      m_authenticationProfileNameHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DeleteAuthenticationProfileResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
