﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/DASHFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/DASHTimestampRange.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   * <p>Contains the range of timestamps for the requested media, and the source of
   * the timestamps. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/DASHFragmentSelector">AWS
   * API Reference</a></p>
   */
  class DASHFragmentSelector
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API DASHFragmentSelector() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API DASHFragmentSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API DASHFragmentSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the timestamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetDASHStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code> or
     * <code>LIVE_REPLAY</code>, the first fragment ingested with a producer timestamp
     * within the specified <a>FragmentSelector$TimestampRange</a> is included in the
     * media playlist. In addition, the fragments with producer timestamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetDASHStreamingSessionURLInput$MaxManifestFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer timestamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer timestamps that are approximately equal to the true
     * clock time, the MPEG-DASH manifest will contain all of the fragments within the
     * requested timestamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetDASHStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer timestamps are used in the MP4 fragments and for deduplication. But the
     * most recently ingested fragments based on server timestamps are included in the
     * MPEG-DASH manifest. This means that even if fragments ingested in the past have
     * producer timestamps with values now, they are not included in the HLS media
     * playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline DASHFragmentSelectorType GetFragmentSelectorType() const { return m_fragmentSelectorType; }
    inline bool FragmentSelectorTypeHasBeenSet() const { return m_fragmentSelectorTypeHasBeenSet; }
    inline void SetFragmentSelectorType(DASHFragmentSelectorType value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = value; }
    inline DASHFragmentSelector& WithFragmentSelectorType(DASHFragmentSelectorType value) { SetFragmentSelectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start and end of the timestamp range for the requested media.</p> <p>This
     * value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline const DASHTimestampRange& GetTimestampRange() const { return m_timestampRange; }
    inline bool TimestampRangeHasBeenSet() const { return m_timestampRangeHasBeenSet; }
    template<typename TimestampRangeT = DASHTimestampRange>
    void SetTimestampRange(TimestampRangeT&& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = std::forward<TimestampRangeT>(value); }
    template<typename TimestampRangeT = DASHTimestampRange>
    DASHFragmentSelector& WithTimestampRange(TimestampRangeT&& value) { SetTimestampRange(std::forward<TimestampRangeT>(value)); return *this;}
    ///@}
  private:

    DASHFragmentSelectorType m_fragmentSelectorType{DASHFragmentSelectorType::NOT_SET};
    bool m_fragmentSelectorTypeHasBeenSet = false;

    DASHTimestampRange m_timestampRange;
    bool m_timestampRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
