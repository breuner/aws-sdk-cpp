﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeTransitGatewaysRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTransitGatewaysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransitGateways"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayIds() const { return m_transitGatewayIds; }
    inline bool TransitGatewayIdsHasBeenSet() const { return m_transitGatewayIdsHasBeenSet; }
    template<typename TransitGatewayIdsT = Aws::Vector<Aws::String>>
    void SetTransitGatewayIds(TransitGatewayIdsT&& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds = std::forward<TransitGatewayIdsT>(value); }
    template<typename TransitGatewayIdsT = Aws::Vector<Aws::String>>
    DescribeTransitGatewaysRequest& WithTransitGatewayIds(TransitGatewayIdsT&& value) { SetTransitGatewayIds(std::forward<TransitGatewayIdsT>(value)); return *this;}
    template<typename TransitGatewayIdsT = Aws::String>
    DescribeTransitGatewaysRequest& AddTransitGatewayIds(TransitGatewayIdsT&& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds.emplace_back(std::forward<TransitGatewayIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the transit gateway.</p> </li> <li> <p> <code>state</code> - The state
     * of the transit gateway (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>modifying</code> | <code>pending</code>).</p>
     * </li> <li> <p> <code>transit-gateway-id</code> - The ID of the transit
     * gateway.</p> </li> <li> <p> <code>tag-key </code>- The key/value combination of
     * a tag assigned to the resource. Use the tag key in the filter name and the tag
     * value as the filter value. For example, to find all resources that have a tag
     * with the key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeTransitGatewaysRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeTransitGatewaysRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeTransitGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTransitGatewaysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeTransitGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_transitGatewayIds;
    bool m_transitGatewayIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
