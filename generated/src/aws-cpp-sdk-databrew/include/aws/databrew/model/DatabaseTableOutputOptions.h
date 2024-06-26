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
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions();
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatabaseTableOutputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an Amazon S3 location (bucket name and object key) where DataBrew
     * can store intermediate results.</p>
     */
    inline const S3Location& GetTempDirectory() const{ return m_tempDirectory; }
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }
    inline void SetTempDirectory(const S3Location& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = value; }
    inline void SetTempDirectory(S3Location&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::move(value); }
    inline DatabaseTableOutputOptions& WithTempDirectory(const S3Location& value) { SetTempDirectory(value); return *this;}
    inline DatabaseTableOutputOptions& WithTempDirectory(S3Location&& value) { SetTempDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix for the name of a table DataBrew will create in the database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DatabaseTableOutputOptions& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DatabaseTableOutputOptions& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DatabaseTableOutputOptions& WithTableName(const char* value) { SetTableName(value); return *this;}
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
