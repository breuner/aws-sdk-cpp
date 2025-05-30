﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

Aws::String DeleteDBClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBClusterSnapshot&";
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
