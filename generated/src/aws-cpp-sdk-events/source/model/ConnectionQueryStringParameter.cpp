﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ConnectionQueryStringParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

ConnectionQueryStringParameter::ConnectionQueryStringParameter(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionQueryStringParameter& ConnectionQueryStringParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsValueSecret"))
  {
    m_isValueSecret = jsonValue.GetBool("IsValueSecret");
    m_isValueSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionQueryStringParameter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_isValueSecretHasBeenSet)
  {
   payload.WithBool("IsValueSecret", m_isValueSecret);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
