﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CustomerGatewayAssociationState.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the association between a customer gateway, a device, and a
   * link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CustomerGatewayAssociation">AWS
   * API Reference</a></p>
   */
  class CustomerGatewayAssociation
  {
  public:
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation();
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayArn() const{ return m_customerGatewayArn; }
    inline bool CustomerGatewayArnHasBeenSet() const { return m_customerGatewayArnHasBeenSet; }
    inline void SetCustomerGatewayArn(const Aws::String& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = value; }
    inline void SetCustomerGatewayArn(Aws::String&& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = std::move(value); }
    inline void SetCustomerGatewayArn(const char* value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn.assign(value); }
    inline CustomerGatewayAssociation& WithCustomerGatewayArn(const Aws::String& value) { SetCustomerGatewayArn(value); return *this;}
    inline CustomerGatewayAssociation& WithCustomerGatewayArn(Aws::String&& value) { SetCustomerGatewayArn(std::move(value)); return *this;}
    inline CustomerGatewayAssociation& WithCustomerGatewayArn(const char* value) { SetCustomerGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline CustomerGatewayAssociation& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline CustomerGatewayAssociation& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline CustomerGatewayAssociation& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline CustomerGatewayAssociation& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline CustomerGatewayAssociation& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline CustomerGatewayAssociation& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }
    inline CustomerGatewayAssociation& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}
    inline CustomerGatewayAssociation& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}
    inline CustomerGatewayAssociation& WithLinkId(const char* value) { SetLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association state.</p>
     */
    inline const CustomerGatewayAssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CustomerGatewayAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CustomerGatewayAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CustomerGatewayAssociation& WithState(const CustomerGatewayAssociationState& value) { SetState(value); return *this;}
    inline CustomerGatewayAssociation& WithState(CustomerGatewayAssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerGatewayArn;
    bool m_customerGatewayArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    CustomerGatewayAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
