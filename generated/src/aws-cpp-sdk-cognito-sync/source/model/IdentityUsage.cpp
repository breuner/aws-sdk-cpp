﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/IdentityUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

IdentityUsage::IdentityUsage(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityUsage& IdentityUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");
    m_identityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");
    m_identityPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetCount"))
  {
    m_datasetCount = jsonValue.GetInteger("DatasetCount");
    m_datasetCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataStorage"))
  {
    m_dataStorage = jsonValue.GetInt64("DataStorage");
    m_dataStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityUsage::Jsonize() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_datasetCountHasBeenSet)
  {
   payload.WithInteger("DatasetCount", m_datasetCount);

  }

  if(m_dataStorageHasBeenSet)
  {
   payload.WithInt64("DataStorage", m_dataStorage);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
