﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StartAnalysisReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAnalysisReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallNameHasBeenSet)
  {
   payload.WithString("FirewallName", m_firewallName);

  }

  if(m_firewallArnHasBeenSet)
  {
   payload.WithString("FirewallArn", m_firewallArn);

  }

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("AnalysisType", EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(m_analysisType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAnalysisReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.StartAnalysisReport"));
  return headers;

}




