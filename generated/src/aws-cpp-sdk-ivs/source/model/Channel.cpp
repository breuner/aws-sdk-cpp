﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

Channel::Channel(JsonView jsonValue)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorized"))
  {
    m_authorized = jsonValue.GetBool("authorized");
    m_authorizedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerFormat"))
  {
    m_containerFormat = ContainerFormatMapper::GetContainerFormatForName(jsonValue.GetString("containerFormat"));
    m_containerFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ingestEndpoint"))
  {
    m_ingestEndpoint = jsonValue.GetString("ingestEndpoint");
    m_ingestEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("insecureIngest"))
  {
    m_insecureIngest = jsonValue.GetBool("insecureIngest");
    m_insecureIngestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latencyMode"))
  {
    m_latencyMode = ChannelLatencyModeMapper::GetChannelLatencyModeForName(jsonValue.GetString("latencyMode"));
    m_latencyModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multitrackInputConfiguration"))
  {
    m_multitrackInputConfiguration = jsonValue.GetObject("multitrackInputConfiguration");
    m_multitrackInputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("playbackRestrictionPolicyArn"))
  {
    m_playbackRestrictionPolicyArn = jsonValue.GetString("playbackRestrictionPolicyArn");
    m_playbackRestrictionPolicyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("playbackUrl"))
  {
    m_playbackUrl = jsonValue.GetString("playbackUrl");
    m_playbackUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("preset"))
  {
    m_preset = TranscodePresetMapper::GetTranscodePresetForName(jsonValue.GetString("preset"));
    m_presetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingConfigurationArn"))
  {
    m_recordingConfigurationArn = jsonValue.GetString("recordingConfigurationArn");
    m_recordingConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srt"))
  {
    m_srt = jsonValue.GetObject("srt");
    m_srtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_authorizedHasBeenSet)
  {
   payload.WithBool("authorized", m_authorized);

  }

  if(m_containerFormatHasBeenSet)
  {
   payload.WithString("containerFormat", ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat));
  }

  if(m_ingestEndpointHasBeenSet)
  {
   payload.WithString("ingestEndpoint", m_ingestEndpoint);

  }

  if(m_insecureIngestHasBeenSet)
  {
   payload.WithBool("insecureIngest", m_insecureIngest);

  }

  if(m_latencyModeHasBeenSet)
  {
   payload.WithString("latencyMode", ChannelLatencyModeMapper::GetNameForChannelLatencyMode(m_latencyMode));
  }

  if(m_multitrackInputConfigurationHasBeenSet)
  {
   payload.WithObject("multitrackInputConfiguration", m_multitrackInputConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_playbackRestrictionPolicyArnHasBeenSet)
  {
   payload.WithString("playbackRestrictionPolicyArn", m_playbackRestrictionPolicyArn);

  }

  if(m_playbackUrlHasBeenSet)
  {
   payload.WithString("playbackUrl", m_playbackUrl);

  }

  if(m_presetHasBeenSet)
  {
   payload.WithString("preset", TranscodePresetMapper::GetNameForTranscodePreset(m_preset));
  }

  if(m_recordingConfigurationArnHasBeenSet)
  {
   payload.WithString("recordingConfigurationArn", m_recordingConfigurationArn);

  }

  if(m_srtHasBeenSet)
  {
   payload.WithObject("srt", m_srt.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
