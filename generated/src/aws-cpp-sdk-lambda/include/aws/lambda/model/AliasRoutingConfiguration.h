﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-traffic-shifting-using-aliases.html">traffic-shifting</a>
   * configuration of a Lambda function alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AliasRoutingConfiguration">AWS
   * API Reference</a></p>
   */
  class AliasRoutingConfiguration
  {
  public:
    AWS_LAMBDA_API AliasRoutingConfiguration() = default;
    AWS_LAMBDA_API AliasRoutingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API AliasRoutingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The second version, and the percentage of traffic that's routed to it.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAdditionalVersionWeights() const { return m_additionalVersionWeights; }
    inline bool AdditionalVersionWeightsHasBeenSet() const { return m_additionalVersionWeightsHasBeenSet; }
    template<typename AdditionalVersionWeightsT = Aws::Map<Aws::String, double>>
    void SetAdditionalVersionWeights(AdditionalVersionWeightsT&& value) { m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights = std::forward<AdditionalVersionWeightsT>(value); }
    template<typename AdditionalVersionWeightsT = Aws::Map<Aws::String, double>>
    AliasRoutingConfiguration& WithAdditionalVersionWeights(AdditionalVersionWeightsT&& value) { SetAdditionalVersionWeights(std::forward<AdditionalVersionWeightsT>(value)); return *this;}
    inline AliasRoutingConfiguration& AddAdditionalVersionWeights(Aws::String key, double value) {
      m_additionalVersionWeightsHasBeenSet = true; m_additionalVersionWeights.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, double> m_additionalVersionWeights;
    bool m_additionalVersionWeightsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
