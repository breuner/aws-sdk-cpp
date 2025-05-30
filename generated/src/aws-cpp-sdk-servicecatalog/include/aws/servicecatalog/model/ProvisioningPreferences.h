﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The user-defined preferences that will be applied when updating a provisioned
   * product. Not all preferences are applicable to all provisioned product type</p>
   * <p>One or more Amazon Web Services accounts that will have access to the
   * provisioned product.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
   * provisioned product type.</p> <p>The Amazon Web Services accounts specified
   * should be within the list of accounts in the <code>STACKSET</code> constraint.
   * To get the list of accounts in the <code>STACKSET</code> constraint, use the
   * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
   * specified, the default value is all accounts from the <code>STACKSET</code>
   * constraint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningPreferences">AWS
   * API Reference</a></p>
   */
  class ProvisioningPreferences
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningPreferences() = default;
    AWS_SERVICECATALOG_API ProvisioningPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more Amazon Web Services accounts where the provisioned product will
     * be available.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The specified accounts should be within the list of
     * accounts from the <code>STACKSET</code> constraint. To get the list of accounts
     * in the <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all acounts from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetAccounts() const { return m_stackSetAccounts; }
    inline bool StackSetAccountsHasBeenSet() const { return m_stackSetAccountsHasBeenSet; }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    void SetStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = std::forward<StackSetAccountsT>(value); }
    template<typename StackSetAccountsT = Aws::Vector<Aws::String>>
    ProvisioningPreferences& WithStackSetAccounts(StackSetAccountsT&& value) { SetStackSetAccounts(std::forward<StackSetAccountsT>(value)); return *this;}
    template<typename StackSetAccountsT = Aws::String>
    ProvisioningPreferences& AddStackSetAccounts(StackSetAccountsT&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.emplace_back(std::forward<StackSetAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Amazon Web Services Regions where the provisioned product will be
     * available.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>The specified Regions should be within the list of Regions
     * from the <code>STACKSET</code> constraint. To get the list of Regions in the
     * <code>STACKSET</code> constraint, use the
     * <code>DescribeProvisioningParameters</code> operation.</p> <p>If no values are
     * specified, the default value is all Regions from the <code>STACKSET</code>
     * constraint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetRegions() const { return m_stackSetRegions; }
    inline bool StackSetRegionsHasBeenSet() const { return m_stackSetRegionsHasBeenSet; }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    void SetStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = std::forward<StackSetRegionsT>(value); }
    template<typename StackSetRegionsT = Aws::Vector<Aws::String>>
    ProvisioningPreferences& WithStackSetRegions(StackSetRegionsT&& value) { SetStackSetRegions(std::forward<StackSetRegionsT>(value)); return *this;}
    template<typename StackSetRegionsT = Aws::String>
    ProvisioningPreferences& AddStackSetRegions(StackSetRegionsT&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.emplace_back(std::forward<StackSetRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * Service Catalog stops the operation in that Region. If the operation is stopped
     * in a Region, Service Catalog doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Applicable only to a <code>CFN_STACKSET</code> provisioned
     * product type.</p> <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p> <p>The
     * default value is <code>0</code> if no value is specified.</p>
     */
    inline int GetStackSetFailureToleranceCount() const { return m_stackSetFailureToleranceCount; }
    inline bool StackSetFailureToleranceCountHasBeenSet() const { return m_stackSetFailureToleranceCountHasBeenSet; }
    inline void SetStackSetFailureToleranceCount(int value) { m_stackSetFailureToleranceCountHasBeenSet = true; m_stackSetFailureToleranceCount = value; }
    inline ProvisioningPreferences& WithStackSetFailureToleranceCount(int value) { SetStackSetFailureToleranceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before Service Catalog stops the operation in that Region. If the operation
     * is stopped in a Region, Service Catalog doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, Service Catalog rounds down to the next whole number.</p>
     * <p>Applicable only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     * <p>Conditional: You must specify either
     * <code>StackSetFailureToleranceCount</code> or
     * <code>StackSetFailureTolerancePercentage</code>, but not both.</p>
     */
    inline int GetStackSetFailureTolerancePercentage() const { return m_stackSetFailureTolerancePercentage; }
    inline bool StackSetFailureTolerancePercentageHasBeenSet() const { return m_stackSetFailureTolerancePercentageHasBeenSet; }
    inline void SetStackSetFailureTolerancePercentage(int value) { m_stackSetFailureTolerancePercentageHasBeenSet = true; m_stackSetFailureTolerancePercentage = value; }
    inline ProvisioningPreferences& WithStackSetFailureTolerancePercentage(int value) { SetStackSetFailureTolerancePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>StackSetFailureToleranceCount</code>.
     * <code>StackSetMaxConcurrentCount</code> is at most one more than the
     * <code>StackSetFailureToleranceCount</code>.</p> <p>Note that this setting lets
     * you specify the maximum for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Applicable only to a <code>CFN_STACKSET</code>
     * provisioned product type.</p> <p>Conditional: You must specify either
     * <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyCount() const { return m_stackSetMaxConcurrencyCount; }
    inline bool StackSetMaxConcurrencyCountHasBeenSet() const { return m_stackSetMaxConcurrencyCountHasBeenSet; }
    inline void SetStackSetMaxConcurrencyCount(int value) { m_stackSetMaxConcurrencyCountHasBeenSet = true; m_stackSetMaxConcurrencyCount = value; }
    inline ProvisioningPreferences& WithStackSetMaxConcurrencyCount(int value) { SetStackSetMaxConcurrencyCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, Service Catalog rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case, Service
     * Catalog sets the number as <code>1</code> instead.</p> <p>Note that this setting
     * lets you specify the maximum for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Applicable only to a
     * <code>CFN_STACKSET</code> provisioned product type.</p> <p>Conditional: You must
     * specify either <code>StackSetMaxConcurrentCount</code> or
     * <code>StackSetMaxConcurrentPercentage</code>, but not both.</p>
     */
    inline int GetStackSetMaxConcurrencyPercentage() const { return m_stackSetMaxConcurrencyPercentage; }
    inline bool StackSetMaxConcurrencyPercentageHasBeenSet() const { return m_stackSetMaxConcurrencyPercentageHasBeenSet; }
    inline void SetStackSetMaxConcurrencyPercentage(int value) { m_stackSetMaxConcurrencyPercentageHasBeenSet = true; m_stackSetMaxConcurrencyPercentage = value; }
    inline ProvisioningPreferences& WithStackSetMaxConcurrencyPercentage(int value) { SetStackSetMaxConcurrencyPercentage(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackSetAccounts;
    bool m_stackSetAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_stackSetRegions;
    bool m_stackSetRegionsHasBeenSet = false;

    int m_stackSetFailureToleranceCount{0};
    bool m_stackSetFailureToleranceCountHasBeenSet = false;

    int m_stackSetFailureTolerancePercentage{0};
    bool m_stackSetFailureTolerancePercentageHasBeenSet = false;

    int m_stackSetMaxConcurrencyCount{0};
    bool m_stackSetMaxConcurrencyCountHasBeenSet = false;

    int m_stackSetMaxConcurrencyPercentage{0};
    bool m_stackSetMaxConcurrencyPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
