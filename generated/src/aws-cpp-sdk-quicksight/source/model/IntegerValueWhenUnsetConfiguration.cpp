﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IntegerValueWhenUnsetConfiguration.h>
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

IntegerValueWhenUnsetConfiguration::IntegerValueWhenUnsetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegerValueWhenUnsetConfiguration& IntegerValueWhenUnsetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueWhenUnsetOption"))
  {
    m_valueWhenUnsetOption = ValueWhenUnsetOptionMapper::GetValueWhenUnsetOptionForName(jsonValue.GetString("ValueWhenUnsetOption"));
    m_valueWhenUnsetOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomValue"))
  {
    m_customValue = jsonValue.GetInt64("CustomValue");
    m_customValueHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegerValueWhenUnsetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_valueWhenUnsetOptionHasBeenSet)
  {
   payload.WithString("ValueWhenUnsetOption", ValueWhenUnsetOptionMapper::GetNameForValueWhenUnsetOption(m_valueWhenUnsetOption));
  }

  if(m_customValueHasBeenSet)
  {
   payload.WithInt64("CustomValue", m_customValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
