﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/ContainerSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/OutputSettings.h>
#include <aws/mediaconvert/model/VideoDescription.h>
#include <aws/mediaconvert/model/AudioDescription.h>
#include <aws/mediaconvert/model/CaptionDescription.h>
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
   * Each output in your job is a collection of settings that describes how you want
   * MediaConvert to encode a single output file or stream. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/create-outputs.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIACONVERT_API Output();
    AWS_MEDIACONVERT_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Contains groups of audio encoding settings organized by audio codec. Include one
     * instance of per output. Can contain multiple groups of encoding settings.
     */
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const{ return m_audioDescriptions; }
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }
    inline void SetAudioDescriptions(const Aws::Vector<AudioDescription>& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = value; }
    inline void SetAudioDescriptions(Aws::Vector<AudioDescription>&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::move(value); }
    inline Output& WithAudioDescriptions(const Aws::Vector<AudioDescription>& value) { SetAudioDescriptions(value); return *this;}
    inline Output& WithAudioDescriptions(Aws::Vector<AudioDescription>&& value) { SetAudioDescriptions(std::move(value)); return *this;}
    inline Output& AddAudioDescriptions(const AudioDescription& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(value); return *this; }
    inline Output& AddAudioDescriptions(AudioDescription&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Contains groups of captions settings. For each output that has captions, include
     * one instance of CaptionDescriptions. Can contain multiple groups of captions
     * settings.
     */
    inline const Aws::Vector<CaptionDescription>& GetCaptionDescriptions() const{ return m_captionDescriptions; }
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }
    inline void SetCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = value; }
    inline void SetCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::move(value); }
    inline Output& WithCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { SetCaptionDescriptions(value); return *this;}
    inline Output& WithCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { SetCaptionDescriptions(std::move(value)); return *this;}
    inline Output& AddCaptionDescriptions(const CaptionDescription& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(value); return *this; }
    inline Output& AddCaptionDescriptions(CaptionDescription&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Container specific settings.
     */
    inline const ContainerSettings& GetContainerSettings() const{ return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    inline void SetContainerSettings(const ContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }
    inline void SetContainerSettings(ContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }
    inline Output& WithContainerSettings(const ContainerSettings& value) { SetContainerSettings(value); return *this;}
    inline Output& WithContainerSettings(ContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Extension to specify the file extension for outputs in File output groups.
     * If you do not specify a value, the service will use default extensions by
     * container type as follows * MPEG-2 transport stream, m2ts * Quicktime, mov * MXF
     * container, mxf * MPEG-4 container, mp4 * WebM container, webm * Animated GIF
     * container, gif * No Container, the service will use codec extensions (e.g. AAC,
     * H265, H265, AC3)
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }
    inline Output& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}
    inline Output& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}
    inline Output& WithExtension(const char* value) { SetExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Name modifier to have the service add a string to the end of each output
     * filename. You specify the base filename as part of your destination URI. When
     * you create multiple outputs in the same output group, Name modifier is required.
     * Name modifier also accepts format identifiers. For DASH ISO outputs, if you use
     * the format identifiers $Number$ or $Time$ in one output, you must use them in
     * the same way in all outputs of the output group.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }
    inline Output& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}
    inline Output& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}
    inline Output& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}
    ///@}

    ///@{
    /**
     * Specific settings for this type of output.
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
     * Use Preset to specify a preset for your transcoding settings. Provide the system
     * or custom preset name. You can specify either Preset or Container settings, but
     * not both.
     */
    inline const Aws::String& GetPreset() const{ return m_preset; }
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }
    inline void SetPreset(const Aws::String& value) { m_presetHasBeenSet = true; m_preset = value; }
    inline void SetPreset(Aws::String&& value) { m_presetHasBeenSet = true; m_preset = std::move(value); }
    inline void SetPreset(const char* value) { m_presetHasBeenSet = true; m_preset.assign(value); }
    inline Output& WithPreset(const Aws::String& value) { SetPreset(value); return *this;}
    inline Output& WithPreset(Aws::String&& value) { SetPreset(std::move(value)); return *this;}
    inline Output& WithPreset(const char* value) { SetPreset(value); return *this;}
    ///@}

    ///@{
    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline const VideoDescription& GetVideoDescription() const{ return m_videoDescription; }
    inline bool VideoDescriptionHasBeenSet() const { return m_videoDescriptionHasBeenSet; }
    inline void SetVideoDescription(const VideoDescription& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = value; }
    inline void SetVideoDescription(VideoDescription&& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = std::move(value); }
    inline Output& WithVideoDescription(const VideoDescription& value) { SetVideoDescription(value); return *this;}
    inline Output& WithVideoDescription(VideoDescription&& value) { SetVideoDescription(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioDescription> m_audioDescriptions;
    bool m_audioDescriptionsHasBeenSet = false;

    Aws::Vector<CaptionDescription> m_captionDescriptions;
    bool m_captionDescriptionsHasBeenSet = false;

    ContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    Aws::String m_extension;
    bool m_extensionHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet = false;

    Aws::String m_preset;
    bool m_presetHasBeenSet = false;

    VideoDescription m_videoDescription;
    bool m_videoDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
