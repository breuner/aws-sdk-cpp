﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateDataSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSetTypeHasBeenSet)
  {
   payload.WithString("dataSetType", DataSetTypeMapper::GetNameForDataSetType(m_dataSetType));
  }

  if(m_dataSetPublicationDateHasBeenSet)
  {
   payload.WithDouble("dataSetPublicationDate", m_dataSetPublicationDate.SecondsWithMSPrecision());
  }

  if(m_roleNameArnHasBeenSet)
  {
   payload.WithString("roleNameArn", m_roleNameArn);

  }

  if(m_destinationS3BucketNameHasBeenSet)
  {
   payload.WithString("destinationS3BucketName", m_destinationS3BucketName);

  }

  if(m_destinationS3PrefixHasBeenSet)
  {
   payload.WithString("destinationS3Prefix", m_destinationS3Prefix);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  if(m_customerDefinedValuesHasBeenSet)
  {
   JsonValue customerDefinedValuesJsonMap;
   for(auto& customerDefinedValuesItem : m_customerDefinedValues)
   {
     customerDefinedValuesJsonMap.WithString(customerDefinedValuesItem.first, customerDefinedValuesItem.second);
   }
   payload.WithObject("customerDefinedValues", std::move(customerDefinedValuesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateDataSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MarketplaceCommerceAnalytics20150701.GenerateDataSet"));
  return headers;

}




