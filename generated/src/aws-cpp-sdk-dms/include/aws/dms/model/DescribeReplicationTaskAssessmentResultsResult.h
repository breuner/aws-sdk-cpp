﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationTaskAssessmentResult.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResultsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationTaskAssessmentResultsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline void SetBucketName(const Aws::String& value) { m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketName.assign(value); }
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task assessment report. </p>
     */
    inline const Aws::Vector<ReplicationTaskAssessmentResult>& GetReplicationTaskAssessmentResults() const{ return m_replicationTaskAssessmentResults; }
    inline void SetReplicationTaskAssessmentResults(const Aws::Vector<ReplicationTaskAssessmentResult>& value) { m_replicationTaskAssessmentResults = value; }
    inline void SetReplicationTaskAssessmentResults(Aws::Vector<ReplicationTaskAssessmentResult>&& value) { m_replicationTaskAssessmentResults = std::move(value); }
    inline DescribeReplicationTaskAssessmentResultsResult& WithReplicationTaskAssessmentResults(const Aws::Vector<ReplicationTaskAssessmentResult>& value) { SetReplicationTaskAssessmentResults(value); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithReplicationTaskAssessmentResults(Aws::Vector<ReplicationTaskAssessmentResult>&& value) { SetReplicationTaskAssessmentResults(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& AddReplicationTaskAssessmentResults(const ReplicationTaskAssessmentResult& value) { m_replicationTaskAssessmentResults.push_back(value); return *this; }
    inline DescribeReplicationTaskAssessmentResultsResult& AddReplicationTaskAssessmentResults(ReplicationTaskAssessmentResult&& value) { m_replicationTaskAssessmentResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReplicationTaskAssessmentResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::String m_bucketName;

    Aws::Vector<ReplicationTaskAssessmentResult> m_replicationTaskAssessmentResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
