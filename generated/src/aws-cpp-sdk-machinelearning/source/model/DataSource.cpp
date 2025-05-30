﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DataSource.h>
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

DataSource::DataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");
    m_dataSourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataLocationS3"))
  {
    m_dataLocationS3 = jsonValue.GetString("DataLocationS3");
    m_dataLocationS3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataRearrangement"))
  {
    m_dataRearrangement = jsonValue.GetString("DataRearrangement");
    m_dataRearrangementHasBeenSet = true;
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
  if(jsonValue.ValueExists("DataSizeInBytes"))
  {
    m_dataSizeInBytes = jsonValue.GetInt64("DataSizeInBytes");
    m_dataSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfFiles"))
  {
    m_numberOfFiles = jsonValue.GetInt64("NumberOfFiles");
    m_numberOfFilesHasBeenSet = true;
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
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftMetadata"))
  {
    m_redshiftMetadata = jsonValue.GetObject("RedshiftMetadata");
    m_redshiftMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RDSMetadata"))
  {
    m_rDSMetadata = jsonValue.GetObject("RDSMetadata");
    m_rDSMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeStatistics"))
  {
    m_computeStatistics = jsonValue.GetBool("ComputeStatistics");
    m_computeStatisticsHasBeenSet = true;
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

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_dataLocationS3HasBeenSet)
  {
   payload.WithString("DataLocationS3", m_dataLocationS3);

  }

  if(m_dataRearrangementHasBeenSet)
  {
   payload.WithString("DataRearrangement", m_dataRearrangement);

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

  if(m_dataSizeInBytesHasBeenSet)
  {
   payload.WithInt64("DataSizeInBytes", m_dataSizeInBytes);

  }

  if(m_numberOfFilesHasBeenSet)
  {
   payload.WithInt64("NumberOfFiles", m_numberOfFiles);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_redshiftMetadataHasBeenSet)
  {
   payload.WithObject("RedshiftMetadata", m_redshiftMetadata.Jsonize());

  }

  if(m_rDSMetadataHasBeenSet)
  {
   payload.WithObject("RDSMetadata", m_rDSMetadata.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_computeStatisticsHasBeenSet)
  {
   payload.WithBool("ComputeStatistics", m_computeStatistics);

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
