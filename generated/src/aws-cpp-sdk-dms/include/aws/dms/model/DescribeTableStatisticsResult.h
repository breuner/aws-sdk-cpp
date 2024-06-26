﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/TableStatistics.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeTableStatisticsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTableStatisticsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeTableStatisticsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeTableStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeTableStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArn = value; }
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArn = std::move(value); }
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArn.assign(value); }
    inline DescribeTableStatisticsResult& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}
    inline DescribeTableStatisticsResult& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}
    inline DescribeTableStatisticsResult& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table statistics.</p>
     */
    inline const Aws::Vector<TableStatistics>& GetTableStatistics() const{ return m_tableStatistics; }
    inline void SetTableStatistics(const Aws::Vector<TableStatistics>& value) { m_tableStatistics = value; }
    inline void SetTableStatistics(Aws::Vector<TableStatistics>&& value) { m_tableStatistics = std::move(value); }
    inline DescribeTableStatisticsResult& WithTableStatistics(const Aws::Vector<TableStatistics>& value) { SetTableStatistics(value); return *this;}
    inline DescribeTableStatisticsResult& WithTableStatistics(Aws::Vector<TableStatistics>&& value) { SetTableStatistics(std::move(value)); return *this;}
    inline DescribeTableStatisticsResult& AddTableStatistics(const TableStatistics& value) { m_tableStatistics.push_back(value); return *this; }
    inline DescribeTableStatisticsResult& AddTableStatistics(TableStatistics&& value) { m_tableStatistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeTableStatisticsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeTableStatisticsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeTableStatisticsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTableStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTableStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTableStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskArn;

    Aws::Vector<TableStatistics> m_tableStatistics;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
