﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OptimizedPrompt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

OptimizedPrompt::OptimizedPrompt(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizedPrompt& OptimizedPrompt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textPrompt"))
  {
    m_textPrompt = jsonValue.GetObject("textPrompt");
    m_textPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizedPrompt::Jsonize() const
{
  JsonValue payload;

  if(m_textPromptHasBeenSet)
  {
   payload.WithObject("textPrompt", m_textPrompt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
