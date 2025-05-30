﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SnowflakeNodeData.h>
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

SnowflakeNodeData::SnowflakeNodeData(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeNodeData& SnowflakeNodeData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Connection"))
  {
    m_connection = jsonValue.GetObject("Connection");
    m_connectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");
    m_schemaHasBeenSet = true;
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
  if(jsonValue.ValueExists("TempDir"))
  {
    m_tempDir = jsonValue.GetString("TempDir");
    m_tempDirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamRole"))
  {
    m_iamRole = jsonValue.GetObject("IamRole");
    m_iamRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalOptionsJsonMap = jsonValue.GetObject("AdditionalOptions").GetAllObjects();
    for(auto& additionalOptionsItem : additionalOptionsJsonMap)
    {
      m_additionalOptions[additionalOptionsItem.first] = additionalOptionsItem.second.AsString();
    }
    m_additionalOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SampleQuery"))
  {
    m_sampleQuery = jsonValue.GetString("SampleQuery");
    m_sampleQueryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreAction"))
  {
    m_preAction = jsonValue.GetString("PreAction");
    m_preActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostAction"))
  {
    m_postAction = jsonValue.GetString("PostAction");
    m_postActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Upsert"))
  {
    m_upsert = jsonValue.GetBool("Upsert");
    m_upsertHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MergeAction"))
  {
    m_mergeAction = jsonValue.GetString("MergeAction");
    m_mergeActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MergeWhenMatched"))
  {
    m_mergeWhenMatched = jsonValue.GetString("MergeWhenMatched");
    m_mergeWhenMatchedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MergeWhenNotMatched"))
  {
    m_mergeWhenNotMatched = jsonValue.GetString("MergeWhenNotMatched");
    m_mergeWhenNotMatchedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MergeClause"))
  {
    m_mergeClause = jsonValue.GetString("MergeClause");
    m_mergeClauseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StagingTable"))
  {
    m_stagingTable = jsonValue.GetString("StagingTable");
    m_stagingTableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectedColumns"))
  {
    Aws::Utils::Array<JsonView> selectedColumnsJsonList = jsonValue.GetArray("SelectedColumns");
    for(unsigned selectedColumnsIndex = 0; selectedColumnsIndex < selectedColumnsJsonList.GetLength(); ++selectedColumnsIndex)
    {
      m_selectedColumns.push_back(selectedColumnsJsonList[selectedColumnsIndex].AsObject());
    }
    m_selectedColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoPushdown"))
  {
    m_autoPushdown = jsonValue.GetBool("AutoPushdown");
    m_autoPushdownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableSchema"))
  {
    Aws::Utils::Array<JsonView> tableSchemaJsonList = jsonValue.GetArray("TableSchema");
    for(unsigned tableSchemaIndex = 0; tableSchemaIndex < tableSchemaJsonList.GetLength(); ++tableSchemaIndex)
    {
      m_tableSchema.push_back(tableSchemaJsonList[tableSchemaIndex].AsObject());
    }
    m_tableSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeNodeData::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_connectionHasBeenSet)
  {
   payload.WithObject("Connection", m_connection.Jsonize());

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tempDirHasBeenSet)
  {
   payload.WithString("TempDir", m_tempDir);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithObject("IamRole", m_iamRole.Jsonize());

  }

  if(m_additionalOptionsHasBeenSet)
  {
   JsonValue additionalOptionsJsonMap;
   for(auto& additionalOptionsItem : m_additionalOptions)
   {
     additionalOptionsJsonMap.WithString(additionalOptionsItem.first, additionalOptionsItem.second);
   }
   payload.WithObject("AdditionalOptions", std::move(additionalOptionsJsonMap));

  }

  if(m_sampleQueryHasBeenSet)
  {
   payload.WithString("SampleQuery", m_sampleQuery);

  }

  if(m_preActionHasBeenSet)
  {
   payload.WithString("PreAction", m_preAction);

  }

  if(m_postActionHasBeenSet)
  {
   payload.WithString("PostAction", m_postAction);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_upsertHasBeenSet)
  {
   payload.WithBool("Upsert", m_upsert);

  }

  if(m_mergeActionHasBeenSet)
  {
   payload.WithString("MergeAction", m_mergeAction);

  }

  if(m_mergeWhenMatchedHasBeenSet)
  {
   payload.WithString("MergeWhenMatched", m_mergeWhenMatched);

  }

  if(m_mergeWhenNotMatchedHasBeenSet)
  {
   payload.WithString("MergeWhenNotMatched", m_mergeWhenNotMatched);

  }

  if(m_mergeClauseHasBeenSet)
  {
   payload.WithString("MergeClause", m_mergeClause);

  }

  if(m_stagingTableHasBeenSet)
  {
   payload.WithString("StagingTable", m_stagingTable);

  }

  if(m_selectedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedColumnsJsonList(m_selectedColumns.size());
   for(unsigned selectedColumnsIndex = 0; selectedColumnsIndex < selectedColumnsJsonList.GetLength(); ++selectedColumnsIndex)
   {
     selectedColumnsJsonList[selectedColumnsIndex].AsObject(m_selectedColumns[selectedColumnsIndex].Jsonize());
   }
   payload.WithArray("SelectedColumns", std::move(selectedColumnsJsonList));

  }

  if(m_autoPushdownHasBeenSet)
  {
   payload.WithBool("AutoPushdown", m_autoPushdown);

  }

  if(m_tableSchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tableSchemaJsonList(m_tableSchema.size());
   for(unsigned tableSchemaIndex = 0; tableSchemaIndex < tableSchemaJsonList.GetLength(); ++tableSchemaIndex)
   {
     tableSchemaJsonList[tableSchemaIndex].AsObject(m_tableSchema[tableSchemaIndex].Jsonize());
   }
   payload.WithArray("TableSchema", std::move(tableSchemaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
