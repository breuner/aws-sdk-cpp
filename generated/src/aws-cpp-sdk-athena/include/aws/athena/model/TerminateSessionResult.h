﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TerminateSessionResult
  {
  public:
    AWS_ATHENA_API TerminateSessionResult() = default;
    AWS_ATHENA_API TerminateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API TerminateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline SessionState GetState() const { return m_state; }
    inline void SetState(SessionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TerminateSessionResult& WithState(SessionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TerminateSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SessionState m_state{SessionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
