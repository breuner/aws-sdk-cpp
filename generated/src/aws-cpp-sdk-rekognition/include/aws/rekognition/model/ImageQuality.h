﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Identifies face image brightness and sharpness. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ImageQuality">AWS
   * API Reference</a></p>
   */
  class ImageQuality
  {
  public:
    AWS_REKOGNITION_API ImageQuality() = default;
    AWS_REKOGNITION_API ImageQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ImageQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Value representing brightness of the face. The service returns a value
     * between 0 and 100 (inclusive). A higher value indicates a brighter face
     * image.</p>
     */
    inline double GetBrightness() const { return m_brightness; }
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }
    inline void SetBrightness(double value) { m_brightnessHasBeenSet = true; m_brightness = value; }
    inline ImageQuality& WithBrightness(double value) { SetBrightness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value representing sharpness of the face. The service returns a value between
     * 0 and 100 (inclusive). A higher value indicates a sharper face image.</p>
     */
    inline double GetSharpness() const { return m_sharpness; }
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }
    inline void SetSharpness(double value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }
    inline ImageQuality& WithSharpness(double value) { SetSharpness(value); return *this;}
    ///@}
  private:

    double m_brightness{0.0};
    bool m_brightnessHasBeenSet = false;

    double m_sharpness{0.0};
    bool m_sharpnessHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
