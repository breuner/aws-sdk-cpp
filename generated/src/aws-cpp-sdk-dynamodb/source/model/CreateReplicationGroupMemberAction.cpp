﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/CreateReplicationGroupMemberAction.h>
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

CreateReplicationGroupMemberAction::CreateReplicationGroupMemberAction(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateReplicationGroupMemberAction& CreateReplicationGroupMemberAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSMasterKeyId"))
  {
    m_kMSMasterKeyId = jsonValue.GetString("KMSMasterKeyId");
    m_kMSMasterKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedThroughputOverride"))
  {
    m_provisionedThroughputOverride = jsonValue.GetObject("ProvisionedThroughputOverride");
    m_provisionedThroughputOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandThroughputOverride"))
  {
    m_onDemandThroughputOverride = jsonValue.GetObject("OnDemandThroughputOverride");
    m_onDemandThroughputOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableClassOverride"))
  {
    m_tableClassOverride = TableClassMapper::GetTableClassForName(jsonValue.GetString("TableClassOverride"));
    m_tableClassOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateReplicationGroupMemberAction::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_kMSMasterKeyIdHasBeenSet)
  {
   payload.WithString("KMSMasterKeyId", m_kMSMasterKeyId);

  }

  if(m_provisionedThroughputOverrideHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughputOverride", m_provisionedThroughputOverride.Jsonize());

  }

  if(m_onDemandThroughputOverrideHasBeenSet)
  {
   payload.WithObject("OnDemandThroughputOverride", m_onDemandThroughputOverride.Jsonize());

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_tableClassOverrideHasBeenSet)
  {
   payload.WithString("TableClassOverride", TableClassMapper::GetNameForTableClass(m_tableClassOverride));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
