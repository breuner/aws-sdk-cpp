﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TrainingPlanSortBy
  {
    NOT_SET,
    TrainingPlanName,
    StartTime,
    Status
  };

namespace TrainingPlanSortByMapper
{
AWS_SAGEMAKER_API TrainingPlanSortBy GetTrainingPlanSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingPlanSortBy(TrainingPlanSortBy value);
} // namespace TrainingPlanSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
