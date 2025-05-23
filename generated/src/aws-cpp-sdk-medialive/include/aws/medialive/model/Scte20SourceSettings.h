﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte20Convert608To708.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Scte20 Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte20SourceSettings">AWS
   * API Reference</a></p>
   */
  class Scte20SourceSettings
  {
  public:
    AWS_MEDIALIVE_API Scte20SourceSettings() = default;
    AWS_MEDIALIVE_API Scte20SourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte20SourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline Scte20Convert608To708 GetConvert608To708() const { return m_convert608To708; }
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }
    inline void SetConvert608To708(Scte20Convert608To708 value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }
    inline Scte20SourceSettings& WithConvert608To708(Scte20Convert608To708 value) { SetConvert608To708(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSource608ChannelNumber() const { return m_source608ChannelNumber; }
    inline bool Source608ChannelNumberHasBeenSet() const { return m_source608ChannelNumberHasBeenSet; }
    inline void SetSource608ChannelNumber(int value) { m_source608ChannelNumberHasBeenSet = true; m_source608ChannelNumber = value; }
    inline Scte20SourceSettings& WithSource608ChannelNumber(int value) { SetSource608ChannelNumber(value); return *this;}
    ///@}
  private:

    Scte20Convert608To708 m_convert608To708{Scte20Convert608To708::NOT_SET};
    bool m_convert608To708HasBeenSet = false;

    int m_source608ChannelNumber{0};
    bool m_source608ChannelNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
