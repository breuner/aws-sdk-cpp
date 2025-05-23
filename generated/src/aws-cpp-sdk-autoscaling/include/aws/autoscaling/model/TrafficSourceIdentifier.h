﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Identifying information for a traffic source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TrafficSourceIdentifier">AWS
   * API Reference</a></p>
   */
  class TrafficSourceIdentifier
  {
  public:
    AWS_AUTOSCALING_API TrafficSourceIdentifier() = default;
    AWS_AUTOSCALING_API TrafficSourceIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TrafficSourceIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Identifies the traffic source.</p> <p>For Application Load Balancers, Gateway
     * Load Balancers, Network Load Balancers, and VPC Lattice, this will be the Amazon
     * Resource Name (ARN) for a target group in this account and Region. For Classic
     * Load Balancers, this will be the name of the Classic Load Balancer in this
     * account and Region.</p> <p>For example: </p> <ul> <li> <p>Application Load
     * Balancer ARN:
     * <code>arn:aws:elasticloadbalancing:us-west-2:123456789012:targetgroup/my-targets/1234567890123456</code>
     * </p> </li> <li> <p>Classic Load Balancer name:
     * <code>my-classic-load-balancer</code> </p> </li> <li> <p>VPC Lattice ARN:
     * <code>arn:aws:vpc-lattice:us-west-2:123456789012:targetgroup/tg-1234567890123456</code>
     * </p> </li> </ul> <p>To get the ARN of a target group for a Application Load
     * Balancer, Gateway Load Balancer, or Network Load Balancer, or the name of a
     * Classic Load Balancer, use the Elastic Load Balancing <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeTargetGroups.html">DescribeTargetGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/APIReference/API_DescribeLoadBalancers.html">DescribeLoadBalancers</a>
     * API operations.</p> <p>To get the ARN of a target group for VPC Lattice, use the
     * VPC Lattice <a
     * href="https://docs.aws.amazon.com/vpc-lattice/latest/APIReference/API_GetTargetGroup.html">GetTargetGroup</a>
     * API operation.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    TrafficSourceIdentifier& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    TrafficSourceIdentifier& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
