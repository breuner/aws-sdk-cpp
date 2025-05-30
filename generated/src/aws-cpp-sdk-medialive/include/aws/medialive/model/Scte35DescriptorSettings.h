﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35SegmentationDescriptor.h>
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
   * SCTE-35 Descriptor settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35DescriptorSettings">AWS
   * API Reference</a></p>
   */
  class Scte35DescriptorSettings
  {
  public:
    AWS_MEDIALIVE_API Scte35DescriptorSettings() = default;
    AWS_MEDIALIVE_API Scte35DescriptorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35DescriptorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * SCTE-35 Segmentation Descriptor.
     */
    inline const Scte35SegmentationDescriptor& GetSegmentationDescriptorScte35DescriptorSettings() const { return m_segmentationDescriptorScte35DescriptorSettings; }
    inline bool SegmentationDescriptorScte35DescriptorSettingsHasBeenSet() const { return m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet; }
    template<typename SegmentationDescriptorScte35DescriptorSettingsT = Scte35SegmentationDescriptor>
    void SetSegmentationDescriptorScte35DescriptorSettings(SegmentationDescriptorScte35DescriptorSettingsT&& value) { m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet = true; m_segmentationDescriptorScte35DescriptorSettings = std::forward<SegmentationDescriptorScte35DescriptorSettingsT>(value); }
    template<typename SegmentationDescriptorScte35DescriptorSettingsT = Scte35SegmentationDescriptor>
    Scte35DescriptorSettings& WithSegmentationDescriptorScte35DescriptorSettings(SegmentationDescriptorScte35DescriptorSettingsT&& value) { SetSegmentationDescriptorScte35DescriptorSettings(std::forward<SegmentationDescriptorScte35DescriptorSettingsT>(value)); return *this;}
    ///@}
  private:

    Scte35SegmentationDescriptor m_segmentationDescriptorScte35DescriptorSettings;
    bool m_segmentationDescriptorScte35DescriptorSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
