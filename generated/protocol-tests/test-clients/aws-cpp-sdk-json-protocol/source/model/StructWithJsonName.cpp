﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/model/StructWithJsonName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

StructWithJsonName::StructWithJsonName(JsonView jsonValue)
{
  *this = jsonValue;
}

StructWithJsonName& StructWithJsonName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue StructWithJsonName::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
