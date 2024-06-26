﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Associates a SageMaker job as a trial component with an experiment and trial.
   * Specified when you call the following APIs:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateProcessingJob.html">CreateProcessingJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTransformJob.html">CreateTransformJob</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExperimentConfig">AWS
   * API Reference</a></p>
   */
  class ExperimentConfig
  {
  public:
    AWS_SAGEMAKER_API ExperimentConfig();
    AWS_SAGEMAKER_API ExperimentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ExperimentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an existing experiment to associate with the trial component.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }
    inline ExperimentConfig& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}
    inline ExperimentConfig& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}
    inline ExperimentConfig& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }
    inline ExperimentConfig& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}
    inline ExperimentConfig& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}
    inline ExperimentConfig& WithTrialName(const char* value) { SetTrialName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline const Aws::String& GetTrialComponentDisplayName() const{ return m_trialComponentDisplayName; }
    inline bool TrialComponentDisplayNameHasBeenSet() const { return m_trialComponentDisplayNameHasBeenSet; }
    inline void SetTrialComponentDisplayName(const Aws::String& value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName = value; }
    inline void SetTrialComponentDisplayName(Aws::String&& value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName = std::move(value); }
    inline void SetTrialComponentDisplayName(const char* value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName.assign(value); }
    inline ExperimentConfig& WithTrialComponentDisplayName(const Aws::String& value) { SetTrialComponentDisplayName(value); return *this;}
    inline ExperimentConfig& WithTrialComponentDisplayName(Aws::String&& value) { SetTrialComponentDisplayName(std::move(value)); return *this;}
    inline ExperimentConfig& WithTrialComponentDisplayName(const char* value) { SetTrialComponentDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment run to associate with the trial component.</p>
     */
    inline const Aws::String& GetRunName() const{ return m_runName; }
    inline bool RunNameHasBeenSet() const { return m_runNameHasBeenSet; }
    inline void SetRunName(const Aws::String& value) { m_runNameHasBeenSet = true; m_runName = value; }
    inline void SetRunName(Aws::String&& value) { m_runNameHasBeenSet = true; m_runName = std::move(value); }
    inline void SetRunName(const char* value) { m_runNameHasBeenSet = true; m_runName.assign(value); }
    inline ExperimentConfig& WithRunName(const Aws::String& value) { SetRunName(value); return *this;}
    inline ExperimentConfig& WithRunName(Aws::String&& value) { SetRunName(std::move(value)); return *this;}
    inline ExperimentConfig& WithRunName(const char* value) { SetRunName(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_trialComponentDisplayName;
    bool m_trialComponentDisplayNameHasBeenSet = false;

    Aws::String m_runName;
    bool m_runNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
