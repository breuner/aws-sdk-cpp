﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConditionExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConditionExpression::ConditionExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionExpression& ConditionExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetString("Condition");
    m_conditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetColumn"))
  {
    m_targetColumn = jsonValue.GetString("TargetColumn");
    m_targetColumnHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionExpression::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", m_condition);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_targetColumnHasBeenSet)
  {
   payload.WithString("TargetColumn", m_targetColumn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
