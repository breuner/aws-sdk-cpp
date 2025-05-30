﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/EmbeddedConvert608To708.h>
#include <aws/mediaconvert/model/EmbeddedTerminateCaptions.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for embedded captions Source<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EmbeddedSourceSettings">AWS
   * API Reference</a></p>
   */
  class EmbeddedSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API EmbeddedSourceSettings() = default;
    AWS_MEDIACONVERT_API EmbeddedSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EmbeddedSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert, MediaConvert includes the captions data
     * in two ways: it passes the 608 data through using the 608 compatibility bytes
     * fields of the 708 wrapper, and it also translates the 608 data into 708.
     */
    inline EmbeddedConvert608To708 GetConvert608To708() const { return m_convert608To708; }
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }
    inline void SetConvert608To708(EmbeddedConvert608To708 value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }
    inline EmbeddedSourceSettings& WithConvert608To708(EmbeddedConvert608To708 value) { SetConvert608To708(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSource608ChannelNumber() const { return m_source608ChannelNumber; }
    inline bool Source608ChannelNumberHasBeenSet() const { return m_source608ChannelNumberHasBeenSet; }
    inline void SetSource608ChannelNumber(int value) { m_source608ChannelNumberHasBeenSet = true; m_source608ChannelNumber = value; }
    inline EmbeddedSourceSettings& WithSource608ChannelNumber(int value) { SetSource608ChannelNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the video track index used for extracting captions. The system only
     * supports one input video track, so this should always be set to '1'.
     */
    inline int GetSource608TrackNumber() const { return m_source608TrackNumber; }
    inline bool Source608TrackNumberHasBeenSet() const { return m_source608TrackNumberHasBeenSet; }
    inline void SetSource608TrackNumber(int value) { m_source608TrackNumberHasBeenSet = true; m_source608TrackNumber = value; }
    inline EmbeddedSourceSettings& WithSource608TrackNumber(int value) { SetSource608TrackNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * By default, the service terminates any unterminated captions at the end of each
     * input. If you want the caption to continue onto your next input, disable this
     * setting.
     */
    inline EmbeddedTerminateCaptions GetTerminateCaptions() const { return m_terminateCaptions; }
    inline bool TerminateCaptionsHasBeenSet() const { return m_terminateCaptionsHasBeenSet; }
    inline void SetTerminateCaptions(EmbeddedTerminateCaptions value) { m_terminateCaptionsHasBeenSet = true; m_terminateCaptions = value; }
    inline EmbeddedSourceSettings& WithTerminateCaptions(EmbeddedTerminateCaptions value) { SetTerminateCaptions(value); return *this;}
    ///@}
  private:

    EmbeddedConvert608To708 m_convert608To708{EmbeddedConvert608To708::NOT_SET};
    bool m_convert608To708HasBeenSet = false;

    int m_source608ChannelNumber{0};
    bool m_source608ChannelNumberHasBeenSet = false;

    int m_source608TrackNumber{0};
    bool m_source608TrackNumberHasBeenSet = false;

    EmbeddedTerminateCaptions m_terminateCaptions{EmbeddedTerminateCaptions::NOT_SET};
    bool m_terminateCaptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
