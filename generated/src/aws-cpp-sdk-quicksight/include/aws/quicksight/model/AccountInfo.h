﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Edition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that contains the following account information elements:</p>
   * <ul> <li> <p>Your Amazon QuickSight account name.</p> </li> <li> <p>The edition
   * of Amazon QuickSight that your account is using.</p> </li> <li> <p>The
   * notification email address that is associated with the Amazon QuickSight
   * account. </p> </li> <li> <p>The authentication type of the Amazon QuickSight
   * account.</p> </li> <li> <p>The status of the Amazon QuickSight account's
   * subscription.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountInfo">AWS
   * API Reference</a></p>
   */
  class AccountInfo
  {
  public:
    AWS_QUICKSIGHT_API AccountInfo();
    AWS_QUICKSIGHT_API AccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account name that you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It's unique over all of Amazon Web Services, and it appears
     * only when users sign in.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }
    inline AccountInfo& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}
    inline AccountInfo& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}
    inline AccountInfo& WithAccountName(const char* value) { SetAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition of your Amazon QuickSight account.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }
    inline AccountInfo& WithEdition(const Edition& value) { SetEdition(value); return *this;}
    inline AccountInfo& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that will be used for Amazon QuickSight to send
     * notifications regarding your Amazon Web Services account or Amazon QuickSight
     * subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }
    inline AccountInfo& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}
    inline AccountInfo& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}
    inline AccountInfo& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way that your Amazon QuickSight account is authenticated.</p>
     */
    inline const Aws::String& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const Aws::String& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(Aws::String&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline void SetAuthenticationType(const char* value) { m_authenticationTypeHasBeenSet = true; m_authenticationType.assign(value); }
    inline AccountInfo& WithAuthenticationType(const Aws::String& value) { SetAuthenticationType(value); return *this;}
    inline AccountInfo& WithAuthenticationType(Aws::String&& value) { SetAuthenticationType(std::move(value)); return *this;}
    inline AccountInfo& WithAuthenticationType(const char* value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your account subscription.</p>
     */
    inline const Aws::String& GetAccountSubscriptionStatus() const{ return m_accountSubscriptionStatus; }
    inline bool AccountSubscriptionStatusHasBeenSet() const { return m_accountSubscriptionStatusHasBeenSet; }
    inline void SetAccountSubscriptionStatus(const Aws::String& value) { m_accountSubscriptionStatusHasBeenSet = true; m_accountSubscriptionStatus = value; }
    inline void SetAccountSubscriptionStatus(Aws::String&& value) { m_accountSubscriptionStatusHasBeenSet = true; m_accountSubscriptionStatus = std::move(value); }
    inline void SetAccountSubscriptionStatus(const char* value) { m_accountSubscriptionStatusHasBeenSet = true; m_accountSubscriptionStatus.assign(value); }
    inline AccountInfo& WithAccountSubscriptionStatus(const Aws::String& value) { SetAccountSubscriptionStatus(value); return *this;}
    inline AccountInfo& WithAccountSubscriptionStatus(Aws::String&& value) { SetAccountSubscriptionStatus(std::move(value)); return *this;}
    inline AccountInfo& WithAccountSubscriptionStatus(const char* value) { SetAccountSubscriptionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIAMIdentityCenterInstanceArn() const{ return m_iAMIdentityCenterInstanceArn; }
    inline bool IAMIdentityCenterInstanceArnHasBeenSet() const { return m_iAMIdentityCenterInstanceArnHasBeenSet; }
    inline void SetIAMIdentityCenterInstanceArn(const Aws::String& value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn = value; }
    inline void SetIAMIdentityCenterInstanceArn(Aws::String&& value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn = std::move(value); }
    inline void SetIAMIdentityCenterInstanceArn(const char* value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn.assign(value); }
    inline AccountInfo& WithIAMIdentityCenterInstanceArn(const Aws::String& value) { SetIAMIdentityCenterInstanceArn(value); return *this;}
    inline AccountInfo& WithIAMIdentityCenterInstanceArn(Aws::String&& value) { SetIAMIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline AccountInfo& WithIAMIdentityCenterInstanceArn(const char* value) { SetIAMIdentityCenterInstanceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Edition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    Aws::String m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_accountSubscriptionStatus;
    bool m_accountSubscriptionStatusHasBeenSet = false;

    Aws::String m_iAMIdentityCenterInstanceArn;
    bool m_iAMIdentityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
