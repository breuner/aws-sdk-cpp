﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionTaskScheduledEventAttributes.h>
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

DecisionTaskScheduledEventAttributes::DecisionTaskScheduledEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DecisionTaskScheduledEventAttributes& DecisionTaskScheduledEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskList"))
  {
    m_taskList = jsonValue.GetObject("taskList");
    m_taskListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskPriority"))
  {
    m_taskPriority = jsonValue.GetString("taskPriority");
    m_taskPriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startToCloseTimeout"))
  {
    m_startToCloseTimeout = jsonValue.GetString("startToCloseTimeout");
    m_startToCloseTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduleToStartTimeout"))
  {
    m_scheduleToStartTimeout = jsonValue.GetString("scheduleToStartTimeout");
    m_scheduleToStartTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue DecisionTaskScheduledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskPriorityHasBeenSet)
  {
   payload.WithString("taskPriority", m_taskPriority);

  }

  if(m_startToCloseTimeoutHasBeenSet)
  {
   payload.WithString("startToCloseTimeout", m_startToCloseTimeout);

  }

  if(m_scheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("scheduleToStartTimeout", m_scheduleToStartTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
