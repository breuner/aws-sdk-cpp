﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/DataProviderSettings.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a data provider.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataProvider">AWS
   * API Reference</a></p>
   */
  class DataProvider
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider();
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const{ return m_dataProviderName; }
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }
    inline void SetDataProviderName(const Aws::String& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = value; }
    inline void SetDataProviderName(Aws::String&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::move(value); }
    inline void SetDataProviderName(const char* value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName.assign(value); }
    inline DataProvider& WithDataProviderName(const Aws::String& value) { SetDataProviderName(value); return *this;}
    inline DataProvider& WithDataProviderName(Aws::String&& value) { SetDataProviderName(std::move(value)); return *this;}
    inline DataProvider& WithDataProviderName(const char* value) { SetDataProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the data
     * provider.</p>
     */
    inline const Aws::String& GetDataProviderArn() const{ return m_dataProviderArn; }
    inline bool DataProviderArnHasBeenSet() const { return m_dataProviderArnHasBeenSet; }
    inline void SetDataProviderArn(const Aws::String& value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn = value; }
    inline void SetDataProviderArn(Aws::String&& value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn = std::move(value); }
    inline void SetDataProviderArn(const char* value) { m_dataProviderArnHasBeenSet = true; m_dataProviderArn.assign(value); }
    inline DataProvider& WithDataProviderArn(const Aws::String& value) { SetDataProviderArn(value); return *this;}
    inline DataProvider& WithDataProviderArn(Aws::String&& value) { SetDataProviderArn(std::move(value)); return *this;}
    inline DataProvider& WithDataProviderArn(const char* value) { SetDataProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the data provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDataProviderCreationTime() const{ return m_dataProviderCreationTime; }
    inline bool DataProviderCreationTimeHasBeenSet() const { return m_dataProviderCreationTimeHasBeenSet; }
    inline void SetDataProviderCreationTime(const Aws::Utils::DateTime& value) { m_dataProviderCreationTimeHasBeenSet = true; m_dataProviderCreationTime = value; }
    inline void SetDataProviderCreationTime(Aws::Utils::DateTime&& value) { m_dataProviderCreationTimeHasBeenSet = true; m_dataProviderCreationTime = std::move(value); }
    inline DataProvider& WithDataProviderCreationTime(const Aws::Utils::DateTime& value) { SetDataProviderCreationTime(value); return *this;}
    inline DataProvider& WithDataProviderCreationTime(Aws::Utils::DateTime&& value) { SetDataProviderCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data provider. Descriptions can have up to 31
     * characters. A description can contain only ASCII letters, digits, and hyphens
     * ('-'). Also, it can't end with a hyphen or contain two consecutive hyphens, and
     * can only begin with a letter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataProvider& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataProvider& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataProvider& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of database engine for the data provider. Valid values include
     * <code>"aurora"</code>, <code>"aurora-postgresql"</code>, <code>"mysql"</code>,
     * <code>"oracle"</code>, <code>"postgres"</code>, <code>"sqlserver"</code>,
     * <code>redshift</code>, <code>mariadb</code>, <code>mongodb</code>,
     * <code>db2</code>, <code>db2-zos</code> and <code>docdb</code>. A value of
     * <code>"aurora"</code> represents Amazon Aurora MySQL-Compatible Edition.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DataProvider& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DataProvider& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DataProvider& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline const DataProviderSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const DataProviderSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(DataProviderSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline DataProvider& WithSettings(const DataProviderSettings& value) { SetSettings(value); return *this;}
    inline DataProvider& WithSettings(DataProviderSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_dataProviderArn;
    bool m_dataProviderArnHasBeenSet = false;

    Aws::Utils::DateTime m_dataProviderCreationTime;
    bool m_dataProviderCreationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    DataProviderSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
