﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DocumentText.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

DocumentText::DocumentText(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentText& DocumentText::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("highlights"))
  {
    Aws::Utils::Array<JsonView> highlightsJsonList = jsonValue.GetArray("highlights");
    for(unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex)
    {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsObject());
    }
    m_highlightsHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentText::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_highlightsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> highlightsJsonList(m_highlights.size());
   for(unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex)
   {
     highlightsJsonList[highlightsIndex].AsObject(m_highlights[highlightsIndex].Jsonize());
   }
   payload.WithArray("highlights", std::move(highlightsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
