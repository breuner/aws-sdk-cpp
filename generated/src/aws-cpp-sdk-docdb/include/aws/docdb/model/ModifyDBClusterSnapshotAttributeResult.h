﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DBClusterSnapshotAttributesResult.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{
  class ModifyDBClusterSnapshotAttributeResult
  {
  public:
    AWS_DOCDB_API ModifyDBClusterSnapshotAttributeResult();
    AWS_DOCDB_API ModifyDBClusterSnapshotAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API ModifyDBClusterSnapshotAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterSnapshotAttributesResult& GetDBClusterSnapshotAttributesResult() const{ return m_dBClusterSnapshotAttributesResult; }
    inline void SetDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { m_dBClusterSnapshotAttributesResult = value; }
    inline void SetDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { m_dBClusterSnapshotAttributesResult = std::move(value); }
    inline ModifyDBClusterSnapshotAttributeResult& WithDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { SetDBClusterSnapshotAttributesResult(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeResult& WithDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { SetDBClusterSnapshotAttributesResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyDBClusterSnapshotAttributeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyDBClusterSnapshotAttributeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    DBClusterSnapshotAttributesResult m_dBClusterSnapshotAttributesResult;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
