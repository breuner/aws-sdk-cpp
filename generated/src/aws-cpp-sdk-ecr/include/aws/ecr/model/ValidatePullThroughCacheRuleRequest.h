﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class ValidatePullThroughCacheRuleRequest : public ECRRequest
  {
  public:
    AWS_ECR_API ValidatePullThroughCacheRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidatePullThroughCacheRule"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository name prefix associated with the pull through cache rule.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    ValidatePullThroughCacheRuleRequest& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry ID associated with the pull through cache rule. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    ValidatePullThroughCacheRuleRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
