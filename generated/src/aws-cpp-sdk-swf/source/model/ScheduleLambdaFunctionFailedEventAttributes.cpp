﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ScheduleLambdaFunctionFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ScheduleLambdaFunctionFailedEventAttributes::ScheduleLambdaFunctionFailedEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduleLambdaFunctionFailedEventAttributes& ScheduleLambdaFunctionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = ScheduleLambdaFunctionFailedCauseMapper::GetScheduleLambdaFunctionFailedCauseForName(jsonValue.GetString("cause"));
    m_causeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");
    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleLambdaFunctionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", ScheduleLambdaFunctionFailedCauseMapper::GetNameForScheduleLambdaFunctionFailedCause(m_cause));
  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
