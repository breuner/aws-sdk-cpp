﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EmailContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

EmailContent::EmailContent(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailContent& EmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Simple"))
  {
    m_simple = jsonValue.GetObject("Simple");
    m_simpleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Raw"))
  {
    m_raw = jsonValue.GetObject("Raw");
    m_rawHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetObject("Template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_simpleHasBeenSet)
  {
   payload.WithObject("Simple", m_simple.Jsonize());

  }

  if(m_rawHasBeenSet)
  {
   payload.WithObject("Raw", m_raw.Jsonize());

  }

  if(m_templateHasBeenSet)
  {
   payload.WithObject("Template", m_template.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
