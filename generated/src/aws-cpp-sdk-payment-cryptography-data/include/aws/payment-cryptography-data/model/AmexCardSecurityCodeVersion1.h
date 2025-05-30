﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Card data parameters that are required to generate a Card Security Code
   * (CSC2) for an AMEX payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/AmexCardSecurityCodeVersion1">AWS
   * API Reference</a></p>
   */
  class AmexCardSecurityCodeVersion1
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion1() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion1(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexCardSecurityCodeVersion1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const { return m_cardExpiryDate; }
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }
    template<typename CardExpiryDateT = Aws::String>
    void SetCardExpiryDate(CardExpiryDateT&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::forward<CardExpiryDateT>(value); }
    template<typename CardExpiryDateT = Aws::String>
    AmexCardSecurityCodeVersion1& WithCardExpiryDate(CardExpiryDateT&& value) { SetCardExpiryDate(std::forward<CardExpiryDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
