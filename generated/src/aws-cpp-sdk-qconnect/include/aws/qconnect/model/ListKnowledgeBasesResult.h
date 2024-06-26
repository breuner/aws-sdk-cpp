﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/KnowledgeBaseSummary.h>
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
namespace QConnect
{
namespace Model
{
  class ListKnowledgeBasesResult
  {
  public:
    AWS_QCONNECT_API ListKnowledgeBasesResult();
    AWS_QCONNECT_API ListKnowledgeBasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListKnowledgeBasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline const Aws::Vector<KnowledgeBaseSummary>& GetKnowledgeBaseSummaries() const{ return m_knowledgeBaseSummaries; }
    inline void SetKnowledgeBaseSummaries(const Aws::Vector<KnowledgeBaseSummary>& value) { m_knowledgeBaseSummaries = value; }
    inline void SetKnowledgeBaseSummaries(Aws::Vector<KnowledgeBaseSummary>&& value) { m_knowledgeBaseSummaries = std::move(value); }
    inline ListKnowledgeBasesResult& WithKnowledgeBaseSummaries(const Aws::Vector<KnowledgeBaseSummary>& value) { SetKnowledgeBaseSummaries(value); return *this;}
    inline ListKnowledgeBasesResult& WithKnowledgeBaseSummaries(Aws::Vector<KnowledgeBaseSummary>&& value) { SetKnowledgeBaseSummaries(std::move(value)); return *this;}
    inline ListKnowledgeBasesResult& AddKnowledgeBaseSummaries(const KnowledgeBaseSummary& value) { m_knowledgeBaseSummaries.push_back(value); return *this; }
    inline ListKnowledgeBasesResult& AddKnowledgeBaseSummaries(KnowledgeBaseSummary&& value) { m_knowledgeBaseSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListKnowledgeBasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListKnowledgeBasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListKnowledgeBasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListKnowledgeBasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListKnowledgeBasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListKnowledgeBasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseSummary> m_knowledgeBaseSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
