﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/RelationalDatabaseSourceType.h>
#include <aws/appsync/model/RdsHttpEndpointConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a relational database data source configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/RelationalDatabaseDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseDataSourceConfig
  {
  public:
    AWS_APPSYNC_API RelationalDatabaseDataSourceConfig();
    AWS_APPSYNC_API RelationalDatabaseDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API RelationalDatabaseDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon
     * Relational Database Service (Amazon RDS) HTTP endpoint.</p> </li> </ul>
     */
    inline const RelationalDatabaseSourceType& GetRelationalDatabaseSourceType() const{ return m_relationalDatabaseSourceType; }
    inline bool RelationalDatabaseSourceTypeHasBeenSet() const { return m_relationalDatabaseSourceTypeHasBeenSet; }
    inline void SetRelationalDatabaseSourceType(const RelationalDatabaseSourceType& value) { m_relationalDatabaseSourceTypeHasBeenSet = true; m_relationalDatabaseSourceType = value; }
    inline void SetRelationalDatabaseSourceType(RelationalDatabaseSourceType&& value) { m_relationalDatabaseSourceTypeHasBeenSet = true; m_relationalDatabaseSourceType = std::move(value); }
    inline RelationalDatabaseDataSourceConfig& WithRelationalDatabaseSourceType(const RelationalDatabaseSourceType& value) { SetRelationalDatabaseSourceType(value); return *this;}
    inline RelationalDatabaseDataSourceConfig& WithRelationalDatabaseSourceType(RelationalDatabaseSourceType&& value) { SetRelationalDatabaseSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline const RdsHttpEndpointConfig& GetRdsHttpEndpointConfig() const{ return m_rdsHttpEndpointConfig; }
    inline bool RdsHttpEndpointConfigHasBeenSet() const { return m_rdsHttpEndpointConfigHasBeenSet; }
    inline void SetRdsHttpEndpointConfig(const RdsHttpEndpointConfig& value) { m_rdsHttpEndpointConfigHasBeenSet = true; m_rdsHttpEndpointConfig = value; }
    inline void SetRdsHttpEndpointConfig(RdsHttpEndpointConfig&& value) { m_rdsHttpEndpointConfigHasBeenSet = true; m_rdsHttpEndpointConfig = std::move(value); }
    inline RelationalDatabaseDataSourceConfig& WithRdsHttpEndpointConfig(const RdsHttpEndpointConfig& value) { SetRdsHttpEndpointConfig(value); return *this;}
    inline RelationalDatabaseDataSourceConfig& WithRdsHttpEndpointConfig(RdsHttpEndpointConfig&& value) { SetRdsHttpEndpointConfig(std::move(value)); return *this;}
    ///@}
  private:

    RelationalDatabaseSourceType m_relationalDatabaseSourceType;
    bool m_relationalDatabaseSourceTypeHasBeenSet = false;

    RdsHttpEndpointConfig m_rdsHttpEndpointConfig;
    bool m_rdsHttpEndpointConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
