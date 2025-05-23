﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>The metrics for an existing endpoint compared in an Inference Recommender
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceMetrics">AWS
   * API Reference</a></p>
   */
  class InferenceMetrics
  {
  public:
    AWS_SAGEMAKER_API InferenceMetrics() = default;
    AWS_SAGEMAKER_API InferenceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline int GetMaxInvocations() const { return m_maxInvocations; }
    inline bool MaxInvocationsHasBeenSet() const { return m_maxInvocationsHasBeenSet; }
    inline void SetMaxInvocations(int value) { m_maxInvocationsHasBeenSet = true; m_maxInvocations = value; }
    inline InferenceMetrics& WithMaxInvocations(int value) { SetMaxInvocations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected model latency at maximum invocations per minute for the
     * instance.</p>
     */
    inline int GetModelLatency() const { return m_modelLatency; }
    inline bool ModelLatencyHasBeenSet() const { return m_modelLatencyHasBeenSet; }
    inline void SetModelLatency(int value) { m_modelLatencyHasBeenSet = true; m_modelLatency = value; }
    inline InferenceMetrics& WithModelLatency(int value) { SetModelLatency(value); return *this;}
    ///@}
  private:

    int m_maxInvocations{0};
    bool m_maxInvocationsHasBeenSet = false;

    int m_modelLatency{0};
    bool m_modelLatencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
