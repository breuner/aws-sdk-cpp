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
   * <p>Specifies a retention rule for cross-Region snapshot copies created by
   * snapshot or event-based policies, or cross-Region AMI copies created by AMI
   * policies. After the retention period expires, the cross-Region copy is
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyRetainRule">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyRetainRule
  {
  public:
    AWS_DLM_API CrossRegionCopyRetainRule() = default;
    AWS_DLM_API CrossRegionCopyRetainRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyRetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time to retain a cross-Region snapshot or AMI copy. The maximum
     * is 100 years. This is equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline CrossRegionCopyRetainRule& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time for time-based retention. For example, to retain a
     * cross-Region copy for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline RetentionIntervalUnitValues GetIntervalUnit() const { return m_intervalUnit; }
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }
    inline void SetIntervalUnit(RetentionIntervalUnitValues value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }
    inline CrossRegionCopyRetainRule& WithIntervalUnit(RetentionIntervalUnitValues value) { SetIntervalUnit(value); return *this;}
    ///@}
  private:

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit{RetentionIntervalUnitValues::NOT_SET};
    bool m_intervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
