﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDASHStreamingSessionURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_playbackModeHasBeenSet)
  {
   payload.WithString("PlaybackMode", DASHPlaybackModeMapper::GetNameForDASHPlaybackMode(m_playbackMode));
  }

  if(m_displayFragmentTimestampHasBeenSet)
  {
   payload.WithString("DisplayFragmentTimestamp", DASHDisplayFragmentTimestampMapper::GetNameForDASHDisplayFragmentTimestamp(m_displayFragmentTimestamp));
  }

  if(m_displayFragmentNumberHasBeenSet)
  {
   payload.WithString("DisplayFragmentNumber", DASHDisplayFragmentNumberMapper::GetNameForDASHDisplayFragmentNumber(m_displayFragmentNumber));
  }

  if(m_dASHFragmentSelectorHasBeenSet)
  {
   payload.WithObject("DASHFragmentSelector", m_dASHFragmentSelector.Jsonize());

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInteger("Expires", m_expires);

  }

  if(m_maxManifestFragmentResultsHasBeenSet)
  {
   payload.WithInt64("MaxManifestFragmentResults", m_maxManifestFragmentResults);

  }

  return payload.View().WriteReadable();
}




