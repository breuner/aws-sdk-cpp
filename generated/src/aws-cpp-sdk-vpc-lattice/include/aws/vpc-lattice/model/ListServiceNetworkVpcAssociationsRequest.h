﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class ListServiceNetworkVpcAssociationsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListServiceNetworkVpcAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceNetworkVpcAssociations"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceNetworkVpcAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceNetworkVpcAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const { return m_serviceNetworkIdentifier; }
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    void SetServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::forward<ServiceNetworkIdentifierT>(value); }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    ListServiceNetworkVpcAssociationsRequest& WithServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { SetServiceNetworkIdentifier(std::forward<ServiceNetworkIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the VPC.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const { return m_vpcIdentifier; }
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
    template<typename VpcIdentifierT = Aws::String>
    void SetVpcIdentifier(VpcIdentifierT&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::forward<VpcIdentifierT>(value); }
    template<typename VpcIdentifierT = Aws::String>
    ListServiceNetworkVpcAssociationsRequest& WithVpcIdentifier(VpcIdentifierT&& value) { SetVpcIdentifier(std::forward<VpcIdentifierT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
