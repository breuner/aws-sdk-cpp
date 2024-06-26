﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/MetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a projected utilization metric of a recommendation option, such as
   * an Amazon EC2 instance. This represents the projected utilization of a
   * recommendation option had you used that resource during the analyzed period.</p>
   * <p>Compare the utilization metric data of your resource against its projected
   * utilization metric data to determine the performance difference between your
   * current resource and the recommended option.</p>  <p>The <code>Cpu</code>,
   * <code>Memory</code>, <code>GPU</code>, and <code>GPU_MEMORY</code> metrics are
   * the only projected utilization metrics returned when you run the
   * <a>GetEC2RecommendationProjectedMetrics</a> action. Additionally, these metrics
   * are only returned for resources with the unified CloudWatch agent installed on
   * them. For more information, see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
   * Memory Utilization with the CloudWatch Agent</a> and <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#nvidia-cw-agent">Enabling
   * NVIDIA GPU utilization with the CloudWatch Agent</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ProjectedMetric">AWS
   * API Reference</a></p>
   */
  class ProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ProjectedMetric();
    AWS_COMPUTEOPTIMIZER_API ProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the projected utilization metric.</p> <p>The following projected
     * utilization metrics are returned:</p> <ul> <li> <p> <code>Cpu</code> - The
     * projected percentage of allocated EC2 compute units that would be in use on the
     * recommendation option had you used that resource during the analyzed period.
     * This metric identifies the processing power required to run an application on
     * the recommendation option.</p> <p>Depending on the instance type, tools in your
     * operating system can show a lower percentage than CloudWatch when the instance
     * is not allocated a full processor core.</p> </li> <li> <p> <code>Memory</code> -
     * The percentage of memory that would be in use on the recommendation option had
     * you used that resource during the analyzed period. This metric identifies the
     * amount of memory required to run an application on the recommendation
     * option.</p> <p>Units: Percent</p>  <p>The <code>Memory</code> metric is
     * only returned for resources with the unified CloudWatch agent installed on them.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p>  </li> <li> <p>
     * <code>GPU</code> - The projected percentage of allocated GPUs if you adjust your
     * configurations to Compute Optimizer's recommendation option.</p> </li> <li> <p>
     * <code>GPU_MEMORY</code> - The projected percentage of total GPU memory if you
     * adjust your configurations to Compute Optimizer's recommendation option.</p>
     *  <p>The <code>GPU</code> and <code>GPU_MEMORY</code> metrics are only
     * returned for resources with the unified CloudWatch Agent installed on them. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#nvidia-cw-agent">Enabling
     * NVIDIA GPU utilization with the CloudWatch Agent</a>.</p>  </li> </ul>
     */
    inline const MetricName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const MetricName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(MetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ProjectedMetric& WithName(const MetricName& value) { SetName(value); return *this;}
    inline ProjectedMetric& WithName(MetricName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamps of the projected utilization metric.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }
    inline ProjectedMetric& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}
    inline ProjectedMetric& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}
    inline ProjectedMetric& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }
    inline ProjectedMetric& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ProjectedMetric& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}
    inline ProjectedMetric& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}
    inline ProjectedMetric& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    MetricName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
