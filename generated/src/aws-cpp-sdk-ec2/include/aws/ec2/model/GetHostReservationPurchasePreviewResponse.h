﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Purchase.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetHostReservationPurchasePreviewResponse
  {
  public:
    AWS_EC2_API GetHostReservationPurchasePreviewResponse();
    AWS_EC2_API GetHostReservationPurchasePreviewResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetHostReservationPurchasePreviewResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code> and
     * <code>totalHourlyPrice</code> amounts are specified. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCode = std::move(value); }
    inline GetHostReservationPurchasePreviewResponse& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase information of the Dedicated Host reservation and the Dedicated
     * Hosts associated with it.</p>
     */
    inline const Aws::Vector<Purchase>& GetPurchase() const{ return m_purchase; }
    inline void SetPurchase(const Aws::Vector<Purchase>& value) { m_purchase = value; }
    inline void SetPurchase(Aws::Vector<Purchase>&& value) { m_purchase = std::move(value); }
    inline GetHostReservationPurchasePreviewResponse& WithPurchase(const Aws::Vector<Purchase>& value) { SetPurchase(value); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithPurchase(Aws::Vector<Purchase>&& value) { SetPurchase(std::move(value)); return *this;}
    inline GetHostReservationPurchasePreviewResponse& AddPurchase(const Purchase& value) { m_purchase.push_back(value); return *this; }
    inline GetHostReservationPurchasePreviewResponse& AddPurchase(Purchase&& value) { m_purchase.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The potential total hourly price of the reservation per hour.</p>
     */
    inline const Aws::String& GetTotalHourlyPrice() const{ return m_totalHourlyPrice; }
    inline void SetTotalHourlyPrice(const Aws::String& value) { m_totalHourlyPrice = value; }
    inline void SetTotalHourlyPrice(Aws::String&& value) { m_totalHourlyPrice = std::move(value); }
    inline void SetTotalHourlyPrice(const char* value) { m_totalHourlyPrice.assign(value); }
    inline GetHostReservationPurchasePreviewResponse& WithTotalHourlyPrice(const Aws::String& value) { SetTotalHourlyPrice(value); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithTotalHourlyPrice(Aws::String&& value) { SetTotalHourlyPrice(std::move(value)); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithTotalHourlyPrice(const char* value) { SetTotalHourlyPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The potential total upfront price. This is billed immediately.</p>
     */
    inline const Aws::String& GetTotalUpfrontPrice() const{ return m_totalUpfrontPrice; }
    inline void SetTotalUpfrontPrice(const Aws::String& value) { m_totalUpfrontPrice = value; }
    inline void SetTotalUpfrontPrice(Aws::String&& value) { m_totalUpfrontPrice = std::move(value); }
    inline void SetTotalUpfrontPrice(const char* value) { m_totalUpfrontPrice.assign(value); }
    inline GetHostReservationPurchasePreviewResponse& WithTotalUpfrontPrice(const Aws::String& value) { SetTotalUpfrontPrice(value); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithTotalUpfrontPrice(Aws::String&& value) { SetTotalUpfrontPrice(std::move(value)); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithTotalUpfrontPrice(const char* value) { SetTotalUpfrontPrice(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetHostReservationPurchasePreviewResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetHostReservationPurchasePreviewResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode;

    Aws::Vector<Purchase> m_purchase;

    Aws::String m_totalHourlyPrice;

    Aws::String m_totalUpfrontPrice;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
