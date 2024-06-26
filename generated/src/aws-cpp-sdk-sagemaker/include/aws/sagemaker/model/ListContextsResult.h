﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListContextsResult
  {
  public:
    AWS_SAGEMAKER_API ListContextsResult();
    AWS_SAGEMAKER_API ListContextsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListContextsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of contexts and their properties.</p>
     */
    inline const Aws::Vector<ContextSummary>& GetContextSummaries() const{ return m_contextSummaries; }
    inline void SetContextSummaries(const Aws::Vector<ContextSummary>& value) { m_contextSummaries = value; }
    inline void SetContextSummaries(Aws::Vector<ContextSummary>&& value) { m_contextSummaries = std::move(value); }
    inline ListContextsResult& WithContextSummaries(const Aws::Vector<ContextSummary>& value) { SetContextSummaries(value); return *this;}
    inline ListContextsResult& WithContextSummaries(Aws::Vector<ContextSummary>&& value) { SetContextSummaries(std::move(value)); return *this;}
    inline ListContextsResult& AddContextSummaries(const ContextSummary& value) { m_contextSummaries.push_back(value); return *this; }
    inline ListContextsResult& AddContextSummaries(ContextSummary&& value) { m_contextSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of contexts, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListContextsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContextsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContextsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContextsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContextsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContextsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContextSummary> m_contextSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
