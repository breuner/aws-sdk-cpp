﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamPoolCidrState.h>
#include <aws/ec2/model/IpamPoolCidrFailureReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A CIDR provisioned to an IPAM pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPoolCidr">AWS
   * API Reference</a></p>
   */
  class IpamPoolCidr
  {
  public:
    AWS_EC2_API IpamPoolCidr();
    AWS_EC2_API IpamPoolCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline IpamPoolCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline IpamPoolCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline IpamPoolCidr& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the CIDR.</p>
     */
    inline const IpamPoolCidrState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IpamPoolCidrState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IpamPoolCidrState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IpamPoolCidr& WithState(const IpamPoolCidrState& value) { SetState(value); return *this;}
    inline IpamPoolCidr& WithState(IpamPoolCidrState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline const IpamPoolCidrFailureReason& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const IpamPoolCidrFailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(IpamPoolCidrFailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline IpamPoolCidr& WithFailureReason(const IpamPoolCidrFailureReason& value) { SetFailureReason(value); return *this;}
    inline IpamPoolCidr& WithFailureReason(IpamPoolCidrFailureReason&& value) { SetFailureReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM pool CIDR ID.</p>
     */
    inline const Aws::String& GetIpamPoolCidrId() const{ return m_ipamPoolCidrId; }
    inline bool IpamPoolCidrIdHasBeenSet() const { return m_ipamPoolCidrIdHasBeenSet; }
    inline void SetIpamPoolCidrId(const Aws::String& value) { m_ipamPoolCidrIdHasBeenSet = true; m_ipamPoolCidrId = value; }
    inline void SetIpamPoolCidrId(Aws::String&& value) { m_ipamPoolCidrIdHasBeenSet = true; m_ipamPoolCidrId = std::move(value); }
    inline void SetIpamPoolCidrId(const char* value) { m_ipamPoolCidrIdHasBeenSet = true; m_ipamPoolCidrId.assign(value); }
    inline IpamPoolCidr& WithIpamPoolCidrId(const Aws::String& value) { SetIpamPoolCidrId(value); return *this;}
    inline IpamPoolCidr& WithIpamPoolCidrId(Aws::String&& value) { SetIpamPoolCidrId(std::move(value)); return *this;}
    inline IpamPoolCidr& WithIpamPoolCidrId(const char* value) { SetIpamPoolCidrId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask length of the CIDR you'd like to provision to a pool. Can be used
     * for provisioning Amazon-provided IPv6 CIDRs to top-level pools and for
     * provisioning CIDRs to pools with source pools. Cannot be used to provision BYOIP
     * CIDRs to top-level pools. "NetmaskLength" or "Cidr" is required.</p>
     */
    inline int GetNetmaskLength() const{ return m_netmaskLength; }
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }
    inline IpamPoolCidr& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    IpamPoolCidrState m_state;
    bool m_stateHasBeenSet = false;

    IpamPoolCidrFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_ipamPoolCidrId;
    bool m_ipamPoolCidrIdHasBeenSet = false;

    int m_netmaskLength;
    bool m_netmaskLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
