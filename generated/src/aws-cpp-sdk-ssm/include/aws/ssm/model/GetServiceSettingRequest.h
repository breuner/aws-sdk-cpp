﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   * <p>The request body of the GetServiceSetting API operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSettingRequest">AWS
   * API Reference</a></p>
   */
  class GetServiceSettingRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetServiceSettingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceSetting"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the service setting to get. The setting ID can be one of the
     * following.</p> <ul> <li> <p> <code>/ssm/appmanager/appmanager-enabled</code>
     * </p> </li> <li> <p> <code>/ssm/automation/customer-script-log-destination</code>
     * </p> </li> <li> <p> <code>/ssm/automation/customer-script-log-group-name</code>
     * </p> </li> <li> <p>/ssm/automation/enable-adaptive-concurrency</p> </li> <li>
     * <p> <code>/ssm/documents/console/public-sharing-permission</code> </p> </li>
     * <li> <p> <code>/ssm/managed-instance/activation-tier</code> </p> </li> <li> <p>
     * <code>/ssm/managed-instance/default-ec2-instance-management-role</code> </p>
     * </li> <li> <p> <code>/ssm/opsinsights/opscenter</code> </p> </li> <li> <p>
     * <code>/ssm/parameter-store/default-parameter-tier</code> </p> </li> <li> <p>
     * <code>/ssm/parameter-store/high-throughput-enabled</code> </p> </li> </ul>
     */
    inline const Aws::String& GetSettingId() const { return m_settingId; }
    inline bool SettingIdHasBeenSet() const { return m_settingIdHasBeenSet; }
    template<typename SettingIdT = Aws::String>
    void SetSettingId(SettingIdT&& value) { m_settingIdHasBeenSet = true; m_settingId = std::forward<SettingIdT>(value); }
    template<typename SettingIdT = Aws::String>
    GetServiceSettingRequest& WithSettingId(SettingIdT&& value) { SetSettingId(std::forward<SettingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_settingId;
    bool m_settingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
