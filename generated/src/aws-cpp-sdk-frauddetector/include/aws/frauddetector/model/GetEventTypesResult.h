﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/EventType.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetEventTypesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventTypesResult() = default;
    AWS_FRAUDDETECTOR_API GetEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of event types.</p>
     */
    inline const Aws::Vector<EventType>& GetEventTypes() const { return m_eventTypes; }
    template<typename EventTypesT = Aws::Vector<EventType>>
    void SetEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes = std::forward<EventTypesT>(value); }
    template<typename EventTypesT = Aws::Vector<EventType>>
    GetEventTypesResult& WithEventTypes(EventTypesT&& value) { SetEventTypes(std::forward<EventTypesT>(value)); return *this;}
    template<typename EventTypesT = EventType>
    GetEventTypesResult& AddEventTypes(EventTypesT&& value) { m_eventTypesHasBeenSet = true; m_eventTypes.emplace_back(std::forward<EventTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEventTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventType> m_eventTypes;
    bool m_eventTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
