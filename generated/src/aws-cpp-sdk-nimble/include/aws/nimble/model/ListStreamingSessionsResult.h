﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamingSession.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListStreamingSessionsResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStreamingSessionsResult();
    AWS_NIMBLESTUDIO_API ListStreamingSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStreamingSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStreamingSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamingSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamingSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of streaming sessions.</p>
     */
    inline const Aws::Vector<StreamingSession>& GetSessions() const{ return m_sessions; }
    inline void SetSessions(const Aws::Vector<StreamingSession>& value) { m_sessions = value; }
    inline void SetSessions(Aws::Vector<StreamingSession>&& value) { m_sessions = std::move(value); }
    inline ListStreamingSessionsResult& WithSessions(const Aws::Vector<StreamingSession>& value) { SetSessions(value); return *this;}
    inline ListStreamingSessionsResult& WithSessions(Aws::Vector<StreamingSession>&& value) { SetSessions(std::move(value)); return *this;}
    inline ListStreamingSessionsResult& AddSessions(const StreamingSession& value) { m_sessions.push_back(value); return *this; }
    inline ListStreamingSessionsResult& AddSessions(StreamingSession&& value) { m_sessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamingSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamingSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamingSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<StreamingSession> m_sessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
