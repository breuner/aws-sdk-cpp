﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizerType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a table optimizer to retrieve in the
   * <code>BatchGetTableOptimizer</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTableOptimizerEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetTableOptimizerEntry
  {
  public:
    AWS_GLUE_API BatchGetTableOptimizerEntry();
    AWS_GLUE_API BatchGetTableOptimizerEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchGetTableOptimizerEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline BatchGetTableOptimizerEntry& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline BatchGetTableOptimizerEntry& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline BatchGetTableOptimizerEntry& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchGetTableOptimizerEntry& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchGetTableOptimizerEntry& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchGetTableOptimizerEntry& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchGetTableOptimizerEntry& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchGetTableOptimizerEntry& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchGetTableOptimizerEntry& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of table optimizer.</p>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline BatchGetTableOptimizerEntry& WithType(const TableOptimizerType& value) { SetType(value); return *this;}
    inline BatchGetTableOptimizerEntry& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableOptimizerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
