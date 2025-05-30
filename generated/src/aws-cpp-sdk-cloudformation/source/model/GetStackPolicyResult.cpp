﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetStackPolicyResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetStackPolicyResult::GetStackPolicyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetStackPolicyResult& GetStackPolicyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetStackPolicyResult"))
  {
    resultNode = rootNode.FirstChild("GetStackPolicyResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackPolicyBodyNode = resultNode.FirstChild("StackPolicyBody");
    if(!stackPolicyBodyNode.IsNull())
    {
      m_stackPolicyBody = Aws::Utils::Xml::DecodeEscapedXmlText(stackPolicyBodyNode.GetText());
      m_stackPolicyBodyHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetStackPolicyResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
