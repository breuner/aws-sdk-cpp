﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CreateLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DLM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", SettablePolicyStateValuesMapper::GetNameForSettablePolicyStateValues(m_state));
  }

  if(m_policyDetailsHasBeenSet)
  {
   payload.WithObject("PolicyDetails", m_policyDetails.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_defaultPolicyHasBeenSet)
  {
   payload.WithString("DefaultPolicy", DefaultPolicyTypeValuesMapper::GetNameForDefaultPolicyTypeValues(m_defaultPolicy));
  }

  if(m_createIntervalHasBeenSet)
  {
   payload.WithInteger("CreateInterval", m_createInterval);

  }

  if(m_retainIntervalHasBeenSet)
  {
   payload.WithInteger("RetainInterval", m_retainInterval);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("CopyTags", m_copyTags);

  }

  if(m_extendDeletionHasBeenSet)
  {
   payload.WithBool("ExtendDeletion", m_extendDeletion);

  }

  if(m_crossRegionCopyTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossRegionCopyTargetsJsonList(m_crossRegionCopyTargets.size());
   for(unsigned crossRegionCopyTargetsIndex = 0; crossRegionCopyTargetsIndex < crossRegionCopyTargetsJsonList.GetLength(); ++crossRegionCopyTargetsIndex)
   {
     crossRegionCopyTargetsJsonList[crossRegionCopyTargetsIndex].AsObject(m_crossRegionCopyTargets[crossRegionCopyTargetsIndex].Jsonize());
   }
   payload.WithArray("CrossRegionCopyTargets", std::move(crossRegionCopyTargetsJsonList));

  }

  if(m_exclusionsHasBeenSet)
  {
   payload.WithObject("Exclusions", m_exclusions.Jsonize());

  }

  return payload.View().WriteReadable();
}




