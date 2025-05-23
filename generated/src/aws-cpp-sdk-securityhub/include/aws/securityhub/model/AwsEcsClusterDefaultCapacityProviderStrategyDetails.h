﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The default capacity provider strategy for the cluster. The default capacity
   * provider strategy is used when services or tasks are run without a specified
   * launch type or capacity provider strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterDefaultCapacityProviderStrategyDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterDefaultCapacityProviderStrategyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterDefaultCapacityProviderStrategyDetails() = default;
    AWS_SECURITYHUB_API AwsEcsClusterDefaultCapacityProviderStrategyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterDefaultCapacityProviderStrategyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of tasks to run on the specified capacity provider.</p>
     */
    inline int GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(int value) { m_baseHasBeenSet = true; m_base = value; }
    inline AwsEcsClusterDefaultCapacityProviderStrategyDetails& WithBase(int value) { SetBase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProvider() const { return m_capacityProvider; }
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }
    template<typename CapacityProviderT = Aws::String>
    void SetCapacityProvider(CapacityProviderT&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::forward<CapacityProviderT>(value); }
    template<typename CapacityProviderT = Aws::String>
    AwsEcsClusterDefaultCapacityProviderStrategyDetails& WithCapacityProvider(CapacityProviderT&& value) { SetCapacityProvider(std::forward<CapacityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative percentage of the total number of tasks launched that should use
     * the capacity provider.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline AwsEcsClusterDefaultCapacityProviderStrategyDetails& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    int m_base{0};
    bool m_baseHasBeenSet = false;

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
