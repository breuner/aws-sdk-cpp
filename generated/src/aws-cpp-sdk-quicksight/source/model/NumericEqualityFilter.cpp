﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericEqualityFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

NumericEqualityFilter::NumericEqualityFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

NumericEqualityFilter& NumericEqualityFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterId"))
  {
    m_filterId = jsonValue.GetString("FilterId");
    m_filterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectAllOptions"))
  {
    m_selectAllOptions = NumericFilterSelectAllOptionsMapper::GetNumericFilterSelectAllOptionsForName(jsonValue.GetString("SelectAllOptions"));
    m_selectAllOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchOperator"))
  {
    m_matchOperator = NumericEqualityMatchOperatorMapper::GetNumericEqualityMatchOperatorForName(jsonValue.GetString("MatchOperator"));
    m_matchOperatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregationFunction"))
  {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");
    m_aggregationFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");
    m_parameterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));
    m_nullOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultFilterControlConfiguration"))
  {
    m_defaultFilterControlConfiguration = jsonValue.GetObject("DefaultFilterControlConfiguration");
    m_defaultFilterControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NumericEqualityFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterIdHasBeenSet)
  {
   payload.WithString("FilterId", m_filterId);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_selectAllOptionsHasBeenSet)
  {
   payload.WithString("SelectAllOptions", NumericFilterSelectAllOptionsMapper::GetNameForNumericFilterSelectAllOptions(m_selectAllOptions));
  }

  if(m_matchOperatorHasBeenSet)
  {
   payload.WithString("MatchOperator", NumericEqualityMatchOperatorMapper::GetNameForNumericEqualityMatchOperator(m_matchOperator));
  }

  if(m_aggregationFunctionHasBeenSet)
  {
   payload.WithObject("AggregationFunction", m_aggregationFunction.Jsonize());

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  if(m_defaultFilterControlConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultFilterControlConfiguration", m_defaultFilterControlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
