﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("accessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_autoDeployHasBeenSet)
  {
   payload.WithBool("autoDeploy", m_autoDeploy);

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

  }

  if(m_defaultRouteSettingsHasBeenSet)
  {
   payload.WithObject("defaultRouteSettings", m_defaultRouteSettings.Jsonize());

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_routeSettingsHasBeenSet)
  {
   JsonValue routeSettingsJsonMap;
   for(auto& routeSettingsItem : m_routeSettings)
   {
     routeSettingsJsonMap.WithObject(routeSettingsItem.first, routeSettingsItem.second.Jsonize());
   }
   payload.WithObject("routeSettings", std::move(routeSettingsJsonMap));

  }

  if(m_stageVariablesHasBeenSet)
  {
   JsonValue stageVariablesJsonMap;
   for(auto& stageVariablesItem : m_stageVariables)
   {
     stageVariablesJsonMap.WithString(stageVariablesItem.first, stageVariablesItem.second);
   }
   payload.WithObject("stageVariables", std::move(stageVariablesJsonMap));

  }

  return payload.View().WriteReadable();
}




