﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DeleteQuickConnectRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteQuickConnectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQuickConnect"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DeleteQuickConnectRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteQuickConnectRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteQuickConnectRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = value; }
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::move(value); }
    inline void SetQuickConnectId(const char* value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId.assign(value); }
    inline DeleteQuickConnectRequest& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}
    inline DeleteQuickConnectRequest& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}
    inline DeleteQuickConnectRequest& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
