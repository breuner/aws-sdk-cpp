﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpnConnectionRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnConnection"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}
    inline ModifyVpnConnectionRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline ModifyVpnConnectionRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }
    inline ModifyVpnConnectionRequest& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}
    inline ModifyVpnConnectionRequest& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}
    inline ModifyVpnConnectionRequest& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}
    inline ModifyVpnConnectionRequest& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpnConnectionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
