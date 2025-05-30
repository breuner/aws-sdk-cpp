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
   * <p>Defines the stairs traffic pattern for an Inference Recommender load test.
   * This pattern type consists of multiple steps where the number of users increases
   * at each step.</p> <p>Specify either the stairs or phases traffic
   * pattern.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Stairs">AWS
   * API Reference</a></p>
   */
  class Stairs
  {
  public:
    AWS_SAGEMAKER_API Stairs() = default;
    AWS_SAGEMAKER_API Stairs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Stairs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines how long each traffic step should be.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline Stairs& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many steps to perform during traffic.</p>
     */
    inline int GetNumberOfSteps() const { return m_numberOfSteps; }
    inline bool NumberOfStepsHasBeenSet() const { return m_numberOfStepsHasBeenSet; }
    inline void SetNumberOfSteps(int value) { m_numberOfStepsHasBeenSet = true; m_numberOfSteps = value; }
    inline Stairs& WithNumberOfSteps(int value) { SetNumberOfSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many new users to spawn in each step.</p>
     */
    inline int GetUsersPerStep() const { return m_usersPerStep; }
    inline bool UsersPerStepHasBeenSet() const { return m_usersPerStepHasBeenSet; }
    inline void SetUsersPerStep(int value) { m_usersPerStepHasBeenSet = true; m_usersPerStep = value; }
    inline Stairs& WithUsersPerStep(int value) { SetUsersPerStep(value); return *this;}
    ///@}
  private:

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    int m_numberOfSteps{0};
    bool m_numberOfStepsHasBeenSet = false;

    int m_usersPerStep{0};
    bool m_usersPerStepHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
