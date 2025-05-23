﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265Settings.h>
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

H265Settings::H265Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

H265Settings& H265Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = H265AdaptiveQuantizationMapper::GetH265AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));
    m_adaptiveQuantizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alternateTransferFunctionSei"))
  {
    m_alternateTransferFunctionSei = H265AlternateTransferFunctionSeiMapper::GetH265AlternateTransferFunctionSeiForName(jsonValue.GetString("alternateTransferFunctionSei"));
    m_alternateTransferFunctionSeiHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bandwidthReductionFilter"))
  {
    m_bandwidthReductionFilter = jsonValue.GetObject("bandwidthReductionFilter");
    m_bandwidthReductionFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codecLevel"))
  {
    m_codecLevel = H265CodecLevelMapper::GetH265CodecLevelForName(jsonValue.GetString("codecLevel"));
    m_codecLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = H265CodecProfileMapper::GetH265CodecProfileForName(jsonValue.GetString("codecProfile"));
    m_codecProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deblocking"))
  {
    m_deblocking = H265DeblockingMapper::GetH265DeblockingForName(jsonValue.GetString("deblocking"));
    m_deblockingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dynamicSubGop"))
  {
    m_dynamicSubGop = H265DynamicSubGopMapper::GetH265DynamicSubGopForName(jsonValue.GetString("dynamicSubGop"));
    m_dynamicSubGopHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endOfStreamMarkers"))
  {
    m_endOfStreamMarkers = H265EndOfStreamMarkersMapper::GetH265EndOfStreamMarkersForName(jsonValue.GetString("endOfStreamMarkers"));
    m_endOfStreamMarkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flickerAdaptiveQuantization"))
  {
    m_flickerAdaptiveQuantization = H265FlickerAdaptiveQuantizationMapper::GetH265FlickerAdaptiveQuantizationForName(jsonValue.GetString("flickerAdaptiveQuantization"));
    m_flickerAdaptiveQuantizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = H265FramerateControlMapper::GetH265FramerateControlForName(jsonValue.GetString("framerateControl"));
    m_framerateControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = H265FramerateConversionAlgorithmMapper::GetH265FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));
    m_framerateConversionAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateDenominator"))
  {
    m_framerateDenominator = jsonValue.GetInteger("framerateDenominator");
    m_framerateDenominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateNumerator"))
  {
    m_framerateNumerator = jsonValue.GetInteger("framerateNumerator");
    m_framerateNumeratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = H265GopBReferenceMapper::GetH265GopBReferenceForName(jsonValue.GetString("gopBReference"));
    m_gopBReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");
    m_gopClosedCadenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");
    m_gopSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = H265GopSizeUnitsMapper::GetH265GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));
    m_gopSizeUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hrdBufferFinalFillPercentage"))
  {
    m_hrdBufferFinalFillPercentage = jsonValue.GetInteger("hrdBufferFinalFillPercentage");
    m_hrdBufferFinalFillPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hrdBufferInitialFillPercentage"))
  {
    m_hrdBufferInitialFillPercentage = jsonValue.GetInteger("hrdBufferInitialFillPercentage");
    m_hrdBufferInitialFillPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");
    m_hrdBufferSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = H265InterlaceModeMapper::GetH265InterlaceModeForName(jsonValue.GetString("interlaceMode"));
    m_interlaceModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");
    m_maxBitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minIInterval"))
  {
    m_minIInterval = jsonValue.GetInteger("minIInterval");
    m_minIIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberBFramesBetweenReferenceFrames"))
  {
    m_numberBFramesBetweenReferenceFrames = jsonValue.GetInteger("numberBFramesBetweenReferenceFrames");
    m_numberBFramesBetweenReferenceFramesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberReferenceFrames"))
  {
    m_numberReferenceFrames = jsonValue.GetInteger("numberReferenceFrames");
    m_numberReferenceFramesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = H265ParControlMapper::GetH265ParControlForName(jsonValue.GetString("parControl"));
    m_parControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parDenominator"))
  {
    m_parDenominator = jsonValue.GetInteger("parDenominator");
    m_parDenominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parNumerator"))
  {
    m_parNumerator = jsonValue.GetInteger("parNumerator");
    m_parNumeratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("perFrameMetrics"))
  {
    Aws::Utils::Array<JsonView> perFrameMetricsJsonList = jsonValue.GetArray("perFrameMetrics");
    for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
    {
      m_perFrameMetrics.push_back(FrameMetricTypeMapper::GetFrameMetricTypeForName(perFrameMetricsJsonList[perFrameMetricsIndex].AsString()));
    }
    m_perFrameMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = H265QualityTuningLevelMapper::GetH265QualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));
    m_qualityTuningLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qvbrSettings"))
  {
    m_qvbrSettings = jsonValue.GetObject("qvbrSettings");
    m_qvbrSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = H265RateControlModeMapper::GetH265RateControlModeForName(jsonValue.GetString("rateControlMode"));
    m_rateControlModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleAdaptiveOffsetFilterMode"))
  {
    m_sampleAdaptiveOffsetFilterMode = H265SampleAdaptiveOffsetFilterModeMapper::GetH265SampleAdaptiveOffsetFilterModeForName(jsonValue.GetString("sampleAdaptiveOffsetFilterMode"));
    m_sampleAdaptiveOffsetFilterModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanTypeConversionMode"))
  {
    m_scanTypeConversionMode = H265ScanTypeConversionModeMapper::GetH265ScanTypeConversionModeForName(jsonValue.GetString("scanTypeConversionMode"));
    m_scanTypeConversionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = H265SceneChangeDetectMapper::GetH265SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));
    m_sceneChangeDetectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");
    m_slicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = H265SlowPalMapper::GetH265SlowPalForName(jsonValue.GetString("slowPal"));
    m_slowPalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spatialAdaptiveQuantization"))
  {
    m_spatialAdaptiveQuantization = H265SpatialAdaptiveQuantizationMapper::GetH265SpatialAdaptiveQuantizationForName(jsonValue.GetString("spatialAdaptiveQuantization"));
    m_spatialAdaptiveQuantizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = H265TelecineMapper::GetH265TelecineForName(jsonValue.GetString("telecine"));
    m_telecineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("temporalAdaptiveQuantization"))
  {
    m_temporalAdaptiveQuantization = H265TemporalAdaptiveQuantizationMapper::GetH265TemporalAdaptiveQuantizationForName(jsonValue.GetString("temporalAdaptiveQuantization"));
    m_temporalAdaptiveQuantizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("temporalIds"))
  {
    m_temporalIds = H265TemporalIdsMapper::GetH265TemporalIdsForName(jsonValue.GetString("temporalIds"));
    m_temporalIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tiles"))
  {
    m_tiles = H265TilesMapper::GetH265TilesForName(jsonValue.GetString("tiles"));
    m_tilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unregisteredSeiTimecode"))
  {
    m_unregisteredSeiTimecode = H265UnregisteredSeiTimecodeMapper::GetH265UnregisteredSeiTimecodeForName(jsonValue.GetString("unregisteredSeiTimecode"));
    m_unregisteredSeiTimecodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("writeMp4PackagingType"))
  {
    m_writeMp4PackagingType = H265WriteMp4PackagingTypeMapper::GetH265WriteMp4PackagingTypeForName(jsonValue.GetString("writeMp4PackagingType"));
    m_writeMp4PackagingTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue H265Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", H265AdaptiveQuantizationMapper::GetNameForH265AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_alternateTransferFunctionSeiHasBeenSet)
  {
   payload.WithString("alternateTransferFunctionSei", H265AlternateTransferFunctionSeiMapper::GetNameForH265AlternateTransferFunctionSei(m_alternateTransferFunctionSei));
  }

  if(m_bandwidthReductionFilterHasBeenSet)
  {
   payload.WithObject("bandwidthReductionFilter", m_bandwidthReductionFilter.Jsonize());

  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_codecLevelHasBeenSet)
  {
   payload.WithString("codecLevel", H265CodecLevelMapper::GetNameForH265CodecLevel(m_codecLevel));
  }

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", H265CodecProfileMapper::GetNameForH265CodecProfile(m_codecProfile));
  }

  if(m_deblockingHasBeenSet)
  {
   payload.WithString("deblocking", H265DeblockingMapper::GetNameForH265Deblocking(m_deblocking));
  }

  if(m_dynamicSubGopHasBeenSet)
  {
   payload.WithString("dynamicSubGop", H265DynamicSubGopMapper::GetNameForH265DynamicSubGop(m_dynamicSubGop));
  }

  if(m_endOfStreamMarkersHasBeenSet)
  {
   payload.WithString("endOfStreamMarkers", H265EndOfStreamMarkersMapper::GetNameForH265EndOfStreamMarkers(m_endOfStreamMarkers));
  }

  if(m_flickerAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("flickerAdaptiveQuantization", H265FlickerAdaptiveQuantizationMapper::GetNameForH265FlickerAdaptiveQuantization(m_flickerAdaptiveQuantization));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", H265FramerateControlMapper::GetNameForH265FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", H265FramerateConversionAlgorithmMapper::GetNameForH265FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", H265GopBReferenceMapper::GetNameForH265GopBReference(m_gopBReference));
  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", H265GopSizeUnitsMapper::GetNameForH265GopSizeUnits(m_gopSizeUnits));
  }

  if(m_hrdBufferFinalFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferFinalFillPercentage", m_hrdBufferFinalFillPercentage);

  }

  if(m_hrdBufferInitialFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferInitialFillPercentage", m_hrdBufferInitialFillPercentage);

  }

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", H265InterlaceModeMapper::GetNameForH265InterlaceMode(m_interlaceMode));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_numberBFramesBetweenReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberBFramesBetweenReferenceFrames", m_numberBFramesBetweenReferenceFrames);

  }

  if(m_numberReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberReferenceFrames", m_numberReferenceFrames);

  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", H265ParControlMapper::GetNameForH265ParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_perFrameMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> perFrameMetricsJsonList(m_perFrameMetrics.size());
   for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
   {
     perFrameMetricsJsonList[perFrameMetricsIndex].AsString(FrameMetricTypeMapper::GetNameForFrameMetricType(m_perFrameMetrics[perFrameMetricsIndex]));
   }
   payload.WithArray("perFrameMetrics", std::move(perFrameMetricsJsonList));

  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", H265QualityTuningLevelMapper::GetNameForH265QualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_qvbrSettingsHasBeenSet)
  {
   payload.WithObject("qvbrSettings", m_qvbrSettings.Jsonize());

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", H265RateControlModeMapper::GetNameForH265RateControlMode(m_rateControlMode));
  }

  if(m_sampleAdaptiveOffsetFilterModeHasBeenSet)
  {
   payload.WithString("sampleAdaptiveOffsetFilterMode", H265SampleAdaptiveOffsetFilterModeMapper::GetNameForH265SampleAdaptiveOffsetFilterMode(m_sampleAdaptiveOffsetFilterMode));
  }

  if(m_scanTypeConversionModeHasBeenSet)
  {
   payload.WithString("scanTypeConversionMode", H265ScanTypeConversionModeMapper::GetNameForH265ScanTypeConversionMode(m_scanTypeConversionMode));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", H265SceneChangeDetectMapper::GetNameForH265SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", H265SlowPalMapper::GetNameForH265SlowPal(m_slowPal));
  }

  if(m_spatialAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("spatialAdaptiveQuantization", H265SpatialAdaptiveQuantizationMapper::GetNameForH265SpatialAdaptiveQuantization(m_spatialAdaptiveQuantization));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", H265TelecineMapper::GetNameForH265Telecine(m_telecine));
  }

  if(m_temporalAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("temporalAdaptiveQuantization", H265TemporalAdaptiveQuantizationMapper::GetNameForH265TemporalAdaptiveQuantization(m_temporalAdaptiveQuantization));
  }

  if(m_temporalIdsHasBeenSet)
  {
   payload.WithString("temporalIds", H265TemporalIdsMapper::GetNameForH265TemporalIds(m_temporalIds));
  }

  if(m_tilesHasBeenSet)
  {
   payload.WithString("tiles", H265TilesMapper::GetNameForH265Tiles(m_tiles));
  }

  if(m_unregisteredSeiTimecodeHasBeenSet)
  {
   payload.WithString("unregisteredSeiTimecode", H265UnregisteredSeiTimecodeMapper::GetNameForH265UnregisteredSeiTimecode(m_unregisteredSeiTimecode));
  }

  if(m_writeMp4PackagingTypeHasBeenSet)
  {
   payload.WithString("writeMp4PackagingType", H265WriteMp4PackagingTypeMapper::GetNameForH265WriteMp4PackagingType(m_writeMp4PackagingType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
