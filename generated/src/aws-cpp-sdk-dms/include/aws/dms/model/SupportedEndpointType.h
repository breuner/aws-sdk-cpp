﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ReplicationEndpointTypeValue.h>
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
   * <p>Provides information about types of supported endpoints in response to a
   * request by the <code>DescribeEndpointTypes</code> operation. This information
   * includes the type of endpoint, the database engine name, and whether change data
   * capture (CDC) is supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SupportedEndpointType">AWS
   * API Reference</a></p>
   */
  class SupportedEndpointType
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType() = default;
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API SupportedEndpointType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database engine name. Valid values, depending on the EndpointType,
     * include <code>"mysql"</code>, <code>"oracle"</code>, <code>"postgres"</code>,
     * <code>"mariadb"</code>, <code>"aurora"</code>, <code>"aurora-postgresql"</code>,
     * <code>"redshift"</code>, <code>"s3"</code>, <code>"db2"</code>,
     * <code>"db2-zos"</code>, <code>"azuredb"</code>, <code>"sybase"</code>,
     * <code>"dynamodb"</code>, <code>"mongodb"</code>, <code>"kinesis"</code>,
     * <code>"kafka"</code>, <code>"elasticsearch"</code>, <code>"documentdb"</code>,
     * <code>"sqlserver"</code>, <code>"neptune"</code>, and
     * <code>"babelfish"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    SupportedEndpointType& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if change data capture (CDC) is supported.</p>
     */
    inline bool GetSupportsCDC() const { return m_supportsCDC; }
    inline bool SupportsCDCHasBeenSet() const { return m_supportsCDCHasBeenSet; }
    inline void SetSupportsCDC(bool value) { m_supportsCDCHasBeenSet = true; m_supportsCDC = value; }
    inline SupportedEndpointType& WithSupportsCDC(bool value) { SetSupportsCDC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint. Valid values are <code>source</code> and
     * <code>target</code>.</p>
     */
    inline ReplicationEndpointTypeValue GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(ReplicationEndpointTypeValue value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline SupportedEndpointType& WithEndpointType(ReplicationEndpointTypeValue value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest DMS engine version that supports this endpoint engine. Note that
     * endpoint engines released with DMS versions earlier than 3.1.1 do not return a
     * value for this parameter.</p>
     */
    inline const Aws::String& GetReplicationInstanceEngineMinimumVersion() const { return m_replicationInstanceEngineMinimumVersion; }
    inline bool ReplicationInstanceEngineMinimumVersionHasBeenSet() const { return m_replicationInstanceEngineMinimumVersionHasBeenSet; }
    template<typename ReplicationInstanceEngineMinimumVersionT = Aws::String>
    void SetReplicationInstanceEngineMinimumVersion(ReplicationInstanceEngineMinimumVersionT&& value) { m_replicationInstanceEngineMinimumVersionHasBeenSet = true; m_replicationInstanceEngineMinimumVersion = std::forward<ReplicationInstanceEngineMinimumVersionT>(value); }
    template<typename ReplicationInstanceEngineMinimumVersionT = Aws::String>
    SupportedEndpointType& WithReplicationInstanceEngineMinimumVersion(ReplicationInstanceEngineMinimumVersionT&& value) { SetReplicationInstanceEngineMinimumVersion(std::forward<ReplicationInstanceEngineMinimumVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expanded name for the engine name. For example, if the
     * <code>EngineName</code> parameter is "aurora", this value would be "Amazon
     * Aurora MySQL".</p>
     */
    inline const Aws::String& GetEngineDisplayName() const { return m_engineDisplayName; }
    inline bool EngineDisplayNameHasBeenSet() const { return m_engineDisplayNameHasBeenSet; }
    template<typename EngineDisplayNameT = Aws::String>
    void SetEngineDisplayName(EngineDisplayNameT&& value) { m_engineDisplayNameHasBeenSet = true; m_engineDisplayName = std::forward<EngineDisplayNameT>(value); }
    template<typename EngineDisplayNameT = Aws::String>
    SupportedEndpointType& WithEngineDisplayName(EngineDisplayNameT&& value) { SetEngineDisplayName(std::forward<EngineDisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    bool m_supportsCDC{false};
    bool m_supportsCDCHasBeenSet = false;

    ReplicationEndpointTypeValue m_endpointType{ReplicationEndpointTypeValue::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_replicationInstanceEngineMinimumVersion;
    bool m_replicationInstanceEngineMinimumVersionHasBeenSet = false;

    Aws::String m_engineDisplayName;
    bool m_engineDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
