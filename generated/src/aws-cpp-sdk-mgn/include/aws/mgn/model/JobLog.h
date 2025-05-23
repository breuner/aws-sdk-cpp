﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/JobLogEvent.h>
#include <aws/mgn/model/JobLogEventData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Job log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/JobLog">AWS API
   * Reference</a></p>
   */
  class JobLog
  {
  public:
    AWS_MGN_API JobLog() = default;
    AWS_MGN_API JobLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API JobLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Job log event.</p>
     */
    inline JobLogEvent GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(JobLogEvent value) { m_eventHasBeenSet = true; m_event = value; }
    inline JobLog& WithEvent(JobLogEvent value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job event data</p>
     */
    inline const JobLogEventData& GetEventData() const { return m_eventData; }
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }
    template<typename EventDataT = JobLogEventData>
    void SetEventData(EventDataT&& value) { m_eventDataHasBeenSet = true; m_eventData = std::forward<EventDataT>(value); }
    template<typename EventDataT = JobLogEventData>
    JobLog& WithEventData(EventDataT&& value) { SetEventData(std::forward<EventDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job log event date and time.</p>
     */
    inline const Aws::String& GetLogDateTime() const { return m_logDateTime; }
    inline bool LogDateTimeHasBeenSet() const { return m_logDateTimeHasBeenSet; }
    template<typename LogDateTimeT = Aws::String>
    void SetLogDateTime(LogDateTimeT&& value) { m_logDateTimeHasBeenSet = true; m_logDateTime = std::forward<LogDateTimeT>(value); }
    template<typename LogDateTimeT = Aws::String>
    JobLog& WithLogDateTime(LogDateTimeT&& value) { SetLogDateTime(std::forward<LogDateTimeT>(value)); return *this;}
    ///@}
  private:

    JobLogEvent m_event{JobLogEvent::NOT_SET};
    bool m_eventHasBeenSet = false;

    JobLogEventData m_eventData;
    bool m_eventDataHasBeenSet = false;

    Aws::String m_logDateTime;
    bool m_logDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
