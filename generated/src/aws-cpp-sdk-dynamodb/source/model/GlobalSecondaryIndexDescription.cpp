﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalSecondaryIndexDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

GlobalSecondaryIndexDescription::GlobalSecondaryIndexDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalSecondaryIndexDescription& GlobalSecondaryIndexDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeySchema"))
  {
    Aws::Utils::Array<JsonView> keySchemaJsonList = jsonValue.GetArray("KeySchema");
    for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
    {
      m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
    }
    m_keySchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Projection"))
  {
    m_projection = jsonValue.GetObject("Projection");
    m_projectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));
    m_indexStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Backfilling"))
  {
    m_backfilling = jsonValue.GetBool("Backfilling");
    m_backfillingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");
    m_provisionedThroughputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexSizeBytes"))
  {
    m_indexSizeBytes = jsonValue.GetInt64("IndexSizeBytes");
    m_indexSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInt64("ItemCount");
    m_itemCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexArn"))
  {
    m_indexArn = jsonValue.GetString("IndexArn");
    m_indexArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandThroughput"))
  {
    m_onDemandThroughput = jsonValue.GetObject("OnDemandThroughput");
    m_onDemandThroughputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmThroughput"))
  {
    m_warmThroughput = jsonValue.GetObject("WarmThroughput");
    m_warmThroughputHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalSecondaryIndexDescription::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_projectionHasBeenSet)
  {
   payload.WithObject("Projection", m_projection.Jsonize());

  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", IndexStatusMapper::GetNameForIndexStatus(m_indexStatus));
  }

  if(m_backfillingHasBeenSet)
  {
   payload.WithBool("Backfilling", m_backfilling);

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_indexSizeBytesHasBeenSet)
  {
   payload.WithInt64("IndexSizeBytes", m_indexSizeBytes);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInt64("ItemCount", m_itemCount);

  }

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("IndexArn", m_indexArn);

  }

  if(m_onDemandThroughputHasBeenSet)
  {
   payload.WithObject("OnDemandThroughput", m_onDemandThroughput.Jsonize());

  }

  if(m_warmThroughputHasBeenSet)
  {
   payload.WithObject("WarmThroughput", m_warmThroughput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
