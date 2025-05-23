﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionTaskCompletedEventAttributes.h>
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

DecisionTaskCompletedEventAttributes::DecisionTaskCompletedEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DecisionTaskCompletedEventAttributes& DecisionTaskCompletedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionContext"))
  {
    m_executionContext = jsonValue.GetString("executionContext");
    m_executionContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");
    m_scheduledEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");
    m_startedEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskList"))
  {
    m_taskList = jsonValue.GetObject("taskList");
    m_taskListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskListScheduleToStartTimeout"))
  {
    m_taskListScheduleToStartTimeout = jsonValue.GetString("taskListScheduleToStartTimeout");
    m_taskListScheduleToStartTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue DecisionTaskCompletedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_executionContextHasBeenSet)
  {
   payload.WithString("executionContext", m_executionContext);

  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskListScheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("taskListScheduleToStartTimeout", m_taskListScheduleToStartTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
