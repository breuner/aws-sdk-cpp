﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class ListApplicationSnapshotsResult
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult();
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects containing information about the application
     * snapshots.</p>
     */
    inline const Aws::Vector<SnapshotDetails>& GetSnapshotSummaries() const{ return m_snapshotSummaries; }
    inline void SetSnapshotSummaries(const Aws::Vector<SnapshotDetails>& value) { m_snapshotSummaries = value; }
    inline void SetSnapshotSummaries(Aws::Vector<SnapshotDetails>&& value) { m_snapshotSummaries = std::move(value); }
    inline ListApplicationSnapshotsResult& WithSnapshotSummaries(const Aws::Vector<SnapshotDetails>& value) { SetSnapshotSummaries(value); return *this;}
    inline ListApplicationSnapshotsResult& WithSnapshotSummaries(Aws::Vector<SnapshotDetails>&& value) { SetSnapshotSummaries(std::move(value)); return *this;}
    inline ListApplicationSnapshotsResult& AddSnapshotSummaries(const SnapshotDetails& value) { m_snapshotSummaries.push_back(value); return *this; }
    inline ListApplicationSnapshotsResult& AddSnapshotSummaries(SnapshotDetails&& value) { m_snapshotSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotDetails> m_snapshotSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
