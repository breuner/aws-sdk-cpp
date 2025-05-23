﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/Evaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

Evaluation::Evaluation(JsonView jsonValue)
{
  *this = jsonValue;
}

Evaluation& Evaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationId"))
  {
    m_evaluationId = jsonValue.GetString("EvaluationId");
    m_evaluationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");
    m_mLModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationDataSourceId"))
  {
    m_evaluationDataSourceId = jsonValue.GetString("EvaluationDataSourceId");
    m_evaluationDataSourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputDataLocationS3"))
  {
    m_inputDataLocationS3 = jsonValue.GetString("InputDataLocationS3");
    m_inputDataLocationS3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");
    m_createdByIamUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerformanceMetrics"))
  {
    m_performanceMetrics = jsonValue.GetObject("PerformanceMetrics");
    m_performanceMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeTime"))
  {
    m_computeTime = jsonValue.GetInt64("ComputeTime");
    m_computeTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FinishedAt"))
  {
    m_finishedAt = jsonValue.GetDouble("FinishedAt");
    m_finishedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Evaluation::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_evaluationDataSourceIdHasBeenSet)
  {
   payload.WithString("EvaluationDataSourceId", m_evaluationDataSourceId);

  }

  if(m_inputDataLocationS3HasBeenSet)
  {
   payload.WithString("InputDataLocationS3", m_inputDataLocationS3);

  }

  if(m_createdByIamUserHasBeenSet)
  {
   payload.WithString("CreatedByIamUser", m_createdByIamUser);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if(m_performanceMetricsHasBeenSet)
  {
   payload.WithObject("PerformanceMetrics", m_performanceMetrics.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_computeTimeHasBeenSet)
  {
   payload.WithInt64("ComputeTime", m_computeTime);

  }

  if(m_finishedAtHasBeenSet)
  {
   payload.WithDouble("FinishedAt", m_finishedAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
