﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/RecordPatch.h>
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

RecordPatch::RecordPatch(JsonView jsonValue)
{
  *this = jsonValue;
}

RecordPatch& RecordPatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Op"))
  {
    m_op = OperationMapper::GetOperationForName(jsonValue.GetString("Op"));
    m_opHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SyncCount"))
  {
    m_syncCount = jsonValue.GetInt64("SyncCount");
    m_syncCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceLastModifiedDate"))
  {
    m_deviceLastModifiedDate = jsonValue.GetDouble("DeviceLastModifiedDate");
    m_deviceLastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordPatch::Jsonize() const
{
  JsonValue payload;

  if(m_opHasBeenSet)
  {
   payload.WithString("Op", OperationMapper::GetNameForOperation(m_op));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_syncCountHasBeenSet)
  {
   payload.WithInt64("SyncCount", m_syncCount);

  }

  if(m_deviceLastModifiedDateHasBeenSet)
  {
   payload.WithDouble("DeviceLastModifiedDate", m_deviceLastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
