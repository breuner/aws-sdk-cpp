﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class GetIpAccessSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API GetIpAccessSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIpAccessSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = value; }
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::move(value); }
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn.assign(value); }
    inline GetIpAccessSettingsRequest& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}
    inline GetIpAccessSettingsRequest& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}
    inline GetIpAccessSettingsRequest& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
