﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeoSpatialColumnGroup.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Groupings of columns that work together in certain Amazon QuickSight
   * features. This is a variant type structure. For this structure to be valid, only
   * one of the attributes can be non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnGroup">AWS
   * API Reference</a></p>
   */
  class ColumnGroup
  {
  public:
    AWS_QUICKSIGHT_API ColumnGroup() = default;
    AWS_QUICKSIGHT_API ColumnGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geospatial column group that denotes a hierarchy.</p>
     */
    inline const GeoSpatialColumnGroup& GetGeoSpatialColumnGroup() const { return m_geoSpatialColumnGroup; }
    inline bool GeoSpatialColumnGroupHasBeenSet() const { return m_geoSpatialColumnGroupHasBeenSet; }
    template<typename GeoSpatialColumnGroupT = GeoSpatialColumnGroup>
    void SetGeoSpatialColumnGroup(GeoSpatialColumnGroupT&& value) { m_geoSpatialColumnGroupHasBeenSet = true; m_geoSpatialColumnGroup = std::forward<GeoSpatialColumnGroupT>(value); }
    template<typename GeoSpatialColumnGroupT = GeoSpatialColumnGroup>
    ColumnGroup& WithGeoSpatialColumnGroup(GeoSpatialColumnGroupT&& value) { SetGeoSpatialColumnGroup(std::forward<GeoSpatialColumnGroupT>(value)); return *this;}
    ///@}
  private:

    GeoSpatialColumnGroup m_geoSpatialColumnGroup;
    bool m_geoSpatialColumnGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
