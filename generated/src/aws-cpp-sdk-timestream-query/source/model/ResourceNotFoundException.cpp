﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ResourceNotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ResourceNotFoundException::ResourceNotFoundException(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceNotFoundException& ResourceNotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledQueryArn"))
  {
    m_scheduledQueryArn = jsonValue.GetString("ScheduledQueryArn");
    m_scheduledQueryArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceNotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_scheduledQueryArnHasBeenSet)
  {
   payload.WithString("ScheduledQueryArn", m_scheduledQueryArn);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
