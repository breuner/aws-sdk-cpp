﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class CreateEventBusResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult();
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArn = value; }
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArn = std::move(value); }
    inline void SetEventBusArn(const char* value) { m_eventBusArn.assign(value); }
    inline CreateEventBusResult& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}
    inline CreateEventBusResult& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}
    inline CreateEventBusResult& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEventBusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEventBusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEventBusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
