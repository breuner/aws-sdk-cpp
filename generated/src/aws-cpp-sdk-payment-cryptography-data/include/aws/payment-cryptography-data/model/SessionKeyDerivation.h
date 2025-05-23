﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmvCommon.h>
#include <aws/payment-cryptography-data/model/SessionKeyMastercard.h>
#include <aws/payment-cryptography-data/model/SessionKeyEmv2000.h>
#include <aws/payment-cryptography-data/model/SessionKeyAmex.h>
#include <aws/payment-cryptography-data/model/SessionKeyVisa.h>
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
   * <p>Parameters to derive a session key for Authorization Response Cryptogram
   * (ARQC) verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SessionKeyDerivation">AWS
   * API Reference</a></p>
   */
  class SessionKeyDerivation
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SessionKeyDerivation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters to derive session key for an Emv common payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyEmvCommon& GetEmvCommon() const { return m_emvCommon; }
    inline bool EmvCommonHasBeenSet() const { return m_emvCommonHasBeenSet; }
    template<typename EmvCommonT = SessionKeyEmvCommon>
    void SetEmvCommon(EmvCommonT&& value) { m_emvCommonHasBeenSet = true; m_emvCommon = std::forward<EmvCommonT>(value); }
    template<typename EmvCommonT = SessionKeyEmvCommon>
    SessionKeyDerivation& WithEmvCommon(EmvCommonT&& value) { SetEmvCommon(std::forward<EmvCommonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive session key for a Mastercard payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyMastercard& GetMastercard() const { return m_mastercard; }
    inline bool MastercardHasBeenSet() const { return m_mastercardHasBeenSet; }
    template<typename MastercardT = SessionKeyMastercard>
    void SetMastercard(MastercardT&& value) { m_mastercardHasBeenSet = true; m_mastercard = std::forward<MastercardT>(value); }
    template<typename MastercardT = SessionKeyMastercard>
    SessionKeyDerivation& WithMastercard(MastercardT&& value) { SetMastercard(std::forward<MastercardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive session key for an Emv2000 payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyEmv2000& GetEmv2000() const { return m_emv2000; }
    inline bool Emv2000HasBeenSet() const { return m_emv2000HasBeenSet; }
    template<typename Emv2000T = SessionKeyEmv2000>
    void SetEmv2000(Emv2000T&& value) { m_emv2000HasBeenSet = true; m_emv2000 = std::forward<Emv2000T>(value); }
    template<typename Emv2000T = SessionKeyEmv2000>
    SessionKeyDerivation& WithEmv2000(Emv2000T&& value) { SetEmv2000(std::forward<Emv2000T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive session key for an Amex payment card for ARQC
     * verification.</p>
     */
    inline const SessionKeyAmex& GetAmex() const { return m_amex; }
    inline bool AmexHasBeenSet() const { return m_amexHasBeenSet; }
    template<typename AmexT = SessionKeyAmex>
    void SetAmex(AmexT&& value) { m_amexHasBeenSet = true; m_amex = std::forward<AmexT>(value); }
    template<typename AmexT = SessionKeyAmex>
    SessionKeyDerivation& WithAmex(AmexT&& value) { SetAmex(std::forward<AmexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to derive session key for a Visa payment cardfor ARQC
     * verification.</p>
     */
    inline const SessionKeyVisa& GetVisa() const { return m_visa; }
    inline bool VisaHasBeenSet() const { return m_visaHasBeenSet; }
    template<typename VisaT = SessionKeyVisa>
    void SetVisa(VisaT&& value) { m_visaHasBeenSet = true; m_visa = std::forward<VisaT>(value); }
    template<typename VisaT = SessionKeyVisa>
    SessionKeyDerivation& WithVisa(VisaT&& value) { SetVisa(std::forward<VisaT>(value)); return *this;}
    ///@}
  private:

    SessionKeyEmvCommon m_emvCommon;
    bool m_emvCommonHasBeenSet = false;

    SessionKeyMastercard m_mastercard;
    bool m_mastercardHasBeenSet = false;

    SessionKeyEmv2000 m_emv2000;
    bool m_emv2000HasBeenSet = false;

    SessionKeyAmex m_amex;
    bool m_amexHasBeenSet = false;

    SessionKeyVisa m_visa;
    bool m_visaHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
