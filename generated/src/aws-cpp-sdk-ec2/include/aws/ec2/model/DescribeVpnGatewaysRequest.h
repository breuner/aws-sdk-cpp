﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeVpnGateways.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGatewaysRequest">AWS
   * API Reference</a></p>
   */
  class DescribeVpnGatewaysRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpnGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpnGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>amazon-side-asn</code> - The
     * Autonomous System Number (ASN) for the Amazon side of the gateway.</p> </li>
     * <li> <p> <code>attachment.state</code> - The current state of the attachment
     * between the gateway and the VPC (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>attachment.vpc-id</code> - The ID of an attached VPC.</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone for the virtual private
     * gateway (if applicable).</p> </li> <li> <p> <code>state</code> - The state of
     * the virtual private gateway (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p> <code>type</code>
     * - The type of virtual private gateway. Currently the only supported type is
     * <code>ipsec.1</code>.</p> </li> <li> <p> <code>vpn-gateway-id</code> - The ID of
     * the virtual private gateway.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeVpnGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeVpnGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeVpnGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeVpnGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more virtual private gateway IDs.</p> <p>Default: Describes all your
     * virtual private gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpnGatewayIds() const{ return m_vpnGatewayIds; }
    inline bool VpnGatewayIdsHasBeenSet() const { return m_vpnGatewayIdsHasBeenSet; }
    inline void SetVpnGatewayIds(const Aws::Vector<Aws::String>& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds = value; }
    inline void SetVpnGatewayIds(Aws::Vector<Aws::String>&& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds = std::move(value); }
    inline DescribeVpnGatewaysRequest& WithVpnGatewayIds(const Aws::Vector<Aws::String>& value) { SetVpnGatewayIds(value); return *this;}
    inline DescribeVpnGatewaysRequest& WithVpnGatewayIds(Aws::Vector<Aws::String>&& value) { SetVpnGatewayIds(std::move(value)); return *this;}
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(const Aws::String& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(value); return *this; }
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(Aws::String&& value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(std::move(value)); return *this; }
    inline DescribeVpnGatewaysRequest& AddVpnGatewayIds(const char* value) { m_vpnGatewayIdsHasBeenSet = true; m_vpnGatewayIds.push_back(value); return *this; }
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
    inline DescribeVpnGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpnGatewayIds;
    bool m_vpnGatewayIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
