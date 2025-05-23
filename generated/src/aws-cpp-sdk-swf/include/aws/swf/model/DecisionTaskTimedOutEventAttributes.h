﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/DecisionTaskTimeoutType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>DecisionTaskTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class DecisionTaskTimedOutEventAttributes
  {
  public:
    AWS_SWF_API DecisionTaskTimedOutEventAttributes() = default;
    AWS_SWF_API DecisionTaskTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DecisionTaskTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of timeout that expired before the decision task could be
     * completed.</p>
     */
    inline DecisionTaskTimeoutType GetTimeoutType() const { return m_timeoutType; }
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }
    inline void SetTimeoutType(DecisionTaskTimeoutType value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }
    inline DecisionTaskTimedOutEventAttributes& WithTimeoutType(DecisionTaskTimeoutType value) { SetTimeoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const { return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline DecisionTaskTimedOutEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline DecisionTaskTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}
  private:

    DecisionTaskTimeoutType m_timeoutType{DecisionTaskTimeoutType::NOT_SET};
    bool m_timeoutTypeHasBeenSet = false;

    long long m_scheduledEventId{0};
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
