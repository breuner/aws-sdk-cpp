﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
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

DateTimePickerControlDisplayOptions::DateTimePickerControlDisplayOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DateTimePickerControlDisplayOptions& DateTimePickerControlDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TitleOptions"))
  {
    m_titleOptions = jsonValue.GetObject("TitleOptions");
    m_titleOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateTimeFormat"))
  {
    m_dateTimeFormat = jsonValue.GetString("DateTimeFormat");
    m_dateTimeFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InfoIconLabelOptions"))
  {
    m_infoIconLabelOptions = jsonValue.GetObject("InfoIconLabelOptions");
    m_infoIconLabelOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HelperTextVisibility"))
  {
    m_helperTextVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("HelperTextVisibility"));
    m_helperTextVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateIconVisibility"))
  {
    m_dateIconVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("DateIconVisibility"));
    m_dateIconVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue DateTimePickerControlDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_titleOptionsHasBeenSet)
  {
   payload.WithObject("TitleOptions", m_titleOptions.Jsonize());

  }

  if(m_dateTimeFormatHasBeenSet)
  {
   payload.WithString("DateTimeFormat", m_dateTimeFormat);

  }

  if(m_infoIconLabelOptionsHasBeenSet)
  {
   payload.WithObject("InfoIconLabelOptions", m_infoIconLabelOptions.Jsonize());

  }

  if(m_helperTextVisibilityHasBeenSet)
  {
   payload.WithString("HelperTextVisibility", VisibilityMapper::GetNameForVisibility(m_helperTextVisibility));
  }

  if(m_dateIconVisibilityHasBeenSet)
  {
   payload.WithString("DateIconVisibility", VisibilityMapper::GetNameForVisibility(m_dateIconVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
