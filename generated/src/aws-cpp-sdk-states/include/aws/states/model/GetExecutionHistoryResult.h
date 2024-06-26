﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEvent.h>
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
namespace SFN
{
namespace Model
{
  class GetExecutionHistoryResult
  {
  public:
    AWS_SFN_API GetExecutionHistoryResult();
    AWS_SFN_API GetExecutionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API GetExecutionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of events that occurred in the execution.</p>
     */
    inline const Aws::Vector<HistoryEvent>& GetEvents() const{ return m_events; }
    inline void SetEvents(const Aws::Vector<HistoryEvent>& value) { m_events = value; }
    inline void SetEvents(Aws::Vector<HistoryEvent>&& value) { m_events = std::move(value); }
    inline GetExecutionHistoryResult& WithEvents(const Aws::Vector<HistoryEvent>& value) { SetEvents(value); return *this;}
    inline GetExecutionHistoryResult& WithEvents(Aws::Vector<HistoryEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline GetExecutionHistoryResult& AddEvents(const HistoryEvent& value) { m_events.push_back(value); return *this; }
    inline GetExecutionHistoryResult& AddEvents(HistoryEvent&& value) { m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetExecutionHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetExecutionHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetExecutionHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExecutionHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExecutionHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExecutionHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HistoryEvent> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
