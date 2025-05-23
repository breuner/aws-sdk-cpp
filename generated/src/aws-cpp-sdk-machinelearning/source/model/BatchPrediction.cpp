﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/BatchPrediction.h>
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

BatchPrediction::BatchPrediction(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchPrediction& BatchPrediction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchPredictionId"))
  {
    m_batchPredictionId = jsonValue.GetString("BatchPredictionId");
    m_batchPredictionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");
    m_mLModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchPredictionDataSourceId"))
  {
    m_batchPredictionDataSourceId = jsonValue.GetString("BatchPredictionDataSourceId");
    m_batchPredictionDataSourceIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("OutputUri"))
  {
    m_outputUri = jsonValue.GetString("OutputUri");
    m_outputUriHasBeenSet = true;
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
  if(jsonValue.ValueExists("TotalRecordCount"))
  {
    m_totalRecordCount = jsonValue.GetInt64("TotalRecordCount");
    m_totalRecordCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvalidRecordCount"))
  {
    m_invalidRecordCount = jsonValue.GetInt64("InvalidRecordCount");
    m_invalidRecordCountHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPrediction::Jsonize() const
{
  JsonValue payload;

  if(m_batchPredictionIdHasBeenSet)
  {
   payload.WithString("BatchPredictionId", m_batchPredictionId);

  }

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_batchPredictionDataSourceIdHasBeenSet)
  {
   payload.WithString("BatchPredictionDataSourceId", m_batchPredictionDataSourceId);

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

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("OutputUri", m_outputUri);

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

  if(m_totalRecordCountHasBeenSet)
  {
   payload.WithInt64("TotalRecordCount", m_totalRecordCount);

  }

  if(m_invalidRecordCountHasBeenSet)
  {
   payload.WithInt64("InvalidRecordCount", m_invalidRecordCount);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
