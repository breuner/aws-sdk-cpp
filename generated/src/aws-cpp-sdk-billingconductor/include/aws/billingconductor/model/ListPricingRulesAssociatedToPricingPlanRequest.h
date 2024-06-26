﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListPricingRulesAssociatedToPricingPlanRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPricingRulesAssociatedToPricingPlan"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The billing period for which the pricing rule associations are to be listed.
     * </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are to be listed.</p>
     */
    inline const Aws::String& GetPricingPlanArn() const{ return m_pricingPlanArn; }
    inline bool PricingPlanArnHasBeenSet() const { return m_pricingPlanArnHasBeenSet; }
    inline void SetPricingPlanArn(const Aws::String& value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn = value; }
    inline void SetPricingPlanArn(Aws::String&& value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn = std::move(value); }
    inline void SetPricingPlanArn(const char* value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn.assign(value); }
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithPricingPlanArn(const Aws::String& value) { SetPricingPlanArn(value); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithPricingPlanArn(Aws::String&& value) { SetPricingPlanArn(std::move(value)); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithPricingPlanArn(const char* value) { SetPricingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional maximum number of pricing rule associations to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The optional pagination token returned by a previous call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPricingRulesAssociatedToPricingPlanRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_pricingPlanArn;
    bool m_pricingPlanArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
