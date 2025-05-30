﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaSavingsEstimationModeSource.h>
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
   * <p> Describes the savings estimation used for calculating savings opportunity
   * for Lambda functions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaSavingsEstimationMode">AWS
   * API Reference</a></p>
   */
  class LambdaSavingsEstimationMode
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the source for calculation of savings opportunity for Lambda
     * functions. </p>
     */
    inline LambdaSavingsEstimationModeSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(LambdaSavingsEstimationModeSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline LambdaSavingsEstimationMode& WithSource(LambdaSavingsEstimationModeSource value) { SetSource(value); return *this;}
    ///@}
  private:

    LambdaSavingsEstimationModeSource m_source{LambdaSavingsEstimationModeSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
