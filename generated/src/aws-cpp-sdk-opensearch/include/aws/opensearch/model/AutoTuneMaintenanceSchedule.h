﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/Duration.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   *  <p>This object is deprecated. Use the domain's <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/off-peak.html">off-peak
   * window</a> to schedule Auto-Tune optimizations. For migration instructions, see
   * <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/off-peak.html#off-peak-migrate">Migrating
   * from Auto-Tune maintenance windows</a>.</p>  <p>The Auto-Tune maintenance
   * schedule. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneMaintenanceSchedule">AWS
   * API Reference</a></p>
   */
  class AutoTuneMaintenanceSchedule
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule();
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Epoch timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAt() const{ return m_startAt; }
    inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }
    inline void SetStartAt(const Aws::Utils::DateTime& value) { m_startAtHasBeenSet = true; m_startAt = value; }
    inline void SetStartAt(Aws::Utils::DateTime&& value) { m_startAtHasBeenSet = true; m_startAt = std::move(value); }
    inline AutoTuneMaintenanceSchedule& WithStartAt(const Aws::Utils::DateTime& value) { SetStartAt(value); return *this;}
    inline AutoTuneMaintenanceSchedule& WithStartAt(Aws::Utils::DateTime&& value) { SetStartAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance schedule. For example, <code>"Duration":
     * {"Value": 2, "Unit": "HOURS"}</code>.</p>
     */
    inline const Duration& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Duration& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Duration&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline AutoTuneMaintenanceSchedule& WithDuration(const Duration& value) { SetDuration(value); return *this;}
    inline AutoTuneMaintenanceSchedule& WithDuration(Duration&& value) { SetDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cron expression for a recurring maintenance schedule during which Auto-Tune
     * can deploy changes.</p>
     */
    inline const Aws::String& GetCronExpressionForRecurrence() const{ return m_cronExpressionForRecurrence; }
    inline bool CronExpressionForRecurrenceHasBeenSet() const { return m_cronExpressionForRecurrenceHasBeenSet; }
    inline void SetCronExpressionForRecurrence(const Aws::String& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = value; }
    inline void SetCronExpressionForRecurrence(Aws::String&& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = std::move(value); }
    inline void SetCronExpressionForRecurrence(const char* value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence.assign(value); }
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const Aws::String& value) { SetCronExpressionForRecurrence(value); return *this;}
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(Aws::String&& value) { SetCronExpressionForRecurrence(std::move(value)); return *this;}
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const char* value) { SetCronExpressionForRecurrence(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startAt;
    bool m_startAtHasBeenSet = false;

    Duration m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_cronExpressionForRecurrence;
    bool m_cronExpressionForRecurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
