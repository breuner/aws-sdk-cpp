﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OutputSettings.h>
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
   * Output settings. There can be multiple outputs within a group.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIALIVE_API Output();
    AWS_MEDIALIVE_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetAudioDescriptionNames() const{ return m_audioDescriptionNames; }
    inline bool AudioDescriptionNamesHasBeenSet() const { return m_audioDescriptionNamesHasBeenSet; }
    inline void SetAudioDescriptionNames(const Aws::Vector<Aws::String>& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames = value; }
    inline void SetAudioDescriptionNames(Aws::Vector<Aws::String>&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames = std::move(value); }
    inline Output& WithAudioDescriptionNames(const Aws::Vector<Aws::String>& value) { SetAudioDescriptionNames(value); return *this;}
    inline Output& WithAudioDescriptionNames(Aws::Vector<Aws::String>&& value) { SetAudioDescriptionNames(std::move(value)); return *this;}
    inline Output& AddAudioDescriptionNames(const Aws::String& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(value); return *this; }
    inline Output& AddAudioDescriptionNames(Aws::String&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(std::move(value)); return *this; }
    inline Output& AddAudioDescriptionNames(const char* value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetCaptionDescriptionNames() const{ return m_captionDescriptionNames; }
    inline bool CaptionDescriptionNamesHasBeenSet() const { return m_captionDescriptionNamesHasBeenSet; }
    inline void SetCaptionDescriptionNames(const Aws::Vector<Aws::String>& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames = value; }
    inline void SetCaptionDescriptionNames(Aws::Vector<Aws::String>&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames = std::move(value); }
    inline Output& WithCaptionDescriptionNames(const Aws::Vector<Aws::String>& value) { SetCaptionDescriptionNames(value); return *this;}
    inline Output& WithCaptionDescriptionNames(Aws::Vector<Aws::String>&& value) { SetCaptionDescriptionNames(std::move(value)); return *this;}
    inline Output& AddCaptionDescriptionNames(const Aws::String& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(value); return *this; }
    inline Output& AddCaptionDescriptionNames(Aws::String&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(std::move(value)); return *this; }
    inline Output& AddCaptionDescriptionNames(const char* value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The name used to identify an output.
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }
    inline Output& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}
    inline Output& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}
    inline Output& WithOutputName(const char* value) { SetOutputName(value); return *this;}
    ///@}

    ///@{
    /**
     * Output type-specific settings.
     */
    inline const OutputSettings& GetOutputSettings() const{ return m_outputSettings; }
    inline bool OutputSettingsHasBeenSet() const { return m_outputSettingsHasBeenSet; }
    inline void SetOutputSettings(const OutputSettings& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = value; }
    inline void SetOutputSettings(OutputSettings&& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = std::move(value); }
    inline Output& WithOutputSettings(const OutputSettings& value) { SetOutputSettings(value); return *this;}
    inline Output& WithOutputSettings(OutputSettings&& value) { SetOutputSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline const Aws::String& GetVideoDescriptionName() const{ return m_videoDescriptionName; }
    inline bool VideoDescriptionNameHasBeenSet() const { return m_videoDescriptionNameHasBeenSet; }
    inline void SetVideoDescriptionName(const Aws::String& value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName = value; }
    inline void SetVideoDescriptionName(Aws::String&& value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName = std::move(value); }
    inline void SetVideoDescriptionName(const char* value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName.assign(value); }
    inline Output& WithVideoDescriptionName(const Aws::String& value) { SetVideoDescriptionName(value); return *this;}
    inline Output& WithVideoDescriptionName(Aws::String&& value) { SetVideoDescriptionName(std::move(value)); return *this;}
    inline Output& WithVideoDescriptionName(const char* value) { SetVideoDescriptionName(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_audioDescriptionNames;
    bool m_audioDescriptionNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_captionDescriptionNames;
    bool m_captionDescriptionNamesHasBeenSet = false;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet = false;

    Aws::String m_videoDescriptionName;
    bool m_videoDescriptionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
