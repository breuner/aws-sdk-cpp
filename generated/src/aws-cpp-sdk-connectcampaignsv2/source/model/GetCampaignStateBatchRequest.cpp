﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/GetCampaignStateBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCampaignStateBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> campaignIdsJsonList(m_campaignIds.size());
   for(unsigned campaignIdsIndex = 0; campaignIdsIndex < campaignIdsJsonList.GetLength(); ++campaignIdsIndex)
   {
     campaignIdsJsonList[campaignIdsIndex].AsString(m_campaignIds[campaignIdsIndex]);
   }
   payload.WithArray("campaignIds", std::move(campaignIdsJsonList));

  }

  return payload.View().WriteReadable();
}




