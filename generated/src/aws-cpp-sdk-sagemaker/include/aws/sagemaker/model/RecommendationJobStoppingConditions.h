﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FlatInvocations.h>
#include <aws/sagemaker/model/ModelLatencyThreshold.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies conditions for stopping a job. When a job reaches a stopping
   * condition limit, SageMaker ends the job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobStoppingConditions">AWS
   * API Reference</a></p>
   */
  class RecommendationJobStoppingConditions
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobStoppingConditions() = default;
    AWS_SAGEMAKER_API RecommendationJobStoppingConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobStoppingConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of requests per minute expected for the endpoint.</p>
     */
    inline int GetMaxInvocations() const { return m_maxInvocations; }
    inline bool MaxInvocationsHasBeenSet() const { return m_maxInvocationsHasBeenSet; }
    inline void SetMaxInvocations(int value) { m_maxInvocationsHasBeenSet = true; m_maxInvocations = value; }
    inline RecommendationJobStoppingConditions& WithMaxInvocations(int value) { SetMaxInvocations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval of time taken by a model to respond as viewed from SageMaker.
     * The interval includes the local communication time taken to send the request and
     * to fetch the response from the container of a model and the time taken to
     * complete the inference in the container.</p>
     */
    inline const Aws::Vector<ModelLatencyThreshold>& GetModelLatencyThresholds() const { return m_modelLatencyThresholds; }
    inline bool ModelLatencyThresholdsHasBeenSet() const { return m_modelLatencyThresholdsHasBeenSet; }
    template<typename ModelLatencyThresholdsT = Aws::Vector<ModelLatencyThreshold>>
    void SetModelLatencyThresholds(ModelLatencyThresholdsT&& value) { m_modelLatencyThresholdsHasBeenSet = true; m_modelLatencyThresholds = std::forward<ModelLatencyThresholdsT>(value); }
    template<typename ModelLatencyThresholdsT = Aws::Vector<ModelLatencyThreshold>>
    RecommendationJobStoppingConditions& WithModelLatencyThresholds(ModelLatencyThresholdsT&& value) { SetModelLatencyThresholds(std::forward<ModelLatencyThresholdsT>(value)); return *this;}
    template<typename ModelLatencyThresholdsT = ModelLatencyThreshold>
    RecommendationJobStoppingConditions& AddModelLatencyThresholds(ModelLatencyThresholdsT&& value) { m_modelLatencyThresholdsHasBeenSet = true; m_modelLatencyThresholds.emplace_back(std::forward<ModelLatencyThresholdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stops a load test when the number of invocations (TPS) peaks and flattens,
     * which means that the instance has reached capacity. The default value is
     * <code>Stop</code>. If you want the load test to continue after invocations have
     * flattened, set the value to <code>Continue</code>.</p>
     */
    inline FlatInvocations GetFlatInvocations() const { return m_flatInvocations; }
    inline bool FlatInvocationsHasBeenSet() const { return m_flatInvocationsHasBeenSet; }
    inline void SetFlatInvocations(FlatInvocations value) { m_flatInvocationsHasBeenSet = true; m_flatInvocations = value; }
    inline RecommendationJobStoppingConditions& WithFlatInvocations(FlatInvocations value) { SetFlatInvocations(value); return *this;}
    ///@}
  private:

    int m_maxInvocations{0};
    bool m_maxInvocationsHasBeenSet = false;

    Aws::Vector<ModelLatencyThreshold> m_modelLatencyThresholds;
    bool m_modelLatencyThresholdsHasBeenSet = false;

    FlatInvocations m_flatInvocations{FlatInvocations::NOT_SET};
    bool m_flatInvocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
