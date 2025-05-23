﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryExecutionStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryExecutionStatistics::QueryExecutionStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryExecutionStatistics& QueryExecutionStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineExecutionTimeInMillis"))
  {
    m_engineExecutionTimeInMillis = jsonValue.GetInt64("EngineExecutionTimeInMillis");
    m_engineExecutionTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataScannedInBytes"))
  {
    m_dataScannedInBytes = jsonValue.GetInt64("DataScannedInBytes");
    m_dataScannedInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataManifestLocation"))
  {
    m_dataManifestLocation = jsonValue.GetString("DataManifestLocation");
    m_dataManifestLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalExecutionTimeInMillis"))
  {
    m_totalExecutionTimeInMillis = jsonValue.GetInt64("TotalExecutionTimeInMillis");
    m_totalExecutionTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryQueueTimeInMillis"))
  {
    m_queryQueueTimeInMillis = jsonValue.GetInt64("QueryQueueTimeInMillis");
    m_queryQueueTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServicePreProcessingTimeInMillis"))
  {
    m_servicePreProcessingTimeInMillis = jsonValue.GetInt64("ServicePreProcessingTimeInMillis");
    m_servicePreProcessingTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryPlanningTimeInMillis"))
  {
    m_queryPlanningTimeInMillis = jsonValue.GetInt64("QueryPlanningTimeInMillis");
    m_queryPlanningTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceProcessingTimeInMillis"))
  {
    m_serviceProcessingTimeInMillis = jsonValue.GetInt64("ServiceProcessingTimeInMillis");
    m_serviceProcessingTimeInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultReuseInformation"))
  {
    m_resultReuseInformation = jsonValue.GetObject("ResultReuseInformation");
    m_resultReuseInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryExecutionStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_engineExecutionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("EngineExecutionTimeInMillis", m_engineExecutionTimeInMillis);

  }

  if(m_dataScannedInBytesHasBeenSet)
  {
   payload.WithInt64("DataScannedInBytes", m_dataScannedInBytes);

  }

  if(m_dataManifestLocationHasBeenSet)
  {
   payload.WithString("DataManifestLocation", m_dataManifestLocation);

  }

  if(m_totalExecutionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("TotalExecutionTimeInMillis", m_totalExecutionTimeInMillis);

  }

  if(m_queryQueueTimeInMillisHasBeenSet)
  {
   payload.WithInt64("QueryQueueTimeInMillis", m_queryQueueTimeInMillis);

  }

  if(m_servicePreProcessingTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ServicePreProcessingTimeInMillis", m_servicePreProcessingTimeInMillis);

  }

  if(m_queryPlanningTimeInMillisHasBeenSet)
  {
   payload.WithInt64("QueryPlanningTimeInMillis", m_queryPlanningTimeInMillis);

  }

  if(m_serviceProcessingTimeInMillisHasBeenSet)
  {
   payload.WithInt64("ServiceProcessingTimeInMillis", m_serviceProcessingTimeInMillis);

  }

  if(m_resultReuseInformationHasBeenSet)
  {
   payload.WithObject("ResultReuseInformation", m_resultReuseInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
