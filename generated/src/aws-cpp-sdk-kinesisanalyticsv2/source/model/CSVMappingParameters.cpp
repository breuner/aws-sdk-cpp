﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CSVMappingParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

CSVMappingParameters::CSVMappingParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

CSVMappingParameters& CSVMappingParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordRowDelimiter"))
  {
    m_recordRowDelimiter = jsonValue.GetString("RecordRowDelimiter");
    m_recordRowDelimiterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordColumnDelimiter"))
  {
    m_recordColumnDelimiter = jsonValue.GetString("RecordColumnDelimiter");
    m_recordColumnDelimiterHasBeenSet = true;
  }
  return *this;
}

JsonValue CSVMappingParameters::Jsonize() const
{
  JsonValue payload;

  if(m_recordRowDelimiterHasBeenSet)
  {
   payload.WithString("RecordRowDelimiter", m_recordRowDelimiter);

  }

  if(m_recordColumnDelimiterHasBeenSet)
  {
   payload.WithString("RecordColumnDelimiter", m_recordColumnDelimiter);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
