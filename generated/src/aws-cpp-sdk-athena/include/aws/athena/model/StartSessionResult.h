﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/SessionState.h>
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
  class StartSessionResult
  {
  public:
    AWS_ATHENA_API StartSessionResult();
    AWS_ATHENA_API StartSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API StartSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline StartSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StartSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StartSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline const SessionState& GetState() const{ return m_state; }
    inline void SetState(const SessionState& value) { m_state = value; }
    inline void SetState(SessionState&& value) { m_state = std::move(value); }
    inline StartSessionResult& WithState(const SessionState& value) { SetState(value); return *this;}
    inline StartSessionResult& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    SessionState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
