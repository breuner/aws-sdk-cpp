﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionContinuedAsNewEventAttributes.h>
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

WorkflowExecutionContinuedAsNewEventAttributes::WorkflowExecutionContinuedAsNewEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkflowExecutionContinuedAsNewEventAttributes& WorkflowExecutionContinuedAsNewEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");
    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("newExecutionRunId"))
  {
    m_newExecutionRunId = jsonValue.GetString("newExecutionRunId");
    m_newExecutionRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionStartToCloseTimeout"))
  {
    m_executionStartToCloseTimeout = jsonValue.GetString("executionStartToCloseTimeout");
    m_executionStartToCloseTimeoutHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("taskStartToCloseTimeout"))
  {
    m_taskStartToCloseTimeout = jsonValue.GetString("taskStartToCloseTimeout");
    m_taskStartToCloseTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("childPolicy"))
  {
    m_childPolicy = ChildPolicyMapper::GetChildPolicyForName(jsonValue.GetString("childPolicy"));
    m_childPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("tagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsString());
    }
    m_tagListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");
    m_workflowTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaRole"))
  {
    m_lambdaRole = jsonValue.GetString("lambdaRole");
    m_lambdaRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowExecutionContinuedAsNewEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  if(m_newExecutionRunIdHasBeenSet)
  {
   payload.WithString("newExecutionRunId", m_newExecutionRunId);

  }

  if(m_executionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("executionStartToCloseTimeout", m_executionStartToCloseTimeout);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskPriorityHasBeenSet)
  {
   payload.WithString("taskPriority", m_taskPriority);

  }

  if(m_taskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("taskStartToCloseTimeout", m_taskStartToCloseTimeout);

  }

  if(m_childPolicyHasBeenSet)
  {
   payload.WithString("childPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_childPolicy));
  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsString(m_tagList[tagListIndex]);
   }
   payload.WithArray("tagList", std::move(tagListJsonList));

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_lambdaRoleHasBeenSet)
  {
   payload.WithString("lambdaRole", m_lambdaRole);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
