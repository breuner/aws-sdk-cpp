﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/GrantItem.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines a prepaid pricing model where the customers are charged a fixed
   * upfront amount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/FixedUpfrontPricingTerm">AWS
   * API Reference</a></p>
   */
  class FixedUpfrontPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm();
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API FixedUpfrontPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the currency for the prices mentioned in this term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline FixedUpfrontPricingTerm& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline FixedUpfrontPricingTerm& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline FixedUpfrontPricingTerm& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contract duration for the terms.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }
    inline FixedUpfrontPricingTerm& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}
    inline FixedUpfrontPricingTerm& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}
    inline FixedUpfrontPricingTerm& WithDuration(const char* value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlements granted to the acceptor of fixed upfront as part of agreement
     * execution.</p>
     */
    inline const Aws::Vector<GrantItem>& GetGrants() const{ return m_grants; }
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
    inline void SetGrants(const Aws::Vector<GrantItem>& value) { m_grantsHasBeenSet = true; m_grants = value; }
    inline void SetGrants(Aws::Vector<GrantItem>&& value) { m_grantsHasBeenSet = true; m_grants = std::move(value); }
    inline FixedUpfrontPricingTerm& WithGrants(const Aws::Vector<GrantItem>& value) { SetGrants(value); return *this;}
    inline FixedUpfrontPricingTerm& WithGrants(Aws::Vector<GrantItem>&& value) { SetGrants(std::move(value)); return *this;}
    inline FixedUpfrontPricingTerm& AddGrants(const GrantItem& value) { m_grantsHasBeenSet = true; m_grants.push_back(value); return *this; }
    inline FixedUpfrontPricingTerm& AddGrants(GrantItem&& value) { m_grantsHasBeenSet = true; m_grants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Fixed amount to be charged to the customer when this term is accepted.</p>
     */
    inline const Aws::String& GetPrice() const{ return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(const Aws::String& value) { m_priceHasBeenSet = true; m_price = value; }
    inline void SetPrice(Aws::String&& value) { m_priceHasBeenSet = true; m_price = std::move(value); }
    inline void SetPrice(const char* value) { m_priceHasBeenSet = true; m_price.assign(value); }
    inline FixedUpfrontPricingTerm& WithPrice(const Aws::String& value) { SetPrice(value); return *this;}
    inline FixedUpfrontPricingTerm& WithPrice(Aws::String&& value) { SetPrice(std::move(value)); return *this;}
    inline FixedUpfrontPricingTerm& WithPrice(const char* value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category of the term being updated.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline FixedUpfrontPricingTerm& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline FixedUpfrontPricingTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline FixedUpfrontPricingTerm& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<GrantItem> m_grants;
    bool m_grantsHasBeenSet = false;

    Aws::String m_price;
    bool m_priceHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
