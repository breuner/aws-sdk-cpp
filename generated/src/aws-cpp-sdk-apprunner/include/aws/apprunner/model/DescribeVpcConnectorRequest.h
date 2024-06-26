﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DescribeVpcConnectorRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DescribeVpcConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcConnector"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * a description for.</p> <p>The ARN must be a full VPC connector ARN.</p>
     */
    inline const Aws::String& GetVpcConnectorArn() const{ return m_vpcConnectorArn; }
    inline bool VpcConnectorArnHasBeenSet() const { return m_vpcConnectorArnHasBeenSet; }
    inline void SetVpcConnectorArn(const Aws::String& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = value; }
    inline void SetVpcConnectorArn(Aws::String&& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = std::move(value); }
    inline void SetVpcConnectorArn(const char* value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn.assign(value); }
    inline DescribeVpcConnectorRequest& WithVpcConnectorArn(const Aws::String& value) { SetVpcConnectorArn(value); return *this;}
    inline DescribeVpcConnectorRequest& WithVpcConnectorArn(Aws::String&& value) { SetVpcConnectorArn(std::move(value)); return *this;}
    inline DescribeVpcConnectorRequest& WithVpcConnectorArn(const char* value) { SetVpcConnectorArn(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectorArn;
    bool m_vpcConnectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
