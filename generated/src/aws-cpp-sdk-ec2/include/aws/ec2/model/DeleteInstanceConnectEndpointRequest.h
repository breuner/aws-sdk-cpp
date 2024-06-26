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
  class DeleteInstanceConnectEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteInstanceConnectEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstanceConnectEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DeleteInstanceConnectEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Instance Connect Endpoint to delete.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointId() const{ return m_instanceConnectEndpointId; }
    inline bool InstanceConnectEndpointIdHasBeenSet() const { return m_instanceConnectEndpointIdHasBeenSet; }
    inline void SetInstanceConnectEndpointId(const Aws::String& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = value; }
    inline void SetInstanceConnectEndpointId(Aws::String&& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = std::move(value); }
    inline void SetInstanceConnectEndpointId(const char* value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId.assign(value); }
    inline DeleteInstanceConnectEndpointRequest& WithInstanceConnectEndpointId(const Aws::String& value) { SetInstanceConnectEndpointId(value); return *this;}
    inline DeleteInstanceConnectEndpointRequest& WithInstanceConnectEndpointId(Aws::String&& value) { SetInstanceConnectEndpointId(std::move(value)); return *this;}
    inline DeleteInstanceConnectEndpointRequest& WithInstanceConnectEndpointId(const char* value) { SetInstanceConnectEndpointId(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceConnectEndpointId;
    bool m_instanceConnectEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
