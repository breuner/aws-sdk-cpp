﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>The violation details for a firewall subnet's VPC endpoint that's deleted or
   * missing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/FirewallSubnetMissingVPCEndpointViolation">AWS
   * API Reference</a></p>
   */
  class FirewallSubnetMissingVPCEndpointViolation
  {
  public:
    AWS_FMS_API FirewallSubnetMissingVPCEndpointViolation();
    AWS_FMS_API FirewallSubnetMissingVPCEndpointViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FirewallSubnetMissingVPCEndpointViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the firewall that this VPC endpoint is associated with.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const{ return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    inline void SetFirewallSubnetId(const Aws::String& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = value; }
    inline void SetFirewallSubnetId(Aws::String&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::move(value); }
    inline void SetFirewallSubnetId(const char* value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId.assign(value); }
    inline FirewallSubnetMissingVPCEndpointViolation& WithFirewallSubnetId(const Aws::String& value) { SetFirewallSubnetId(value); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithFirewallSubnetId(Aws::String&& value) { SetFirewallSubnetId(std::move(value)); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithFirewallSubnetId(const char* value) { SetFirewallSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the VPC associated with the deleted VPC subnet.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline FirewallSubnetMissingVPCEndpointViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone of the deleted VPC subnet.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone of the deleted VPC subnet.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZoneId() const{ return m_subnetAvailabilityZoneId; }
    inline bool SubnetAvailabilityZoneIdHasBeenSet() const { return m_subnetAvailabilityZoneIdHasBeenSet; }
    inline void SetSubnetAvailabilityZoneId(const Aws::String& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = value; }
    inline void SetSubnetAvailabilityZoneId(Aws::String&& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = std::move(value); }
    inline void SetSubnetAvailabilityZoneId(const char* value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId.assign(value); }
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZoneId(const Aws::String& value) { SetSubnetAvailabilityZoneId(value); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZoneId(Aws::String&& value) { SetSubnetAvailabilityZoneId(std::move(value)); return *this;}
    inline FirewallSubnetMissingVPCEndpointViolation& WithSubnetAvailabilityZoneId(const char* value) { SetSubnetAvailabilityZoneId(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallSubnetId;
    bool m_firewallSubnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_subnetAvailabilityZoneId;
    bool m_subnetAvailabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
