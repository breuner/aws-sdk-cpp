﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class DeleteAppInstanceUserRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API DeleteAppInstanceUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppInstanceUser"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the user request being deleted.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline DeleteAppInstanceUserRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline DeleteAppInstanceUserRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline DeleteAppInstanceUserRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
