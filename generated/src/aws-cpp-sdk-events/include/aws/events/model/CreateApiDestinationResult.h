﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ApiDestinationState.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class CreateApiDestinationResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateApiDestinationResult() = default;
    AWS_CLOUDWATCHEVENTS_API CreateApiDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API CreateApiDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the API destination that was created by the request.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const { return m_apiDestinationArn; }
    template<typename ApiDestinationArnT = Aws::String>
    void SetApiDestinationArn(ApiDestinationArnT&& value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn = std::forward<ApiDestinationArnT>(value); }
    template<typename ApiDestinationArnT = Aws::String>
    CreateApiDestinationResult& WithApiDestinationArn(ApiDestinationArnT&& value) { SetApiDestinationArn(std::forward<ApiDestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the API destination that was created by the request.</p>
     */
    inline ApiDestinationState GetApiDestinationState() const { return m_apiDestinationState; }
    inline void SetApiDestinationState(ApiDestinationState value) { m_apiDestinationStateHasBeenSet = true; m_apiDestinationState = value; }
    inline CreateApiDestinationResult& WithApiDestinationState(ApiDestinationState value) { SetApiDestinationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateApiDestinationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating the time that the API destination was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CreateApiDestinationResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApiDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiDestinationArn;
    bool m_apiDestinationArnHasBeenSet = false;

    ApiDestinationState m_apiDestinationState{ApiDestinationState::NOT_SET};
    bool m_apiDestinationStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
