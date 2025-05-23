﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/RemixSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

RemixSettings::RemixSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RemixSettings& RemixSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptionAudioChannel"))
  {
    m_audioDescriptionAudioChannel = jsonValue.GetInteger("audioDescriptionAudioChannel");
    m_audioDescriptionAudioChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioDescriptionDataChannel"))
  {
    m_audioDescriptionDataChannel = jsonValue.GetInteger("audioDescriptionDataChannel");
    m_audioDescriptionDataChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelMapping"))
  {
    m_channelMapping = jsonValue.GetObject("channelMapping");
    m_channelMappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelsIn"))
  {
    m_channelsIn = jsonValue.GetInteger("channelsIn");
    m_channelsInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelsOut"))
  {
    m_channelsOut = jsonValue.GetInteger("channelsOut");
    m_channelsOutHasBeenSet = true;
  }
  return *this;
}

JsonValue RemixSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionAudioChannelHasBeenSet)
  {
   payload.WithInteger("audioDescriptionAudioChannel", m_audioDescriptionAudioChannel);

  }

  if(m_audioDescriptionDataChannelHasBeenSet)
  {
   payload.WithInteger("audioDescriptionDataChannel", m_audioDescriptionDataChannel);

  }

  if(m_channelMappingHasBeenSet)
  {
   payload.WithObject("channelMapping", m_channelMapping.Jsonize());

  }

  if(m_channelsInHasBeenSet)
  {
   payload.WithInteger("channelsIn", m_channelsIn);

  }

  if(m_channelsOutHasBeenSet)
  {
   payload.WithInteger("channelsOut", m_channelsOut);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
