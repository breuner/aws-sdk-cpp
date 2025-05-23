﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/InputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputUpdate::InputUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

InputUpdate& InputUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputId"))
  {
    m_inputId = jsonValue.GetString("InputId");
    m_inputIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NamePrefixUpdate"))
  {
    m_namePrefixUpdate = jsonValue.GetString("NamePrefixUpdate");
    m_namePrefixUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputProcessingConfigurationUpdate"))
  {
    m_inputProcessingConfigurationUpdate = jsonValue.GetObject("InputProcessingConfigurationUpdate");
    m_inputProcessingConfigurationUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KinesisStreamsInputUpdate"))
  {
    m_kinesisStreamsInputUpdate = jsonValue.GetObject("KinesisStreamsInputUpdate");
    m_kinesisStreamsInputUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KinesisFirehoseInputUpdate"))
  {
    m_kinesisFirehoseInputUpdate = jsonValue.GetObject("KinesisFirehoseInputUpdate");
    m_kinesisFirehoseInputUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputSchemaUpdate"))
  {
    m_inputSchemaUpdate = jsonValue.GetObject("InputSchemaUpdate");
    m_inputSchemaUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputParallelismUpdate"))
  {
    m_inputParallelismUpdate = jsonValue.GetObject("InputParallelismUpdate");
    m_inputParallelismUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue InputUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("InputId", m_inputId);

  }

  if(m_namePrefixUpdateHasBeenSet)
  {
   payload.WithString("NamePrefixUpdate", m_namePrefixUpdate);

  }

  if(m_inputProcessingConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("InputProcessingConfigurationUpdate", m_inputProcessingConfigurationUpdate.Jsonize());

  }

  if(m_kinesisStreamsInputUpdateHasBeenSet)
  {
   payload.WithObject("KinesisStreamsInputUpdate", m_kinesisStreamsInputUpdate.Jsonize());

  }

  if(m_kinesisFirehoseInputUpdateHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseInputUpdate", m_kinesisFirehoseInputUpdate.Jsonize());

  }

  if(m_inputSchemaUpdateHasBeenSet)
  {
   payload.WithObject("InputSchemaUpdate", m_inputSchemaUpdate.Jsonize());

  }

  if(m_inputParallelismUpdateHasBeenSet)
  {
   payload.WithObject("InputParallelismUpdate", m_inputParallelismUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
