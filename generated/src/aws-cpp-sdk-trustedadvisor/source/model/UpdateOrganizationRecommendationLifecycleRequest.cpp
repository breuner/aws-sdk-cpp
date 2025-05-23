﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/UpdateOrganizationRecommendationLifecycleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOrganizationRecommendationLifecycleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleStageHasBeenSet)
  {
   payload.WithString("lifecycleStage", UpdateRecommendationLifecycleStageMapper::GetNameForUpdateRecommendationLifecycleStage(m_lifecycleStage));
  }

  if(m_updateReasonHasBeenSet)
  {
   payload.WithString("updateReason", m_updateReason);

  }

  if(m_updateReasonCodeHasBeenSet)
  {
   payload.WithString("updateReasonCode", UpdateRecommendationLifecycleStageReasonCodeMapper::GetNameForUpdateRecommendationLifecycleStageReasonCode(m_updateReasonCode));
  }

  return payload.View().WriteReadable();
}




