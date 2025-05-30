﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/SmsChannelSubtypeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

SmsChannelSubtypeConfig::SmsChannelSubtypeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SmsChannelSubtypeConfig& SmsChannelSubtypeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetDouble("capacity");
    m_capacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outboundMode"))
  {
    m_outboundMode = jsonValue.GetObject("outboundMode");
    m_outboundModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultOutboundConfig"))
  {
    m_defaultOutboundConfig = jsonValue.GetObject("defaultOutboundConfig");
    m_defaultOutboundConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SmsChannelSubtypeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithDouble("capacity", m_capacity);

  }

  if(m_outboundModeHasBeenSet)
  {
   payload.WithObject("outboundMode", m_outboundMode.Jsonize());

  }

  if(m_defaultOutboundConfigHasBeenSet)
  {
   payload.WithObject("defaultOutboundConfig", m_defaultOutboundConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
