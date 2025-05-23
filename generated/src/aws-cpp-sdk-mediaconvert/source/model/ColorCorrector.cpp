﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorCorrector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

ColorCorrector::ColorCorrector(JsonView jsonValue)
{
  *this = jsonValue;
}

ColorCorrector& ColorCorrector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brightness"))
  {
    m_brightness = jsonValue.GetInteger("brightness");
    m_brightnessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clipLimits"))
  {
    m_clipLimits = jsonValue.GetObject("clipLimits");
    m_clipLimitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceConversion"))
  {
    m_colorSpaceConversion = ColorSpaceConversionMapper::GetColorSpaceConversionForName(jsonValue.GetString("colorSpaceConversion"));
    m_colorSpaceConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contrast"))
  {
    m_contrast = jsonValue.GetInteger("contrast");
    m_contrastHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hdr10Metadata"))
  {
    m_hdr10Metadata = jsonValue.GetObject("hdr10Metadata");
    m_hdr10MetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hdrToSdrToneMapper"))
  {
    m_hdrToSdrToneMapper = HDRToSDRToneMapperMapper::GetHDRToSDRToneMapperForName(jsonValue.GetString("hdrToSdrToneMapper"));
    m_hdrToSdrToneMapperHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hue"))
  {
    m_hue = jsonValue.GetInteger("hue");
    m_hueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxLuminance"))
  {
    m_maxLuminance = jsonValue.GetInteger("maxLuminance");
    m_maxLuminanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleRangeConversion"))
  {
    m_sampleRangeConversion = SampleRangeConversionMapper::GetSampleRangeConversionForName(jsonValue.GetString("sampleRangeConversion"));
    m_sampleRangeConversionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("saturation"))
  {
    m_saturation = jsonValue.GetInteger("saturation");
    m_saturationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdrReferenceWhiteLevel"))
  {
    m_sdrReferenceWhiteLevel = jsonValue.GetInteger("sdrReferenceWhiteLevel");
    m_sdrReferenceWhiteLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue ColorCorrector::Jsonize() const
{
  JsonValue payload;

  if(m_brightnessHasBeenSet)
  {
   payload.WithInteger("brightness", m_brightness);

  }

  if(m_clipLimitsHasBeenSet)
  {
   payload.WithObject("clipLimits", m_clipLimits.Jsonize());

  }

  if(m_colorSpaceConversionHasBeenSet)
  {
   payload.WithString("colorSpaceConversion", ColorSpaceConversionMapper::GetNameForColorSpaceConversion(m_colorSpaceConversion));
  }

  if(m_contrastHasBeenSet)
  {
   payload.WithInteger("contrast", m_contrast);

  }

  if(m_hdr10MetadataHasBeenSet)
  {
   payload.WithObject("hdr10Metadata", m_hdr10Metadata.Jsonize());

  }

  if(m_hdrToSdrToneMapperHasBeenSet)
  {
   payload.WithString("hdrToSdrToneMapper", HDRToSDRToneMapperMapper::GetNameForHDRToSDRToneMapper(m_hdrToSdrToneMapper));
  }

  if(m_hueHasBeenSet)
  {
   payload.WithInteger("hue", m_hue);

  }

  if(m_maxLuminanceHasBeenSet)
  {
   payload.WithInteger("maxLuminance", m_maxLuminance);

  }

  if(m_sampleRangeConversionHasBeenSet)
  {
   payload.WithString("sampleRangeConversion", SampleRangeConversionMapper::GetNameForSampleRangeConversion(m_sampleRangeConversion));
  }

  if(m_saturationHasBeenSet)
  {
   payload.WithInteger("saturation", m_saturation);

  }

  if(m_sdrReferenceWhiteLevelHasBeenSet)
  {
   payload.WithInteger("sdrReferenceWhiteLevel", m_sdrReferenceWhiteLevel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
