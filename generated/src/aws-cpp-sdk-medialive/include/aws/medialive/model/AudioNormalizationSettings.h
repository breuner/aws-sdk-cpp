﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioNormalizationAlgorithm.h>
#include <aws/medialive/model/AudioNormalizationAlgorithmControl.h>
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
   * Audio Normalization Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioNormalizationSettings">AWS
   * API Reference</a></p>
   */
  class AudioNormalizationSettings
  {
  public:
    AWS_MEDIALIVE_API AudioNormalizationSettings() = default;
    AWS_MEDIALIVE_API AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Audio normalization algorithm to use. itu17701 conforms to the CALM Act
     * specification, itu17702 conforms to the EBU R-128 specification.
     */
    inline AudioNormalizationAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(AudioNormalizationAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to correctAudio the output audio is corrected using the chosen
     * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationAlgorithmControl GetAlgorithmControl() const { return m_algorithmControl; }
    inline bool AlgorithmControlHasBeenSet() const { return m_algorithmControlHasBeenSet; }
    inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = value; }
    inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl value) { SetAlgorithmControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
     * value will be used according to the chosen algorithm.  The CALM Act (1770-1)
     * recommends a target of -24 LKFS. The EBU R-128 specification (1770-2) recommends
     * a target of -23 LKFS.
     */
    inline double GetTargetLkfs() const { return m_targetLkfs; }
    inline bool TargetLkfsHasBeenSet() const { return m_targetLkfsHasBeenSet; }
    inline void SetTargetLkfs(double value) { m_targetLkfsHasBeenSet = true; m_targetLkfs = value; }
    inline AudioNormalizationSettings& WithTargetLkfs(double value) { SetTargetLkfs(value); return *this;}
    ///@}
  private:

    AudioNormalizationAlgorithm m_algorithm{AudioNormalizationAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    AudioNormalizationAlgorithmControl m_algorithmControl{AudioNormalizationAlgorithmControl::NOT_SET};
    bool m_algorithmControlHasBeenSet = false;

    double m_targetLkfs{0.0};
    bool m_targetLkfsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
