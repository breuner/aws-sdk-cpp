﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/DBClusterParameterGroup.h>
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
namespace Neptune
{
namespace Model
{
  class DescribeDBClusterParameterGroupsResult
  {
  public:
    AWS_NEPTUNE_API DescribeDBClusterParameterGroupsResult() = default;
    AWS_NEPTUNE_API DescribeDBClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeDBClusterParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBClusterParameterGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline const Aws::Vector<DBClusterParameterGroup>& GetDBClusterParameterGroups() const { return m_dBClusterParameterGroups; }
    template<typename DBClusterParameterGroupsT = Aws::Vector<DBClusterParameterGroup>>
    void SetDBClusterParameterGroups(DBClusterParameterGroupsT&& value) { m_dBClusterParameterGroupsHasBeenSet = true; m_dBClusterParameterGroups = std::forward<DBClusterParameterGroupsT>(value); }
    template<typename DBClusterParameterGroupsT = Aws::Vector<DBClusterParameterGroup>>
    DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(DBClusterParameterGroupsT&& value) { SetDBClusterParameterGroups(std::forward<DBClusterParameterGroupsT>(value)); return *this;}
    template<typename DBClusterParameterGroupsT = DBClusterParameterGroup>
    DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(DBClusterParameterGroupsT&& value) { m_dBClusterParameterGroupsHasBeenSet = true; m_dBClusterParameterGroups.emplace_back(std::forward<DBClusterParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBClusterParameterGroup> m_dBClusterParameterGroups;
    bool m_dBClusterParameterGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
