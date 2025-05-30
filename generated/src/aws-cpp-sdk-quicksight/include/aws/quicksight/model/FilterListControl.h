﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ListControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>
#include <aws/quicksight/model/FilterSelectableValues.h>
#include <aws/quicksight/model/CascadingControlConfiguration.h>
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
   * <p>A control to display a list of buttons or boxes. This is used to select
   * either a single value or multiple values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterListControl">AWS
   * API Reference</a></p>
   */
  class FilterListControl
  {
  public:
    AWS_QUICKSIGHT_API FilterListControl() = default;
    AWS_QUICKSIGHT_API FilterListControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterListControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const { return m_filterControlId; }
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
    template<typename FilterControlIdT = Aws::String>
    void SetFilterControlId(FilterControlIdT&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::forward<FilterControlIdT>(value); }
    template<typename FilterControlIdT = Aws::String>
    FilterListControl& WithFilterControlId(FilterControlIdT&& value) { SetFilterControlId(std::forward<FilterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FilterListControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const { return m_sourceFilterId; }
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
    template<typename SourceFilterIdT = Aws::String>
    void SetSourceFilterId(SourceFilterIdT&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::forward<SourceFilterIdT>(value); }
    template<typename SourceFilterIdT = Aws::String>
    FilterListControl& WithSourceFilterId(SourceFilterIdT&& value) { SetSourceFilterId(std::forward<SourceFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const ListControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    FilterListControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline SheetControlListType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlListType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FilterListControl& WithType(SheetControlListType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const FilterSelectableValues& GetSelectableValues() const { return m_selectableValues; }
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }
    template<typename SelectableValuesT = FilterSelectableValues>
    void SetSelectableValues(SelectableValuesT&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::forward<SelectableValuesT>(value); }
    template<typename SelectableValuesT = FilterSelectableValues>
    FilterListControl& WithSelectableValues(SelectableValuesT&& value) { SetSelectableValues(std::forward<SelectableValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline const CascadingControlConfiguration& GetCascadingControlConfiguration() const { return m_cascadingControlConfiguration; }
    inline bool CascadingControlConfigurationHasBeenSet() const { return m_cascadingControlConfigurationHasBeenSet; }
    template<typename CascadingControlConfigurationT = CascadingControlConfiguration>
    void SetCascadingControlConfiguration(CascadingControlConfigurationT&& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = std::forward<CascadingControlConfigurationT>(value); }
    template<typename CascadingControlConfigurationT = CascadingControlConfiguration>
    FilterListControl& WithCascadingControlConfiguration(CascadingControlConfigurationT&& value) { SetCascadingControlConfiguration(std::forward<CascadingControlConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    ListControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type{SheetControlListType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CascadingControlConfiguration m_cascadingControlConfiguration;
    bool m_cascadingControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
