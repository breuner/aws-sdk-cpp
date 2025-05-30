﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentActionGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

AgentActionGroup::AgentActionGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentActionGroup& AgentActionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroupExecutor"))
  {
    m_actionGroupExecutor = jsonValue.GetObject("actionGroupExecutor");
    m_actionGroupExecutorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionGroupId"))
  {
    m_actionGroupId = jsonValue.GetString("actionGroupId");
    m_actionGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionGroupName"))
  {
    m_actionGroupName = jsonValue.GetString("actionGroupName");
    m_actionGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionGroupState"))
  {
    m_actionGroupState = ActionGroupStateMapper::GetActionGroupStateForName(jsonValue.GetString("actionGroupState"));
    m_actionGroupStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiSchema"))
  {
    m_apiSchema = jsonValue.GetObject("apiSchema");
    m_apiSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("functionSchema"))
  {
    m_functionSchema = jsonValue.GetObject("functionSchema");
    m_functionSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentActionGroupSignatureParams"))
  {
    Aws::Map<Aws::String, JsonView> parentActionGroupSignatureParamsJsonMap = jsonValue.GetObject("parentActionGroupSignatureParams").GetAllObjects();
    for(auto& parentActionGroupSignatureParamsItem : parentActionGroupSignatureParamsJsonMap)
    {
      m_parentActionGroupSignatureParams[parentActionGroupSignatureParamsItem.first] = parentActionGroupSignatureParamsItem.second.AsString();
    }
    m_parentActionGroupSignatureParamsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentActionSignature"))
  {
    m_parentActionSignature = ActionGroupSignatureMapper::GetActionGroupSignatureForName(jsonValue.GetString("parentActionSignature"));
    m_parentActionSignatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentActionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupExecutorHasBeenSet)
  {
   payload.WithObject("actionGroupExecutor", m_actionGroupExecutor.Jsonize());

  }

  if(m_actionGroupIdHasBeenSet)
  {
   payload.WithString("actionGroupId", m_actionGroupId);

  }

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_actionGroupStateHasBeenSet)
  {
   payload.WithString("actionGroupState", ActionGroupStateMapper::GetNameForActionGroupState(m_actionGroupState));
  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_functionSchemaHasBeenSet)
  {
   payload.WithObject("functionSchema", m_functionSchema.Jsonize());

  }

  if(m_parentActionGroupSignatureParamsHasBeenSet)
  {
   JsonValue parentActionGroupSignatureParamsJsonMap;
   for(auto& parentActionGroupSignatureParamsItem : m_parentActionGroupSignatureParams)
   {
     parentActionGroupSignatureParamsJsonMap.WithString(parentActionGroupSignatureParamsItem.first, parentActionGroupSignatureParamsItem.second);
   }
   payload.WithObject("parentActionGroupSignatureParams", std::move(parentActionGroupSignatureParamsJsonMap));

  }

  if(m_parentActionSignatureHasBeenSet)
  {
   payload.WithString("parentActionSignature", ActionGroupSignatureMapper::GetNameForActionGroupSignature(m_parentActionSignature));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
