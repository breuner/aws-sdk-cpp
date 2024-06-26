﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateComplianceByConformancePack.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeAggregateComplianceByConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult();
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline const Aws::Vector<AggregateComplianceByConformancePack>& GetAggregateComplianceByConformancePacks() const{ return m_aggregateComplianceByConformancePacks; }
    inline void SetAggregateComplianceByConformancePacks(const Aws::Vector<AggregateComplianceByConformancePack>& value) { m_aggregateComplianceByConformancePacks = value; }
    inline void SetAggregateComplianceByConformancePacks(Aws::Vector<AggregateComplianceByConformancePack>&& value) { m_aggregateComplianceByConformancePacks = std::move(value); }
    inline DescribeAggregateComplianceByConformancePacksResult& WithAggregateComplianceByConformancePacks(const Aws::Vector<AggregateComplianceByConformancePack>& value) { SetAggregateComplianceByConformancePacks(value); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& WithAggregateComplianceByConformancePacks(Aws::Vector<AggregateComplianceByConformancePack>&& value) { SetAggregateComplianceByConformancePacks(std::move(value)); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& AddAggregateComplianceByConformancePacks(const AggregateComplianceByConformancePack& value) { m_aggregateComplianceByConformancePacks.push_back(value); return *this; }
    inline DescribeAggregateComplianceByConformancePacksResult& AddAggregateComplianceByConformancePacks(AggregateComplianceByConformancePack&& value) { m_aggregateComplianceByConformancePacks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAggregateComplianceByConformancePacksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAggregateComplianceByConformancePacksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateComplianceByConformancePack> m_aggregateComplianceByConformancePacks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
