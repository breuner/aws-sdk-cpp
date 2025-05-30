﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/model/ScalingMetricType.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a predefined metric that can be used for dynamic scaling as part
   * of a target tracking scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/PredefinedScalingMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredefinedScalingMetricSpecification
  {
  public:
    AWS_AUTOSCALINGPLANS_API PredefinedScalingMetricSpecification() = default;
    AWS_AUTOSCALINGPLANS_API PredefinedScalingMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API PredefinedScalingMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric type. The <code>ALBRequestCountPerTarget</code> metric type
     * applies only to Auto Scaling groups, Spot Fleet requests, and ECS services.</p>
     */
    inline ScalingMetricType GetPredefinedScalingMetricType() const { return m_predefinedScalingMetricType; }
    inline bool PredefinedScalingMetricTypeHasBeenSet() const { return m_predefinedScalingMetricTypeHasBeenSet; }
    inline void SetPredefinedScalingMetricType(ScalingMetricType value) { m_predefinedScalingMetricTypeHasBeenSet = true; m_predefinedScalingMetricType = value; }
    inline PredefinedScalingMetricSpecification& WithPredefinedScalingMetricType(ScalingMetricType value) { SetPredefinedScalingMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resource associated with the metric type. You can't specify a
     * resource label unless the metric type is <code>ALBRequestCountPerTarget</code>
     * and there is a target group for an Application Load Balancer attached to the
     * Auto Scaling group, Spot Fleet request, or ECS service.</p> <p>You create the
     * resource label by appending the final portion of the load balancer ARN and the
     * final portion of the target group ARN into a single value, separated by a
     * forward slash (/). The format is
     * app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;/targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt;,
     * where:</p> <ul> <li> <p>app/&lt;load-balancer-name&gt;/&lt;load-balancer-id&gt;
     * is the final portion of the load balancer ARN</p> </li> <li>
     * <p>targetgroup/&lt;target-group-name&gt;/&lt;target-group-id&gt; is the final
     * portion of the target group ARN.</p> </li> </ul> <p>This is an example:
     * app/EC2Co-EcsEl-1TKLTMITMM0EO/f37c06a68c1748aa/targetgroup/EC2Co-Defau-LDNM7Q3ZH1ZN/6d4ea56ca2d6a18d.</p>
     * <p>To find the ARN for an Application Load Balancer, use the <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeLoadBalancers.html">DescribeLoadBalancers</a>
     * API operation. To find the ARN for the target group, use the <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeTargetGroups.html">DescribeTargetGroups</a>
     * API operation.</p>
     */
    inline const Aws::String& GetResourceLabel() const { return m_resourceLabel; }
    inline bool ResourceLabelHasBeenSet() const { return m_resourceLabelHasBeenSet; }
    template<typename ResourceLabelT = Aws::String>
    void SetResourceLabel(ResourceLabelT&& value) { m_resourceLabelHasBeenSet = true; m_resourceLabel = std::forward<ResourceLabelT>(value); }
    template<typename ResourceLabelT = Aws::String>
    PredefinedScalingMetricSpecification& WithResourceLabel(ResourceLabelT&& value) { SetResourceLabel(std::forward<ResourceLabelT>(value)); return *this;}
    ///@}
  private:

    ScalingMetricType m_predefinedScalingMetricType{ScalingMetricType::NOT_SET};
    bool m_predefinedScalingMetricTypeHasBeenSet = false;

    Aws::String m_resourceLabel;
    bool m_resourceLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
