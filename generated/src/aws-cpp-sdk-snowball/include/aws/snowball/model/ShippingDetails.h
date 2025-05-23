﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Shipment.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>A job's shipping information, including inbound and outbound tracking numbers
   * and shipping speed options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ShippingDetails">AWS
   * API Reference</a></p>
   */
  class ShippingDetails
  {
  public:
    AWS_SNOWBALL_API ShippingDetails() = default;
    AWS_SNOWBALL_API ShippingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ShippingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * you'll get the Snow device from the job's creation date. This speed represents
     * how quickly it moves to its destination while in transit. Regional shipping
     * speeds are as follows:</p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snow devices shipped express are delivered in about a
     * day.</p> </li> <li> <p>In the European Union (EU), you have access to express
     * shipping. Typically, Snow devices shipped express are delivered in about a day.
     * In addition, most countries in the EU have access to standard shipping, which
     * typically takes less than a week, one way.</p> </li> <li> <p>In India, Snow
     * devices are delivered in one to seven days.</p> </li> <li> <p>In the United
     * States of America (US), you have access to one-day shipping and two-day
     * shipping.</p> </li> </ul>
     */
    inline ShippingOption GetShippingOption() const { return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(ShippingOption value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline ShippingDetails& WithShippingOption(ShippingOption value) { SetShippingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snow
     * device being returned to Amazon Web Services for a particular job.</p>
     */
    inline const Shipment& GetInboundShipment() const { return m_inboundShipment; }
    inline bool InboundShipmentHasBeenSet() const { return m_inboundShipmentHasBeenSet; }
    template<typename InboundShipmentT = Shipment>
    void SetInboundShipment(InboundShipmentT&& value) { m_inboundShipmentHasBeenSet = true; m_inboundShipment = std::forward<InboundShipmentT>(value); }
    template<typename InboundShipmentT = Shipment>
    ShippingDetails& WithInboundShipment(InboundShipmentT&& value) { SetInboundShipment(std::forward<InboundShipmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Status</code> and <code>TrackingNumber</code> values for a Snow
     * device being delivered to the address that you specified for a particular
     * job.</p>
     */
    inline const Shipment& GetOutboundShipment() const { return m_outboundShipment; }
    inline bool OutboundShipmentHasBeenSet() const { return m_outboundShipmentHasBeenSet; }
    template<typename OutboundShipmentT = Shipment>
    void SetOutboundShipment(OutboundShipmentT&& value) { m_outboundShipmentHasBeenSet = true; m_outboundShipment = std::forward<OutboundShipmentT>(value); }
    template<typename OutboundShipmentT = Shipment>
    ShippingDetails& WithOutboundShipment(OutboundShipmentT&& value) { SetOutboundShipment(std::forward<OutboundShipmentT>(value)); return *this;}
    ///@}
  private:

    ShippingOption m_shippingOption{ShippingOption::NOT_SET};
    bool m_shippingOptionHasBeenSet = false;

    Shipment m_inboundShipment;
    bool m_inboundShipmentHasBeenSet = false;

    Shipment m_outboundShipment;
    bool m_outboundShipmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
