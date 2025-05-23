﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeLabelingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLabelingJobResult::DescribeLabelingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLabelingJobResult& DescribeLabelingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LabelingJobStatus"))
  {
    m_labelingJobStatus = LabelingJobStatusMapper::GetLabelingJobStatusForName(jsonValue.GetString("LabelingJobStatus"));
    m_labelingJobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelCounters"))
  {
    m_labelCounters = jsonValue.GetObject("LabelCounters");
    m_labelCountersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobReferenceCode"))
  {
    m_jobReferenceCode = jsonValue.GetString("JobReferenceCode");
    m_jobReferenceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelingJobName"))
  {
    m_labelingJobName = jsonValue.GetString("LabelingJobName");
    m_labelingJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");
    m_labelingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelAttributeName"))
  {
    m_labelAttributeName = jsonValue.GetString("LabelAttributeName");
    m_labelAttributeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");
    m_inputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelCategoryConfigS3Uri"))
  {
    m_labelCategoryConfigS3Uri = jsonValue.GetString("LabelCategoryConfigS3Uri");
    m_labelCategoryConfigS3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StoppingConditions"))
  {
    m_stoppingConditions = jsonValue.GetObject("StoppingConditions");
    m_stoppingConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelingJobAlgorithmsConfig"))
  {
    m_labelingJobAlgorithmsConfig = jsonValue.GetObject("LabelingJobAlgorithmsConfig");
    m_labelingJobAlgorithmsConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanTaskConfig"))
  {
    m_humanTaskConfig = jsonValue.GetObject("HumanTaskConfig");
    m_humanTaskConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelingJobOutput"))
  {
    m_labelingJobOutput = jsonValue.GetObject("LabelingJobOutput");
    m_labelingJobOutputHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
