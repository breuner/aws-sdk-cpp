﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class CreateLifecyclePolicyRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLifecyclePolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline const LifecyclePolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LifecyclePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LifecyclePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateLifecyclePolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON policy document to use as the content for the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline CreateLifecyclePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateLifecyclePolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
