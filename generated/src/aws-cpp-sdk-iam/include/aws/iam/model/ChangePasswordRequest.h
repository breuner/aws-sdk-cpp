﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class ChangePasswordRequest : public IAMRequest
  {
  public:
    AWS_IAM_API ChangePasswordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangePassword"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IAM user's current password.</p>
     */
    inline const Aws::String& GetOldPassword() const { return m_oldPassword; }
    inline bool OldPasswordHasBeenSet() const { return m_oldPasswordHasBeenSet; }
    template<typename OldPasswordT = Aws::String>
    void SetOldPassword(OldPasswordT&& value) { m_oldPasswordHasBeenSet = true; m_oldPassword = std::forward<OldPasswordT>(value); }
    template<typename OldPasswordT = Aws::String>
    ChangePasswordRequest& WithOldPassword(OldPasswordT&& value) { SetOldPassword(std::forward<OldPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new password. The new password must conform to the Amazon Web Services
     * account's password policy, if one exists.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of characters. That string can include
     * almost any printable ASCII character from the space (<code>\u0020</code>)
     * through the end of the ASCII character range (<code>\u00FF</code>). You can also
     * include the tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and
     * carriage return (<code>\u000D</code>) characters. Any of these characters are
     * valid in a password. However, many tools, such as the Amazon Web Services
     * Management Console, might restrict the ability to type certain characters
     * because they have special meaning within that tool.</p>
     */
    inline const Aws::String& GetNewPassword() const { return m_newPassword; }
    inline bool NewPasswordHasBeenSet() const { return m_newPasswordHasBeenSet; }
    template<typename NewPasswordT = Aws::String>
    void SetNewPassword(NewPasswordT&& value) { m_newPasswordHasBeenSet = true; m_newPassword = std::forward<NewPasswordT>(value); }
    template<typename NewPasswordT = Aws::String>
    ChangePasswordRequest& WithNewPassword(NewPasswordT&& value) { SetNewPassword(std::forward<NewPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oldPassword;
    bool m_oldPasswordHasBeenSet = false;

    Aws::String m_newPassword;
    bool m_newPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
