﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

StreamSpecification::StreamSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamSpecification& StreamSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamEnabled"))
  {
    m_streamEnabled = jsonValue.GetBool("StreamEnabled");
    m_streamEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamViewType"))
  {
    m_streamViewType = StreamViewTypeMapper::GetStreamViewTypeForName(jsonValue.GetString("StreamViewType"));
    m_streamViewTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_streamEnabledHasBeenSet)
  {
   payload.WithBool("StreamEnabled", m_streamEnabled);

  }

  if(m_streamViewTypeHasBeenSet)
  {
   payload.WithString("StreamViewType", StreamViewTypeMapper::GetNameForStreamViewType(m_streamViewType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
