﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/InvalidSignalDecoder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

InvalidSignalDecoder::InvalidSignalDecoder(JsonView jsonValue)
{
  *this = jsonValue;
}

InvalidSignalDecoder& InvalidSignalDecoder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = SignalDecoderFailureReasonMapper::GetSignalDecoderFailureReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hint"))
  {
    m_hint = jsonValue.GetString("hint");
    m_hintHasBeenSet = true;
  }
  return *this;
}

JsonValue InvalidSignalDecoder::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", SignalDecoderFailureReasonMapper::GetNameForSignalDecoderFailureReason(m_reason));
  }

  if(m_hintHasBeenSet)
  {
   payload.WithString("hint", m_hint);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
