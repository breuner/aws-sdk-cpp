﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/TapeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

TapeInfo::TapeInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

TapeInfo& TapeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TapeARN"))
  {
    m_tapeARN = jsonValue.GetString("TapeARN");
    m_tapeARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TapeBarcode"))
  {
    m_tapeBarcode = jsonValue.GetString("TapeBarcode");
    m_tapeBarcodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TapeSizeInBytes"))
  {
    m_tapeSizeInBytes = jsonValue.GetInt64("TapeSizeInBytes");
    m_tapeSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TapeStatus"))
  {
    m_tapeStatus = jsonValue.GetString("TapeStatus");
    m_tapeStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");
    m_poolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetentionStartDate"))
  {
    m_retentionStartDate = jsonValue.GetDouble("RetentionStartDate");
    m_retentionStartDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PoolEntryDate"))
  {
    m_poolEntryDate = jsonValue.GetDouble("PoolEntryDate");
    m_poolEntryDateHasBeenSet = true;
  }
  return *this;
}

JsonValue TapeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  if(m_tapeBarcodeHasBeenSet)
  {
   payload.WithString("TapeBarcode", m_tapeBarcode);

  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_tapeStatusHasBeenSet)
  {
   payload.WithString("TapeStatus", m_tapeStatus);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_retentionStartDateHasBeenSet)
  {
   payload.WithDouble("RetentionStartDate", m_retentionStartDate.SecondsWithMSPrecision());
  }

  if(m_poolEntryDateHasBeenSet)
  {
   payload.WithDouble("PoolEntryDate", m_poolEntryDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
