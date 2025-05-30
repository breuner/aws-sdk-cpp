﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartDataQualityRuleRecommendationRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDataQualityRuleRecommendationRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_createdRulesetNameHasBeenSet)
  {
   payload.WithString("CreatedRulesetName", m_createdRulesetName);

  }

  if(m_dataQualitySecurityConfigurationHasBeenSet)
  {
   payload.WithString("DataQualitySecurityConfiguration", m_dataQualitySecurityConfiguration);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDataQualityRuleRecommendationRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartDataQualityRuleRecommendationRun"));
  return headers;

}




