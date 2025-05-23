﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

MediaCapturePipeline::MediaCapturePipeline(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaCapturePipeline& MediaCapturePipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPipelineId"))
  {
    m_mediaPipelineId = jsonValue.GetString("MediaPipelineId");
    m_mediaPipelineIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaPipelineArn"))
  {
    m_mediaPipelineArn = jsonValue.GetString("MediaPipelineArn");
    m_mediaPipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = MediaPipelineSourceTypeMapper::GetMediaPipelineSourceTypeForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaPipelineStatusMapper::GetMediaPipelineStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SinkType"))
  {
    m_sinkType = MediaPipelineSinkTypeMapper::GetMediaPipelineSinkTypeForName(jsonValue.GetString("SinkType"));
    m_sinkTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SinkArn"))
  {
    m_sinkArn = jsonValue.GetString("SinkArn");
    m_sinkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");
    m_updatedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChimeSdkMeetingConfiguration"))
  {
    m_chimeSdkMeetingConfiguration = jsonValue.GetObject("ChimeSdkMeetingConfiguration");
    m_chimeSdkMeetingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SseAwsKeyManagementParams"))
  {
    m_sseAwsKeyManagementParams = jsonValue.GetObject("SseAwsKeyManagementParams");
    m_sseAwsKeyManagementParamsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SinkIamRoleArn"))
  {
    m_sinkIamRoleArn = jsonValue.GetString("SinkIamRoleArn");
    m_sinkIamRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaCapturePipeline::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPipelineIdHasBeenSet)
  {
   payload.WithString("MediaPipelineId", m_mediaPipelineId);

  }

  if(m_mediaPipelineArnHasBeenSet)
  {
   payload.WithString("MediaPipelineArn", m_mediaPipelineArn);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", MediaPipelineSourceTypeMapper::GetNameForMediaPipelineSourceType(m_sourceType));
  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaPipelineStatusMapper::GetNameForMediaPipelineStatus(m_status));
  }

  if(m_sinkTypeHasBeenSet)
  {
   payload.WithString("SinkType", MediaPipelineSinkTypeMapper::GetNameForMediaPipelineSinkType(m_sinkType));
  }

  if(m_sinkArnHasBeenSet)
  {
   payload.WithString("SinkArn", m_sinkArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_chimeSdkMeetingConfigurationHasBeenSet)
  {
   payload.WithObject("ChimeSdkMeetingConfiguration", m_chimeSdkMeetingConfiguration.Jsonize());

  }

  if(m_sseAwsKeyManagementParamsHasBeenSet)
  {
   payload.WithObject("SseAwsKeyManagementParams", m_sseAwsKeyManagementParams.Jsonize());

  }

  if(m_sinkIamRoleArnHasBeenSet)
  {
   payload.WithString("SinkIamRoleArn", m_sinkIamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
