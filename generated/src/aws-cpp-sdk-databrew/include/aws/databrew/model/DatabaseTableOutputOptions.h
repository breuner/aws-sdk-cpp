﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents options that specify how and where DataBrew writes the database
   * output generated by recipe jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DatabaseTableOutputOptions">AWS
   * API Reference</a></p>
   */
  class DatabaseTableOutputOptions
  {
  public:
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions() = default;
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an Amazon S3 location (bucket name and object key) where DataBrew
     * can store intermediate results.</p>
     */
    inline const S3Location& GetTempDirectory() const { return m_tempDirectory; }
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }
    template<typename TempDirectoryT = S3Location>
    void SetTempDirectory(TempDirectoryT&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::forward<TempDirectoryT>(value); }
    template<typename TempDirectoryT = S3Location>
    DatabaseTableOutputOptions& WithTempDirectory(TempDirectoryT&& value) { SetTempDirectory(std::forward<TempDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix for the name of a table DataBrew will create in the database.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DatabaseTableOutputOptions& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}
  private:

    S3Location m_tempDirectory;
    bool m_tempDirectoryHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
