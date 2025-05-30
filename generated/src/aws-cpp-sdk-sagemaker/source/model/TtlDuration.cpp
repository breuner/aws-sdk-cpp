﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TtlDuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TtlDuration::TtlDuration(JsonView jsonValue)
{
  *this = jsonValue;
}

TtlDuration& TtlDuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = TtlDurationUnitMapper::GetTtlDurationUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue TtlDuration::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", TtlDurationUnitMapper::GetNameForTtlDurationUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
