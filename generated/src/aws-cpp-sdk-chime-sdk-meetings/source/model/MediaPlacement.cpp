﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/MediaPlacement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

MediaPlacement::MediaPlacement(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaPlacement& MediaPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AudioHostUrl"))
  {
    m_audioHostUrl = jsonValue.GetString("AudioHostUrl");
    m_audioHostUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AudioFallbackUrl"))
  {
    m_audioFallbackUrl = jsonValue.GetString("AudioFallbackUrl");
    m_audioFallbackUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignalingUrl"))
  {
    m_signalingUrl = jsonValue.GetString("SignalingUrl");
    m_signalingUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TurnControlUrl"))
  {
    m_turnControlUrl = jsonValue.GetString("TurnControlUrl");
    m_turnControlUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScreenDataUrl"))
  {
    m_screenDataUrl = jsonValue.GetString("ScreenDataUrl");
    m_screenDataUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScreenViewingUrl"))
  {
    m_screenViewingUrl = jsonValue.GetString("ScreenViewingUrl");
    m_screenViewingUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScreenSharingUrl"))
  {
    m_screenSharingUrl = jsonValue.GetString("ScreenSharingUrl");
    m_screenSharingUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventIngestionUrl"))
  {
    m_eventIngestionUrl = jsonValue.GetString("EventIngestionUrl");
    m_eventIngestionUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_audioHostUrlHasBeenSet)
  {
   payload.WithString("AudioHostUrl", m_audioHostUrl);

  }

  if(m_audioFallbackUrlHasBeenSet)
  {
   payload.WithString("AudioFallbackUrl", m_audioFallbackUrl);

  }

  if(m_signalingUrlHasBeenSet)
  {
   payload.WithString("SignalingUrl", m_signalingUrl);

  }

  if(m_turnControlUrlHasBeenSet)
  {
   payload.WithString("TurnControlUrl", m_turnControlUrl);

  }

  if(m_screenDataUrlHasBeenSet)
  {
   payload.WithString("ScreenDataUrl", m_screenDataUrl);

  }

  if(m_screenViewingUrlHasBeenSet)
  {
   payload.WithString("ScreenViewingUrl", m_screenViewingUrl);

  }

  if(m_screenSharingUrlHasBeenSet)
  {
   payload.WithString("ScreenSharingUrl", m_screenSharingUrl);

  }

  if(m_eventIngestionUrlHasBeenSet)
  {
   payload.WithString("EventIngestionUrl", m_eventIngestionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
