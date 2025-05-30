﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RegisterWorkflowTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterWorkflowTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_defaultTaskStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultTaskStartToCloseTimeout", m_defaultTaskStartToCloseTimeout);

  }

  if(m_defaultExecutionStartToCloseTimeoutHasBeenSet)
  {
   payload.WithString("defaultExecutionStartToCloseTimeout", m_defaultExecutionStartToCloseTimeout);

  }

  if(m_defaultTaskListHasBeenSet)
  {
   payload.WithObject("defaultTaskList", m_defaultTaskList.Jsonize());

  }

  if(m_defaultTaskPriorityHasBeenSet)
  {
   payload.WithString("defaultTaskPriority", m_defaultTaskPriority);

  }

  if(m_defaultChildPolicyHasBeenSet)
  {
   payload.WithString("defaultChildPolicy", ChildPolicyMapper::GetNameForChildPolicy(m_defaultChildPolicy));
  }

  if(m_defaultLambdaRoleHasBeenSet)
  {
   payload.WithString("defaultLambdaRole", m_defaultLambdaRole);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterWorkflowTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RegisterWorkflowType"));
  return headers;

}




