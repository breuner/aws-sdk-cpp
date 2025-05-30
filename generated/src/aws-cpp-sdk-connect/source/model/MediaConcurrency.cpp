﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaConcurrency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

MediaConcurrency::MediaConcurrency(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaConcurrency& MediaConcurrency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Concurrency"))
  {
    m_concurrency = jsonValue.GetInteger("Concurrency");
    m_concurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CrossChannelBehavior"))
  {
    m_crossChannelBehavior = jsonValue.GetObject("CrossChannelBehavior");
    m_crossChannelBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConcurrency::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if(m_concurrencyHasBeenSet)
  {
   payload.WithInteger("Concurrency", m_concurrency);

  }

  if(m_crossChannelBehaviorHasBeenSet)
  {
   payload.WithObject("CrossChannelBehavior", m_crossChannelBehavior.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
