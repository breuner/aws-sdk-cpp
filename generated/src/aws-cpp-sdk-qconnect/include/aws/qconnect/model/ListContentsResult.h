﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentSummary.h>
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
  class ListContentsResult
  {
  public:
    AWS_QCONNECT_API ListContentsResult();
    AWS_QCONNECT_API ListContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the content.</p>
     */
    inline const Aws::Vector<ContentSummary>& GetContentSummaries() const{ return m_contentSummaries; }
    inline void SetContentSummaries(const Aws::Vector<ContentSummary>& value) { m_contentSummaries = value; }
    inline void SetContentSummaries(Aws::Vector<ContentSummary>&& value) { m_contentSummaries = std::move(value); }
    inline ListContentsResult& WithContentSummaries(const Aws::Vector<ContentSummary>& value) { SetContentSummaries(value); return *this;}
    inline ListContentsResult& WithContentSummaries(Aws::Vector<ContentSummary>&& value) { SetContentSummaries(std::move(value)); return *this;}
    inline ListContentsResult& AddContentSummaries(const ContentSummary& value) { m_contentSummaries.push_back(value); return *this; }
    inline ListContentsResult& AddContentSummaries(ContentSummary&& value) { m_contentSummaries.push_back(std::move(value)); return *this; }
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
    inline ListContentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContentSummary> m_contentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
