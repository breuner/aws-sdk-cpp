﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/DNSTargetResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The resource element of a resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Resource();
    AWS_ROUTE53RECOVERYREADINESS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component identifier of the resource, generated when DNS target resource
     * is used.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline Resource& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline Resource& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline Resource& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS target resource.</p>
     */
    inline const DNSTargetResource& GetDnsTargetResource() const{ return m_dnsTargetResource; }
    inline bool DnsTargetResourceHasBeenSet() const { return m_dnsTargetResourceHasBeenSet; }
    inline void SetDnsTargetResource(const DNSTargetResource& value) { m_dnsTargetResourceHasBeenSet = true; m_dnsTargetResource = value; }
    inline void SetDnsTargetResource(DNSTargetResource&& value) { m_dnsTargetResourceHasBeenSet = true; m_dnsTargetResource = std::move(value); }
    inline Resource& WithDnsTargetResource(const DNSTargetResource& value) { SetDnsTargetResource(value); return *this;}
    inline Resource& WithDnsTargetResource(DNSTargetResource&& value) { SetDnsTargetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recovery group Amazon Resource Names (ARNs) and cell ARNs that this
     * resource is contained within.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadinessScopes() const{ return m_readinessScopes; }
    inline bool ReadinessScopesHasBeenSet() const { return m_readinessScopesHasBeenSet; }
    inline void SetReadinessScopes(const Aws::Vector<Aws::String>& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes = value; }
    inline void SetReadinessScopes(Aws::Vector<Aws::String>&& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes = std::move(value); }
    inline Resource& WithReadinessScopes(const Aws::Vector<Aws::String>& value) { SetReadinessScopes(value); return *this;}
    inline Resource& WithReadinessScopes(Aws::Vector<Aws::String>&& value) { SetReadinessScopes(std::move(value)); return *this;}
    inline Resource& AddReadinessScopes(const Aws::String& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes.push_back(value); return *this; }
    inline Resource& AddReadinessScopes(Aws::String&& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes.push_back(std::move(value)); return *this; }
    inline Resource& AddReadinessScopes(const char* value) { m_readinessScopesHasBeenSet = true; m_readinessScopes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Resource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Resource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Resource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    DNSTargetResource m_dnsTargetResource;
    bool m_dnsTargetResourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_readinessScopes;
    bool m_readinessScopesHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
