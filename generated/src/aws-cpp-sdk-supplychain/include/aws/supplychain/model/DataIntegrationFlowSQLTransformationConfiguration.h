﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The SQL DataIntegrationFlow transformation configuration
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowSQLTransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowSQLTransformationConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSQLTransformationConfiguration() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSQLTransformationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSQLTransformationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transformation SQL query body based on SparkSQL.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    DataIntegrationFlowSQLTransformationConfiguration& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
