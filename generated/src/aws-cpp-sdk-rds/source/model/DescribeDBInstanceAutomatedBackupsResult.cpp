﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBInstanceAutomatedBackupsResult.h>
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

DescribeDBInstanceAutomatedBackupsResult::DescribeDBInstanceAutomatedBackupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBInstanceAutomatedBackupsResult& DescribeDBInstanceAutomatedBackupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBInstanceAutomatedBackupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBInstanceAutomatedBackupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode dBInstanceAutomatedBackupsNode = resultNode.FirstChild("DBInstanceAutomatedBackups");
    if(!dBInstanceAutomatedBackupsNode.IsNull())
    {
      XmlNode dBInstanceAutomatedBackupsMember = dBInstanceAutomatedBackupsNode.FirstChild("DBInstanceAutomatedBackup");
      m_dBInstanceAutomatedBackupsHasBeenSet = !dBInstanceAutomatedBackupsMember.IsNull();
      while(!dBInstanceAutomatedBackupsMember.IsNull())
      {
        m_dBInstanceAutomatedBackups.push_back(dBInstanceAutomatedBackupsMember);
        dBInstanceAutomatedBackupsMember = dBInstanceAutomatedBackupsMember.NextNode("DBInstanceAutomatedBackup");
      }

      m_dBInstanceAutomatedBackupsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBInstanceAutomatedBackupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
