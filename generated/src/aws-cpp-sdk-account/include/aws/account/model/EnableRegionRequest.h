﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class EnableRegionRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API EnableRegionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableRegion"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the 12-digit account ID number of the Amazon Web Services account
     * that you want to access or modify with this operation. If you don't specify this
     * parameter, it defaults to the Amazon Web Services account of the identity used
     * to call the operation. To use this parameter, the caller must be an identity in
     * the <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
     * management account</a> or a delegated administrator account. The specified
     * account ID must be a member account in the same organization. The organization
     * must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
     * features enabled</a>, and the organization must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">trusted
     * access</a> enabled for the Account Management service, and optionally a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#delegated-admin">delegated
     * admin</a> account assigned.</p>  <p>The management account can't specify
     * its own <code>AccountId</code>. It must call the operation in standalone context
     * by not including the <code>AccountId</code> parameter.</p>  <p>To call
     * this operation on an account that is not a member of an organization, don't
     * specify this parameter. Instead, call the operation using an identity belonging
     * to the account whose contacts you wish to retrieve or modify.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    EnableRegionRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region-code for a given Region name (for example,
     * <code>af-south-1</code>). When you enable a Region, Amazon Web Services performs
     * actions to prepare your account in that Region, such as distributing your IAM
     * resources to the Region. This process takes a few minutes for most accounts, but
     * it can take several hours. You cannot use the Region until this process is
     * complete. Furthermore, you cannot disable the Region until the enabling process
     * is fully completed.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    EnableRegionRequest& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
