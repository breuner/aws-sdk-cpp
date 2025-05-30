﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchSegmentJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchSegmentJob::BatchSegmentJob(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchSegmentJob& BatchSegmentJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("batchSegmentJobArn"))
  {
    m_batchSegmentJobArn = jsonValue.GetString("batchSegmentJobArn");
    m_batchSegmentJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterArn"))
  {
    m_filterArn = jsonValue.GetString("filterArn");
    m_filterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");
    m_solutionVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numResults"))
  {
    m_numResults = jsonValue.GetInteger("numResults");
    m_numResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobInput"))
  {
    m_jobInput = jsonValue.GetObject("jobInput");
    m_jobInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobOutput"))
  {
    m_jobOutput = jsonValue.GetObject("jobOutput");
    m_jobOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchSegmentJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_batchSegmentJobArnHasBeenSet)
  {
   payload.WithString("batchSegmentJobArn", m_batchSegmentJobArn);

  }

  if(m_filterArnHasBeenSet)
  {
   payload.WithString("filterArn", m_filterArn);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_numResultsHasBeenSet)
  {
   payload.WithInteger("numResults", m_numResults);

  }

  if(m_jobInputHasBeenSet)
  {
   payload.WithObject("jobInput", m_jobInput.Jsonize());

  }

  if(m_jobOutputHasBeenSet)
  {
   payload.WithObject("jobOutput", m_jobOutput.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
