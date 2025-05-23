﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/OpenSearchServerlessFieldMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

OpenSearchServerlessFieldMapping::OpenSearchServerlessFieldMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchServerlessFieldMapping& OpenSearchServerlessFieldMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataField"))
  {
    m_metadataField = jsonValue.GetString("metadataField");
    m_metadataFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textField"))
  {
    m_textField = jsonValue.GetString("textField");
    m_textFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorField"))
  {
    m_vectorField = jsonValue.GetString("vectorField");
    m_vectorFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchServerlessFieldMapping::Jsonize() const
{
  JsonValue payload;

  if(m_metadataFieldHasBeenSet)
  {
   payload.WithString("metadataField", m_metadataField);

  }

  if(m_textFieldHasBeenSet)
  {
   payload.WithString("textField", m_textField);

  }

  if(m_vectorFieldHasBeenSet)
  {
   payload.WithString("vectorField", m_vectorField);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
