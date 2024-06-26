﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/QueryExecution.h>
#include <aws/athena/model/UnprocessedQueryExecutionId.h>
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
namespace Athena
{
namespace Model
{
  class BatchGetQueryExecutionResult
  {
  public:
    AWS_ATHENA_API BatchGetQueryExecutionResult();
    AWS_ATHENA_API BatchGetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a query execution.</p>
     */
    inline const Aws::Vector<QueryExecution>& GetQueryExecutions() const{ return m_queryExecutions; }
    inline void SetQueryExecutions(const Aws::Vector<QueryExecution>& value) { m_queryExecutions = value; }
    inline void SetQueryExecutions(Aws::Vector<QueryExecution>&& value) { m_queryExecutions = std::move(value); }
    inline BatchGetQueryExecutionResult& WithQueryExecutions(const Aws::Vector<QueryExecution>& value) { SetQueryExecutions(value); return *this;}
    inline BatchGetQueryExecutionResult& WithQueryExecutions(Aws::Vector<QueryExecution>&& value) { SetQueryExecutions(std::move(value)); return *this;}
    inline BatchGetQueryExecutionResult& AddQueryExecutions(const QueryExecution& value) { m_queryExecutions.push_back(value); return *this; }
    inline BatchGetQueryExecutionResult& AddQueryExecutions(QueryExecution&& value) { m_queryExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline const Aws::Vector<UnprocessedQueryExecutionId>& GetUnprocessedQueryExecutionIds() const{ return m_unprocessedQueryExecutionIds; }
    inline void SetUnprocessedQueryExecutionIds(const Aws::Vector<UnprocessedQueryExecutionId>& value) { m_unprocessedQueryExecutionIds = value; }
    inline void SetUnprocessedQueryExecutionIds(Aws::Vector<UnprocessedQueryExecutionId>&& value) { m_unprocessedQueryExecutionIds = std::move(value); }
    inline BatchGetQueryExecutionResult& WithUnprocessedQueryExecutionIds(const Aws::Vector<UnprocessedQueryExecutionId>& value) { SetUnprocessedQueryExecutionIds(value); return *this;}
    inline BatchGetQueryExecutionResult& WithUnprocessedQueryExecutionIds(Aws::Vector<UnprocessedQueryExecutionId>&& value) { SetUnprocessedQueryExecutionIds(std::move(value)); return *this;}
    inline BatchGetQueryExecutionResult& AddUnprocessedQueryExecutionIds(const UnprocessedQueryExecutionId& value) { m_unprocessedQueryExecutionIds.push_back(value); return *this; }
    inline BatchGetQueryExecutionResult& AddUnprocessedQueryExecutionIds(UnprocessedQueryExecutionId&& value) { m_unprocessedQueryExecutionIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetQueryExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetQueryExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetQueryExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<QueryExecution> m_queryExecutions;

    Aws::Vector<UnprocessedQueryExecutionId> m_unprocessedQueryExecutionIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
