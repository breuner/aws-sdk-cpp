﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/EcsServiceConfiguration.h>
#include <aws/cost-optimization-hub/model/ResourceCostCalculation.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The ECS service recommendation details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EcsService">AWS
   * API Reference</a></p>
   */
  class EcsService
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API EcsService() = default;
    AWS_COSTOPTIMIZATIONHUB_API EcsService(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EcsService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ECS service configuration used for recommendations.</p>
     */
    inline const EcsServiceConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = EcsServiceConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = EcsServiceConfiguration>
    EcsService& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost impact of the recommendation.</p>
     */
    inline const ResourceCostCalculation& GetCostCalculation() const { return m_costCalculation; }
    inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }
    template<typename CostCalculationT = ResourceCostCalculation>
    void SetCostCalculation(CostCalculationT&& value) { m_costCalculationHasBeenSet = true; m_costCalculation = std::forward<CostCalculationT>(value); }
    template<typename CostCalculationT = ResourceCostCalculation>
    EcsService& WithCostCalculation(CostCalculationT&& value) { SetCostCalculation(std::forward<CostCalculationT>(value)); return *this;}
    ///@}
  private:

    EcsServiceConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ResourceCostCalculation m_costCalculation;
    bool m_costCalculationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
