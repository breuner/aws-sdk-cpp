﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>For a campaign, specifies limits on the messages that the campaign can send.
   * For an application, specifies the default limits for messages that campaigns in
   * the application can send.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignLimits">AWS
   * API Reference</a></p>
   */
  class CampaignLimits
  {
  public:
    AWS_PINPOINT_API CampaignLimits() = default;
    AWS_PINPOINT_API CampaignLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during a 24-hour period. For an application, this value specifies the default
     * limit for the number of messages that campaigns and journeys can send to a
     * single endpoint during a 24-hour period. The maximum value is 100.</p>
     */
    inline int GetDaily() const { return m_daily; }
    inline bool DailyHasBeenSet() const { return m_dailyHasBeenSet; }
    inline void SetDaily(int value) { m_dailyHasBeenSet = true; m_daily = value; }
    inline CampaignLimits& WithDaily(int value) { SetDaily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that a campaign can attempt to
     * deliver a message after the scheduled start time for the campaign. The minimum
     * value is 60 seconds.</p>
     */
    inline int GetMaximumDuration() const { return m_maximumDuration; }
    inline bool MaximumDurationHasBeenSet() const { return m_maximumDurationHasBeenSet; }
    inline void SetMaximumDuration(int value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = value; }
    inline CampaignLimits& WithMaximumDuration(int value) { SetMaximumDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of messages that a campaign can send each second. For an
     * application, this value specifies the default limit for the number of messages
     * that campaigns can send each second. The minimum value is 1. The maximum value
     * is 20,000.</p>
     */
    inline int GetMessagesPerSecond() const { return m_messagesPerSecond; }
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }
    inline CampaignLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of messages that a campaign can send to a single endpoint
     * during the course of the campaign. If a campaign recurs, this setting applies to
     * all runs of the campaign. The maximum value is 100.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline CampaignLimits& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum total number of messages that the campaign can send per user
     * session.</p>
     */
    inline int GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(int value) { m_sessionHasBeenSet = true; m_session = value; }
    inline CampaignLimits& WithSession(int value) { SetSession(value); return *this;}
    ///@}
  private:

    int m_daily{0};
    bool m_dailyHasBeenSet = false;

    int m_maximumDuration{0};
    bool m_maximumDurationHasBeenSet = false;

    int m_messagesPerSecond{0};
    bool m_messagesPerSecondHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;

    int m_session{0};
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
