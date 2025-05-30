﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogKinesisSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogKinesisSource::CatalogKinesisSource(JsonView jsonValue)
{
  *this = jsonValue;
}

CatalogKinesisSource& CatalogKinesisSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WindowSize"))
  {
    m_windowSize = jsonValue.GetInteger("WindowSize");
    m_windowSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DetectSchema"))
  {
    m_detectSchema = jsonValue.GetBool("DetectSchema");
    m_detectSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamingOptions"))
  {
    m_streamingOptions = jsonValue.GetObject("StreamingOptions");
    m_streamingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataPreviewOptions"))
  {
    m_dataPreviewOptions = jsonValue.GetObject("DataPreviewOptions");
    m_dataPreviewOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogKinesisSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_windowSizeHasBeenSet)
  {
   payload.WithInteger("WindowSize", m_windowSize);

  }

  if(m_detectSchemaHasBeenSet)
  {
   payload.WithBool("DetectSchema", m_detectSchema);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_streamingOptionsHasBeenSet)
  {
   payload.WithObject("StreamingOptions", m_streamingOptions.Jsonize());

  }

  if(m_dataPreviewOptionsHasBeenSet)
  {
   payload.WithObject("DataPreviewOptions", m_dataPreviewOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
