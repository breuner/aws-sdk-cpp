﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Custom AMI policies only]</b> Specifies an AMI deprecation rule for AMIs
   * created by an AMI lifecycle policy.</p> <p>For age-based schedules, you must
   * specify <b>Interval</b> and <b>IntervalUnit</b>. For count-based schedules, you
   * must specify <b>Count</b>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/DeprecateRule">AWS
   * API Reference</a></p>
   */
  class DeprecateRule
  {
  public:
    AWS_DLM_API DeprecateRule() = default;
    AWS_DLM_API DeprecateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API DeprecateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the schedule has a count-based retention rule, this parameter specifies
     * the number of oldest AMIs to deprecate. The count must be less than or equal to
     * the schedule's retention count, and it can't be greater than 1000.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline DeprecateRule& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the schedule has an age-based retention rule, this parameter specifies the
     * period after which to deprecate AMIs created by the schedule. The period must be
     * less than or equal to the schedule's retention period, and it can't be greater
     * than 10 years. This is equivalent to 120 months, 520 weeks, or 3650 days.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline DeprecateRule& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time in which to measure the <b>Interval</b>.</p>
     */
    inline RetentionIntervalUnitValues GetIntervalUnit() const { return m_intervalUnit; }
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }
    inline void SetIntervalUnit(RetentionIntervalUnitValues value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }
    inline DeprecateRule& WithIntervalUnit(RetentionIntervalUnitValues value) { SetIntervalUnit(value); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit{RetentionIntervalUnitValues::NOT_SET};
    bool m_intervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
