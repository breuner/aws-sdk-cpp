﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for endpoints. A resource must be valid and active when you
   * add it as an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/EndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointConfiguration
  {
  public:
    AWS_GLOBALACCELERATOR_API EndpointConfiguration() = default;
    AWS_GLOBALACCELERATOR_API EndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API EndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID. A
     * resource must be valid and active when you add it as an endpoint.</p> <p>For
     * cross-account endpoints, this must be the ARN of the resource.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    EndpointConfiguration& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure Global Accelerator to route traffic based on proportions that you
     * specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * weights</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline EndpointConfiguration& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. The default value is true for Application Load
     * Balancer endpoints. </p> <p>If the value is set to true, the client's IP address
     * is preserved in the <code>X-Forwarded-For</code> request header as traffic
     * travels to applications on the endpoint fronted by the accelerator.</p>
     * <p>Client IP address preservation is supported, in specific Amazon Web Services
     * Regions, for endpoints that are Application Load Balancers, Amazon EC2
     * instances, and Network Load Balancers with security groups. IMPORTANT: You
     * cannot use client IP address preservation with Network Load Balancers with TLS
     * listeners.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/preserve-client-ip-address.html">
     * Preserve client IP addresses in Global Accelerator</a> in the <i>Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline bool GetClientIPPreservationEnabled() const { return m_clientIPPreservationEnabled; }
    inline bool ClientIPPreservationEnabledHasBeenSet() const { return m_clientIPPreservationEnabledHasBeenSet; }
    inline void SetClientIPPreservationEnabled(bool value) { m_clientIPPreservationEnabledHasBeenSet = true; m_clientIPPreservationEnabled = value; }
    inline EndpointConfiguration& WithClientIPPreservationEnabled(bool value) { SetClientIPPreservationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints.</p>
     */
    inline const Aws::String& GetAttachmentArn() const { return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    template<typename AttachmentArnT = Aws::String>
    void SetAttachmentArn(AttachmentArnT&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::forward<AttachmentArnT>(value); }
    template<typename AttachmentArnT = Aws::String>
    EndpointConfiguration& WithAttachmentArn(AttachmentArnT&& value) { SetAttachmentArn(std::forward<AttachmentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;

    bool m_clientIPPreservationEnabled{false};
    bool m_clientIPPreservationEnabledHasBeenSet = false;

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
