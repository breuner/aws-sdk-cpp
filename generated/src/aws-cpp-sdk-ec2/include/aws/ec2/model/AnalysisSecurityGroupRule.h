﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PortRange.h>
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
   * <p>Describes a security group rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisSecurityGroupRule">AWS
   * API Reference</a></p>
   */
  class AnalysisSecurityGroupRule
  {
  public:
    AWS_EC2_API AnalysisSecurityGroupRule();
    AWS_EC2_API AnalysisSecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisSecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline AnalysisSecurityGroupRule& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline AnalysisSecurityGroupRule& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline AnalysisSecurityGroupRule& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The following are the possible values:</p> <ul> <li>
     * <p>egress</p> </li> <li> <p>ingress</p> </li> </ul>
     */
    inline const Aws::String& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const Aws::String& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(Aws::String&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline void SetDirection(const char* value) { m_directionHasBeenSet = true; m_direction.assign(value); }
    inline AnalysisSecurityGroupRule& WithDirection(const Aws::String& value) { SetDirection(value); return *this;}
    inline AnalysisSecurityGroupRule& WithDirection(Aws::String&& value) { SetDirection(std::move(value)); return *this;}
    inline AnalysisSecurityGroupRule& WithDirection(const char* value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group ID.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }
    inline AnalysisSecurityGroupRule& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}
    inline AnalysisSecurityGroupRule& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}
    inline AnalysisSecurityGroupRule& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range.</p>
     */
    inline const PortRange& GetPortRange() const{ return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    inline void SetPortRange(const PortRange& value) { m_portRangeHasBeenSet = true; m_portRange = value; }
    inline void SetPortRange(PortRange&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }
    inline AnalysisSecurityGroupRule& WithPortRange(const PortRange& value) { SetPortRange(value); return *this;}
    inline AnalysisSecurityGroupRule& WithPortRange(PortRange&& value) { SetPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix list ID.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline AnalysisSecurityGroupRule& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline AnalysisSecurityGroupRule& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline AnalysisSecurityGroupRule& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol name.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline AnalysisSecurityGroupRule& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline AnalysisSecurityGroupRule& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline AnalysisSecurityGroupRule& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
