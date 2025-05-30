﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WaterfallChartAggregatedFieldWells.h>
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
   * <p>The field well configuration of a waterfall visual.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartFieldWells">AWS
   * API Reference</a></p>
   */
  class WaterfallChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartFieldWells() = default;
    AWS_QUICKSIGHT_API WaterfallChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a waterfall visual.</p>
     */
    inline const WaterfallChartAggregatedFieldWells& GetWaterfallChartAggregatedFieldWells() const { return m_waterfallChartAggregatedFieldWells; }
    inline bool WaterfallChartAggregatedFieldWellsHasBeenSet() const { return m_waterfallChartAggregatedFieldWellsHasBeenSet; }
    template<typename WaterfallChartAggregatedFieldWellsT = WaterfallChartAggregatedFieldWells>
    void SetWaterfallChartAggregatedFieldWells(WaterfallChartAggregatedFieldWellsT&& value) { m_waterfallChartAggregatedFieldWellsHasBeenSet = true; m_waterfallChartAggregatedFieldWells = std::forward<WaterfallChartAggregatedFieldWellsT>(value); }
    template<typename WaterfallChartAggregatedFieldWellsT = WaterfallChartAggregatedFieldWells>
    WaterfallChartFieldWells& WithWaterfallChartAggregatedFieldWells(WaterfallChartAggregatedFieldWellsT&& value) { SetWaterfallChartAggregatedFieldWells(std::forward<WaterfallChartAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    WaterfallChartAggregatedFieldWells m_waterfallChartAggregatedFieldWells;
    bool m_waterfallChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
