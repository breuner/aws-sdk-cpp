﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionCacheBehavior.h>
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
   * <p>Provides information about caching for the CloudFront
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionCacheBehaviors">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionCacheBehaviors
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehaviors() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehaviors(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehaviors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cache behaviors for the distribution.</p>
     */
    inline const Aws::Vector<AwsCloudFrontDistributionCacheBehavior>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<AwsCloudFrontDistributionCacheBehavior>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<AwsCloudFrontDistributionCacheBehavior>>
    AwsCloudFrontDistributionCacheBehaviors& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = AwsCloudFrontDistributionCacheBehavior>
    AwsCloudFrontDistributionCacheBehaviors& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsCloudFrontDistributionCacheBehavior> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
