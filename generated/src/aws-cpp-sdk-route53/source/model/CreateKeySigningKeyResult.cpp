﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateKeySigningKeyResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateKeySigningKeyResult::CreateKeySigningKeyResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateKeySigningKeyResult& CreateKeySigningKeyResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode changeInfoNode = resultNode.FirstChild("ChangeInfo");
    if(!changeInfoNode.IsNull())
    {
      m_changeInfo = changeInfoNode;
      m_changeInfoHasBeenSet = true;
    }
    XmlNode keySigningKeyNode = resultNode.FirstChild("KeySigningKey");
    if(!keySigningKeyNode.IsNull())
    {
      m_keySigningKey = keySigningKeyNode;
      m_keySigningKeyHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
    m_locationHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
