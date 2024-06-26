﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AnalysisAclRule.h>
#include <aws/ec2/model/AnalysisComponent.h>
#include <aws/ec2/model/AnalysisPacketHeader.h>
#include <aws/ec2/model/AnalysisRouteTableRoute.h>
#include <aws/ec2/model/AnalysisSecurityGroupRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TransitGatewayRouteTableRoute.h>
#include <aws/ec2/model/FirewallStatelessRule.h>
#include <aws/ec2/model/FirewallStatefulRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AdditionalDetail.h>
#include <aws/ec2/model/Explanation.h>
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
   * <p>Describes a path component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PathComponent">AWS
   * API Reference</a></p>
   */
  class PathComponent
  {
  public:
    AWS_EC2_API PathComponent();
    AWS_EC2_API PathComponent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathComponent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The sequence number.</p>
     */
    inline int GetSequenceNumber() const{ return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    inline void SetSequenceNumber(int value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }
    inline PathComponent& WithSequenceNumber(int value) { SetSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL rule.</p>
     */
    inline const AnalysisAclRule& GetAclRule() const{ return m_aclRule; }
    inline bool AclRuleHasBeenSet() const { return m_aclRuleHasBeenSet; }
    inline void SetAclRule(const AnalysisAclRule& value) { m_aclRuleHasBeenSet = true; m_aclRule = value; }
    inline void SetAclRule(AnalysisAclRule&& value) { m_aclRuleHasBeenSet = true; m_aclRule = std::move(value); }
    inline PathComponent& WithAclRule(const AnalysisAclRule& value) { SetAclRule(value); return *this;}
    inline PathComponent& WithAclRule(AnalysisAclRule&& value) { SetAclRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the path component is attached.</p>
     */
    inline const AnalysisComponent& GetAttachedTo() const{ return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    inline void SetAttachedTo(const AnalysisComponent& value) { m_attachedToHasBeenSet = true; m_attachedTo = value; }
    inline void SetAttachedTo(AnalysisComponent&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::move(value); }
    inline PathComponent& WithAttachedTo(const AnalysisComponent& value) { SetAttachedTo(value); return *this;}
    inline PathComponent& WithAttachedTo(AnalysisComponent&& value) { SetAttachedTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component.</p>
     */
    inline const AnalysisComponent& GetComponent() const{ return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    inline void SetComponent(const AnalysisComponent& value) { m_componentHasBeenSet = true; m_component = value; }
    inline void SetComponent(AnalysisComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }
    inline PathComponent& WithComponent(const AnalysisComponent& value) { SetComponent(value); return *this;}
    inline PathComponent& WithComponent(AnalysisComponent&& value) { SetComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination VPC.</p>
     */
    inline const AnalysisComponent& GetDestinationVpc() const{ return m_destinationVpc; }
    inline bool DestinationVpcHasBeenSet() const { return m_destinationVpcHasBeenSet; }
    inline void SetDestinationVpc(const AnalysisComponent& value) { m_destinationVpcHasBeenSet = true; m_destinationVpc = value; }
    inline void SetDestinationVpc(AnalysisComponent&& value) { m_destinationVpcHasBeenSet = true; m_destinationVpc = std::move(value); }
    inline PathComponent& WithDestinationVpc(const AnalysisComponent& value) { SetDestinationVpc(value); return *this;}
    inline PathComponent& WithDestinationVpc(AnalysisComponent&& value) { SetDestinationVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound header.</p>
     */
    inline const AnalysisPacketHeader& GetOutboundHeader() const{ return m_outboundHeader; }
    inline bool OutboundHeaderHasBeenSet() const { return m_outboundHeaderHasBeenSet; }
    inline void SetOutboundHeader(const AnalysisPacketHeader& value) { m_outboundHeaderHasBeenSet = true; m_outboundHeader = value; }
    inline void SetOutboundHeader(AnalysisPacketHeader&& value) { m_outboundHeaderHasBeenSet = true; m_outboundHeader = std::move(value); }
    inline PathComponent& WithOutboundHeader(const AnalysisPacketHeader& value) { SetOutboundHeader(value); return *this;}
    inline PathComponent& WithOutboundHeader(AnalysisPacketHeader&& value) { SetOutboundHeader(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound header.</p>
     */
    inline const AnalysisPacketHeader& GetInboundHeader() const{ return m_inboundHeader; }
    inline bool InboundHeaderHasBeenSet() const { return m_inboundHeaderHasBeenSet; }
    inline void SetInboundHeader(const AnalysisPacketHeader& value) { m_inboundHeaderHasBeenSet = true; m_inboundHeader = value; }
    inline void SetInboundHeader(AnalysisPacketHeader&& value) { m_inboundHeaderHasBeenSet = true; m_inboundHeader = std::move(value); }
    inline PathComponent& WithInboundHeader(const AnalysisPacketHeader& value) { SetInboundHeader(value); return *this;}
    inline PathComponent& WithInboundHeader(AnalysisPacketHeader&& value) { SetInboundHeader(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table route.</p>
     */
    inline const AnalysisRouteTableRoute& GetRouteTableRoute() const{ return m_routeTableRoute; }
    inline bool RouteTableRouteHasBeenSet() const { return m_routeTableRouteHasBeenSet; }
    inline void SetRouteTableRoute(const AnalysisRouteTableRoute& value) { m_routeTableRouteHasBeenSet = true; m_routeTableRoute = value; }
    inline void SetRouteTableRoute(AnalysisRouteTableRoute&& value) { m_routeTableRouteHasBeenSet = true; m_routeTableRoute = std::move(value); }
    inline PathComponent& WithRouteTableRoute(const AnalysisRouteTableRoute& value) { SetRouteTableRoute(value); return *this;}
    inline PathComponent& WithRouteTableRoute(AnalysisRouteTableRoute&& value) { SetRouteTableRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule.</p>
     */
    inline const AnalysisSecurityGroupRule& GetSecurityGroupRule() const{ return m_securityGroupRule; }
    inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }
    inline void SetSecurityGroupRule(const AnalysisSecurityGroupRule& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = value; }
    inline void SetSecurityGroupRule(AnalysisSecurityGroupRule&& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = std::move(value); }
    inline PathComponent& WithSecurityGroupRule(const AnalysisSecurityGroupRule& value) { SetSecurityGroupRule(value); return *this;}
    inline PathComponent& WithSecurityGroupRule(AnalysisSecurityGroupRule&& value) { SetSecurityGroupRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source VPC.</p>
     */
    inline const AnalysisComponent& GetSourceVpc() const{ return m_sourceVpc; }
    inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
    inline void SetSourceVpc(const AnalysisComponent& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = value; }
    inline void SetSourceVpc(AnalysisComponent&& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = std::move(value); }
    inline PathComponent& WithSourceVpc(const AnalysisComponent& value) { SetSourceVpc(value); return *this;}
    inline PathComponent& WithSourceVpc(AnalysisComponent&& value) { SetSourceVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet.</p>
     */
    inline const AnalysisComponent& GetSubnet() const{ return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    inline void SetSubnet(const AnalysisComponent& value) { m_subnetHasBeenSet = true; m_subnet = value; }
    inline void SetSubnet(AnalysisComponent&& value) { m_subnetHasBeenSet = true; m_subnet = std::move(value); }
    inline PathComponent& WithSubnet(const AnalysisComponent& value) { SetSubnet(value); return *this;}
    inline PathComponent& WithSubnet(AnalysisComponent&& value) { SetSubnet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component VPC.</p>
     */
    inline const AnalysisComponent& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const AnalysisComponent& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(AnalysisComponent&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline PathComponent& WithVpc(const AnalysisComponent& value) { SetVpc(value); return *this;}
    inline PathComponent& WithVpc(AnalysisComponent&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional details.</p>
     */
    inline const Aws::Vector<AdditionalDetail>& GetAdditionalDetails() const{ return m_additionalDetails; }
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }
    inline void SetAdditionalDetails(const Aws::Vector<AdditionalDetail>& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = value; }
    inline void SetAdditionalDetails(Aws::Vector<AdditionalDetail>&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::move(value); }
    inline PathComponent& WithAdditionalDetails(const Aws::Vector<AdditionalDetail>& value) { SetAdditionalDetails(value); return *this;}
    inline PathComponent& WithAdditionalDetails(Aws::Vector<AdditionalDetail>&& value) { SetAdditionalDetails(std::move(value)); return *this;}
    inline PathComponent& AddAdditionalDetails(const AdditionalDetail& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.push_back(value); return *this; }
    inline PathComponent& AddAdditionalDetails(AdditionalDetail&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transit gateway.</p>
     */
    inline const AnalysisComponent& GetTransitGateway() const{ return m_transitGateway; }
    inline bool TransitGatewayHasBeenSet() const { return m_transitGatewayHasBeenSet; }
    inline void SetTransitGateway(const AnalysisComponent& value) { m_transitGatewayHasBeenSet = true; m_transitGateway = value; }
    inline void SetTransitGateway(AnalysisComponent&& value) { m_transitGatewayHasBeenSet = true; m_transitGateway = std::move(value); }
    inline PathComponent& WithTransitGateway(const AnalysisComponent& value) { SetTransitGateway(value); return *this;}
    inline PathComponent& WithTransitGateway(AnalysisComponent&& value) { SetTransitGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route in a transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTableRoute& GetTransitGatewayRouteTableRoute() const{ return m_transitGatewayRouteTableRoute; }
    inline bool TransitGatewayRouteTableRouteHasBeenSet() const { return m_transitGatewayRouteTableRouteHasBeenSet; }
    inline void SetTransitGatewayRouteTableRoute(const TransitGatewayRouteTableRoute& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = value; }
    inline void SetTransitGatewayRouteTableRoute(TransitGatewayRouteTableRoute&& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = std::move(value); }
    inline PathComponent& WithTransitGatewayRouteTableRoute(const TransitGatewayRouteTableRoute& value) { SetTransitGatewayRouteTableRoute(value); return *this;}
    inline PathComponent& WithTransitGatewayRouteTableRoute(TransitGatewayRouteTableRoute&& value) { SetTransitGatewayRouteTableRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation codes.</p>
     */
    inline const Aws::Vector<Explanation>& GetExplanations() const{ return m_explanations; }
    inline bool ExplanationsHasBeenSet() const { return m_explanationsHasBeenSet; }
    inline void SetExplanations(const Aws::Vector<Explanation>& value) { m_explanationsHasBeenSet = true; m_explanations = value; }
    inline void SetExplanations(Aws::Vector<Explanation>&& value) { m_explanationsHasBeenSet = true; m_explanations = std::move(value); }
    inline PathComponent& WithExplanations(const Aws::Vector<Explanation>& value) { SetExplanations(value); return *this;}
    inline PathComponent& WithExplanations(Aws::Vector<Explanation>&& value) { SetExplanations(std::move(value)); return *this;}
    inline PathComponent& AddExplanations(const Explanation& value) { m_explanationsHasBeenSet = true; m_explanations.push_back(value); return *this; }
    inline PathComponent& AddExplanations(Explanation&& value) { m_explanationsHasBeenSet = true; m_explanations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load balancer listener.</p>
     */
    inline const AnalysisComponent& GetElasticLoadBalancerListener() const{ return m_elasticLoadBalancerListener; }
    inline bool ElasticLoadBalancerListenerHasBeenSet() const { return m_elasticLoadBalancerListenerHasBeenSet; }
    inline void SetElasticLoadBalancerListener(const AnalysisComponent& value) { m_elasticLoadBalancerListenerHasBeenSet = true; m_elasticLoadBalancerListener = value; }
    inline void SetElasticLoadBalancerListener(AnalysisComponent&& value) { m_elasticLoadBalancerListenerHasBeenSet = true; m_elasticLoadBalancerListener = std::move(value); }
    inline PathComponent& WithElasticLoadBalancerListener(const AnalysisComponent& value) { SetElasticLoadBalancerListener(value); return *this;}
    inline PathComponent& WithElasticLoadBalancerListener(AnalysisComponent&& value) { SetElasticLoadBalancerListener(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateless rule.</p>
     */
    inline const FirewallStatelessRule& GetFirewallStatelessRule() const{ return m_firewallStatelessRule; }
    inline bool FirewallStatelessRuleHasBeenSet() const { return m_firewallStatelessRuleHasBeenSet; }
    inline void SetFirewallStatelessRule(const FirewallStatelessRule& value) { m_firewallStatelessRuleHasBeenSet = true; m_firewallStatelessRule = value; }
    inline void SetFirewallStatelessRule(FirewallStatelessRule&& value) { m_firewallStatelessRuleHasBeenSet = true; m_firewallStatelessRule = std::move(value); }
    inline PathComponent& WithFirewallStatelessRule(const FirewallStatelessRule& value) { SetFirewallStatelessRule(value); return *this;}
    inline PathComponent& WithFirewallStatelessRule(FirewallStatelessRule&& value) { SetFirewallStatelessRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateful rule.</p>
     */
    inline const FirewallStatefulRule& GetFirewallStatefulRule() const{ return m_firewallStatefulRule; }
    inline bool FirewallStatefulRuleHasBeenSet() const { return m_firewallStatefulRuleHasBeenSet; }
    inline void SetFirewallStatefulRule(const FirewallStatefulRule& value) { m_firewallStatefulRuleHasBeenSet = true; m_firewallStatefulRule = value; }
    inline void SetFirewallStatefulRule(FirewallStatefulRule&& value) { m_firewallStatefulRuleHasBeenSet = true; m_firewallStatefulRule = std::move(value); }
    inline PathComponent& WithFirewallStatefulRule(const FirewallStatefulRule& value) { SetFirewallStatefulRule(value); return *this;}
    inline PathComponent& WithFirewallStatefulRule(FirewallStatefulRule&& value) { SetFirewallStatefulRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline PathComponent& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline PathComponent& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline PathComponent& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}
  private:

    int m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    AnalysisAclRule m_aclRule;
    bool m_aclRuleHasBeenSet = false;

    AnalysisComponent m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    AnalysisComponent m_component;
    bool m_componentHasBeenSet = false;

    AnalysisComponent m_destinationVpc;
    bool m_destinationVpcHasBeenSet = false;

    AnalysisPacketHeader m_outboundHeader;
    bool m_outboundHeaderHasBeenSet = false;

    AnalysisPacketHeader m_inboundHeader;
    bool m_inboundHeaderHasBeenSet = false;

    AnalysisRouteTableRoute m_routeTableRoute;
    bool m_routeTableRouteHasBeenSet = false;

    AnalysisSecurityGroupRule m_securityGroupRule;
    bool m_securityGroupRuleHasBeenSet = false;

    AnalysisComponent m_sourceVpc;
    bool m_sourceVpcHasBeenSet = false;

    AnalysisComponent m_subnet;
    bool m_subnetHasBeenSet = false;

    AnalysisComponent m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::Vector<AdditionalDetail> m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    AnalysisComponent m_transitGateway;
    bool m_transitGatewayHasBeenSet = false;

    TransitGatewayRouteTableRoute m_transitGatewayRouteTableRoute;
    bool m_transitGatewayRouteTableRouteHasBeenSet = false;

    Aws::Vector<Explanation> m_explanations;
    bool m_explanationsHasBeenSet = false;

    AnalysisComponent m_elasticLoadBalancerListener;
    bool m_elasticLoadBalancerListenerHasBeenSet = false;

    FirewallStatelessRule m_firewallStatelessRule;
    bool m_firewallStatelessRuleHasBeenSet = false;

    FirewallStatefulRule m_firewallStatefulRule;
    bool m_firewallStatefulRuleHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
