﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/SilentAudio.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

SilentAudio::SilentAudio(JsonView jsonValue)
{
  *this = jsonValue;
}

SilentAudio& SilentAudio::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thresholdSeconds"))
  {
    m_thresholdSeconds = jsonValue.GetInteger("thresholdSeconds");
    m_thresholdSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue SilentAudio::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  if(m_thresholdSecondsHasBeenSet)
  {
   payload.WithInteger("thresholdSeconds", m_thresholdSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
