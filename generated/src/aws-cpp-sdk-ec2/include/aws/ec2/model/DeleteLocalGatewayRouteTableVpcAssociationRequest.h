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
  class DeleteLocalGatewayRouteTableVpcAssociationRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteLocalGatewayRouteTableVpcAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLocalGatewayRouteTableVpcAssociation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVpcAssociationId() const{ return m_localGatewayRouteTableVpcAssociationId; }
    inline bool LocalGatewayRouteTableVpcAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = value; }
    inline void SetLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = std::move(value); }
    inline void SetLocalGatewayRouteTableVpcAssociationId(const char* value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId.assign(value); }
    inline DeleteLocalGatewayRouteTableVpcAssociationRequest& WithLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}
    inline DeleteLocalGatewayRouteTableVpcAssociationRequest& WithLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { SetLocalGatewayRouteTableVpcAssociationId(std::move(value)); return *this;}
    inline DeleteLocalGatewayRouteTableVpcAssociationRequest& WithLocalGatewayRouteTableVpcAssociationId(const char* value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}
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
    inline DeleteLocalGatewayRouteTableVpcAssociationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_localGatewayRouteTableVpcAssociationId;
    bool m_localGatewayRouteTableVpcAssociationIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
