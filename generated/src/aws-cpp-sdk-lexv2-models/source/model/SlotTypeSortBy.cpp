﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeSortBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotTypeSortBy::SlotTypeSortBy(JsonView jsonValue)
{
  *this = jsonValue;
}

SlotTypeSortBy& SlotTypeSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = SlotTypeSortAttributeMapper::GetSlotTypeSortAttributeForName(jsonValue.GetString("attribute"));
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("order"));
    m_orderHasBeenSet = true;
  }
  return *this;
}

JsonValue SlotTypeSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", SlotTypeSortAttributeMapper::GetNameForSlotTypeSortAttribute(m_attribute));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", SortOrderMapper::GetNameForSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
