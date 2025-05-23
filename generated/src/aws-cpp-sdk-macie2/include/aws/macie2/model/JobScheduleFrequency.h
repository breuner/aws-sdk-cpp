﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/DailySchedule.h>
#include <aws/macie2/model/MonthlySchedule.h>
#include <aws/macie2/model/WeeklySchedule.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the recurrence pattern for running a classification
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobScheduleFrequency">AWS
   * API Reference</a></p>
   */
  class JobScheduleFrequency
  {
  public:
    AWS_MACIE2_API JobScheduleFrequency() = default;
    AWS_MACIE2_API JobScheduleFrequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobScheduleFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a daily recurrence pattern for running the job.</p>
     */
    inline const DailySchedule& GetDailySchedule() const { return m_dailySchedule; }
    inline bool DailyScheduleHasBeenSet() const { return m_dailyScheduleHasBeenSet; }
    template<typename DailyScheduleT = DailySchedule>
    void SetDailySchedule(DailyScheduleT&& value) { m_dailyScheduleHasBeenSet = true; m_dailySchedule = std::forward<DailyScheduleT>(value); }
    template<typename DailyScheduleT = DailySchedule>
    JobScheduleFrequency& WithDailySchedule(DailyScheduleT&& value) { SetDailySchedule(std::forward<DailyScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a monthly recurrence pattern for running the job.</p>
     */
    inline const MonthlySchedule& GetMonthlySchedule() const { return m_monthlySchedule; }
    inline bool MonthlyScheduleHasBeenSet() const { return m_monthlyScheduleHasBeenSet; }
    template<typename MonthlyScheduleT = MonthlySchedule>
    void SetMonthlySchedule(MonthlyScheduleT&& value) { m_monthlyScheduleHasBeenSet = true; m_monthlySchedule = std::forward<MonthlyScheduleT>(value); }
    template<typename MonthlyScheduleT = MonthlySchedule>
    JobScheduleFrequency& WithMonthlySchedule(MonthlyScheduleT&& value) { SetMonthlySchedule(std::forward<MonthlyScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a weekly recurrence pattern for running the job.</p>
     */
    inline const WeeklySchedule& GetWeeklySchedule() const { return m_weeklySchedule; }
    inline bool WeeklyScheduleHasBeenSet() const { return m_weeklyScheduleHasBeenSet; }
    template<typename WeeklyScheduleT = WeeklySchedule>
    void SetWeeklySchedule(WeeklyScheduleT&& value) { m_weeklyScheduleHasBeenSet = true; m_weeklySchedule = std::forward<WeeklyScheduleT>(value); }
    template<typename WeeklyScheduleT = WeeklySchedule>
    JobScheduleFrequency& WithWeeklySchedule(WeeklyScheduleT&& value) { SetWeeklySchedule(std::forward<WeeklyScheduleT>(value)); return *this;}
    ///@}
  private:

    DailySchedule m_dailySchedule;
    bool m_dailyScheduleHasBeenSet = false;

    MonthlySchedule m_monthlySchedule;
    bool m_monthlyScheduleHasBeenSet = false;

    WeeklySchedule m_weeklySchedule;
    bool m_weeklyScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
