﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DataProviderSettings.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ModifyDataProviderRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDataProvider"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the data provider. Identifiers must begin with a letter and
     * must contain only ASCII letters, digits, and hyphens. They can't end with a
     * hyphen, or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetDataProviderIdentifier() const{ return m_dataProviderIdentifier; }
    inline bool DataProviderIdentifierHasBeenSet() const { return m_dataProviderIdentifierHasBeenSet; }
    inline void SetDataProviderIdentifier(const Aws::String& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = value; }
    inline void SetDataProviderIdentifier(Aws::String&& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = std::move(value); }
    inline void SetDataProviderIdentifier(const char* value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier.assign(value); }
    inline ModifyDataProviderRequest& WithDataProviderIdentifier(const Aws::String& value) { SetDataProviderIdentifier(value); return *this;}
    inline ModifyDataProviderRequest& WithDataProviderIdentifier(Aws::String&& value) { SetDataProviderIdentifier(std::move(value)); return *this;}
    inline ModifyDataProviderRequest& WithDataProviderIdentifier(const char* value) { SetDataProviderIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data provider.</p>
     */
    inline const Aws::String& GetDataProviderName() const{ return m_dataProviderName; }
    inline bool DataProviderNameHasBeenSet() const { return m_dataProviderNameHasBeenSet; }
    inline void SetDataProviderName(const Aws::String& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = value; }
    inline void SetDataProviderName(Aws::String&& value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName = std::move(value); }
    inline void SetDataProviderName(const char* value) { m_dataProviderNameHasBeenSet = true; m_dataProviderName.assign(value); }
    inline ModifyDataProviderRequest& WithDataProviderName(const Aws::String& value) { SetDataProviderName(value); return *this;}
    inline ModifyDataProviderRequest& WithDataProviderName(Aws::String&& value) { SetDataProviderName(std::move(value)); return *this;}
    inline ModifyDataProviderRequest& WithDataProviderName(const char* value) { SetDataProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly description of the data provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyDataProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyDataProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyDataProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline ModifyDataProviderRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyDataProviderRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyDataProviderRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this attribute is Y, the current call to <code>ModifyDataProvider</code>
     * replaces all existing data provider settings with the exact settings that you
     * specify in this call. If this attribute is N, the current call to
     * <code>ModifyDataProvider</code> does two things: </p> <ul> <li> <p>It replaces
     * any data provider settings that already exist with new values, for settings with
     * the same names.</p> </li> <li> <p>It creates new data provider settings that you
     * specify in the call, for settings with different names. </p> </li> </ul>
     */
    inline bool GetExactSettings() const{ return m_exactSettings; }
    inline bool ExactSettingsHasBeenSet() const { return m_exactSettingsHasBeenSet; }
    inline void SetExactSettings(bool value) { m_exactSettingsHasBeenSet = true; m_exactSettings = value; }
    inline ModifyDataProviderRequest& WithExactSettings(bool value) { SetExactSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings in JSON format for a data provider.</p>
     */
    inline const DataProviderSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const DataProviderSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(DataProviderSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline ModifyDataProviderRequest& WithSettings(const DataProviderSettings& value) { SetSettings(value); return *this;}
    inline ModifyDataProviderRequest& WithSettings(DataProviderSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProviderIdentifier;
    bool m_dataProviderIdentifierHasBeenSet = false;

    Aws::String m_dataProviderName;
    bool m_dataProviderNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    bool m_exactSettings;
    bool m_exactSettingsHasBeenSet = false;

    DataProviderSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
