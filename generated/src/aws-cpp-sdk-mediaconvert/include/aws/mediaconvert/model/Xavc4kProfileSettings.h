﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Xavc4kProfileBitrateClass.h>
#include <aws/mediaconvert/model/Xavc4kProfileCodecProfile.h>
#include <aws/mediaconvert/model/XavcFlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcGopBReference.h>
#include <aws/mediaconvert/model/Xavc4kProfileQualityTuningLevel.h>
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
   * Required when you set Profile to the value XAVC_4K.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Xavc4kProfileSettings">AWS
   * API Reference</a></p>
   */
  class Xavc4kProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API Xavc4kProfileSettings() = default;
    AWS_MEDIACONVERT_API Xavc4kProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Xavc4kProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline Xavc4kProfileBitrateClass GetBitrateClass() const { return m_bitrateClass; }
    inline bool BitrateClassHasBeenSet() const { return m_bitrateClassHasBeenSet; }
    inline void SetBitrateClass(Xavc4kProfileBitrateClass value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = value; }
    inline Xavc4kProfileSettings& WithBitrateClass(Xavc4kProfileBitrateClass value) { SetBitrateClass(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline Xavc4kProfileCodecProfile GetCodecProfile() const { return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(Xavc4kProfileCodecProfile value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline Xavc4kProfileSettings& WithCodecProfile(Xavc4kProfileCodecProfile value) { SetCodecProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto,
     * for the setting Adaptive quantization. When you do so, MediaConvert
     * automatically applies the best types of quantization for your video content.
     * Include this setting in your JSON job specification only when you choose to
     * change the default value for Adaptive quantization. Enable this setting to have
     * the encoder reduce I-frame pop. I-frame pop appears as a visual flicker that can
     * arise when the encoder saves bits by copying some macroblocks many times from
     * frame to frame, and then refreshes them at the I-frame. When you enable this
     * setting, the encoder updates these macroblocks slightly more often to smooth out
     * the flicker. This setting is disabled by default. Related setting: In addition
     * to enabling this setting, you must also set Adaptive quantization to a value
     * other than Off or Auto. Use Adaptive quantization to adjust the degree of
     * smoothing that Flicker adaptive quantization provides.
     */
    inline XavcFlickerAdaptiveQuantization GetFlickerAdaptiveQuantization() const { return m_flickerAdaptiveQuantization; }
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }
    inline void SetFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }
    inline Xavc4kProfileSettings& WithFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization value) { SetFlickerAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow to allow the encoder to use B-frames as reference
     * frames. Choose Don't allow to prevent the encoder from using B-frames as
     * reference frames.
     */
    inline XavcGopBReference GetGopBReference() const { return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(XavcGopBReference value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline Xavc4kProfileSettings& WithGopBReference(XavcGopBReference value) { SetGopBReference(value); return *this;}
    ///@}

    ///@{
    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline Xavc4kProfileSettings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline int GetHrdBufferSize() const { return m_hrdBufferSize; }
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }
    inline Xavc4kProfileSettings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use Quality tuning level to choose how you want to trade off encoding
     * speed for output video quality. The default behavior is faster, lower quality,
     * single-pass encoding.
     */
    inline Xavc4kProfileQualityTuningLevel GetQualityTuningLevel() const { return m_qualityTuningLevel; }
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }
    inline void SetQualityTuningLevel(Xavc4kProfileQualityTuningLevel value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }
    inline Xavc4kProfileSettings& WithQualityTuningLevel(Xavc4kProfileQualityTuningLevel value) { SetQualityTuningLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline int GetSlices() const { return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline Xavc4kProfileSettings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}
  private:

    Xavc4kProfileBitrateClass m_bitrateClass{Xavc4kProfileBitrateClass::NOT_SET};
    bool m_bitrateClassHasBeenSet = false;

    Xavc4kProfileCodecProfile m_codecProfile{Xavc4kProfileCodecProfile::NOT_SET};
    bool m_codecProfileHasBeenSet = false;

    XavcFlickerAdaptiveQuantization m_flickerAdaptiveQuantization{XavcFlickerAdaptiveQuantization::NOT_SET};
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    XavcGopBReference m_gopBReference{XavcGopBReference::NOT_SET};
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_hrdBufferSize{0};
    bool m_hrdBufferSizeHasBeenSet = false;

    Xavc4kProfileQualityTuningLevel m_qualityTuningLevel{Xavc4kProfileQualityTuningLevel::NOT_SET};
    bool m_qualityTuningLevelHasBeenSet = false;

    int m_slices{0};
    bool m_slicesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
