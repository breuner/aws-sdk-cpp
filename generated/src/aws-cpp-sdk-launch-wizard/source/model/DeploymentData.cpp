﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/DeploymentData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

DeploymentData::DeploymentData(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentData& DeploymentData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("deletedAt");
    m_deletedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentArn"))
  {
    m_deploymentArn = jsonValue.GetString("deploymentArn");
    m_deploymentArnHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("patternName"))
  {
    m_patternName = jsonValue.GetString("patternName");
    m_patternNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceGroup"))
  {
    m_resourceGroup = jsonValue.GetString("resourceGroup");
    m_resourceGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specifications"))
  {
    Aws::Map<Aws::String, JsonView> specificationsJsonMap = jsonValue.GetObject("specifications").GetAllObjects();
    for(auto& specificationsItem : specificationsJsonMap)
    {
      m_specifications[specificationsItem.first] = specificationsItem.second.AsString();
    }
    m_specificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadName"))
  {
    m_workloadName = jsonValue.GetString("workloadName");
    m_workloadNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentData::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("deletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  if(m_deploymentArnHasBeenSet)
  {
   payload.WithString("deploymentArn", m_deploymentArn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_patternNameHasBeenSet)
  {
   payload.WithString("patternName", m_patternName);

  }

  if(m_resourceGroupHasBeenSet)
  {
   payload.WithString("resourceGroup", m_resourceGroup);

  }

  if(m_specificationsHasBeenSet)
  {
   JsonValue specificationsJsonMap;
   for(auto& specificationsItem : m_specifications)
   {
     specificationsJsonMap.WithString(specificationsItem.first, specificationsItem.second);
   }
   payload.WithObject("specifications", std::move(specificationsJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeploymentStatusMapper::GetNameForDeploymentStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  return payload;
}

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
