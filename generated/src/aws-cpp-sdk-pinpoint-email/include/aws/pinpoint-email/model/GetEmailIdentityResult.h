﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/IdentityType.h>
#include <aws/pinpoint-email/model/DkimAttributes.h>
#include <aws/pinpoint-email/model/MailFromAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Details about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class GetEmailIdentityResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult();
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email identity type.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }
    inline void SetIdentityType(const IdentityType& value) { m_identityType = value; }
    inline void SetIdentityType(IdentityType&& value) { m_identityType = std::move(value); }
    inline GetEmailIdentityResult& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}
    inline GetEmailIdentityResult& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback forwarding configuration for the identity.</p> <p>If the value
     * is <code>true</code>, Amazon Pinpoint sends you email notifications when bounce
     * or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetFeedbackForwardingStatus() const{ return m_feedbackForwardingStatus; }
    inline void SetFeedbackForwardingStatus(bool value) { m_feedbackForwardingStatus = value; }
    inline GetEmailIdentityResult& WithFeedbackForwardingStatus(bool value) { SetFeedbackForwardingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the identity is verified. In Amazon Pinpoint, you
     * can only send email from verified email addresses or domains. For more
     * information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline bool GetVerifiedForSendingStatus() const{ return m_verifiedForSendingStatus; }
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatus = value; }
    inline GetEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const{ return m_dkimAttributes; }
    inline void SetDkimAttributes(const DkimAttributes& value) { m_dkimAttributes = value; }
    inline void SetDkimAttributes(DkimAttributes&& value) { m_dkimAttributes = std::move(value); }
    inline GetEmailIdentityResult& WithDkimAttributes(const DkimAttributes& value) { SetDkimAttributes(value); return *this;}
    inline GetEmailIdentityResult& WithDkimAttributes(DkimAttributes&& value) { SetDkimAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the Mail-From attributes for the
     * email identity.</p>
     */
    inline const MailFromAttributes& GetMailFromAttributes() const{ return m_mailFromAttributes; }
    inline void SetMailFromAttributes(const MailFromAttributes& value) { m_mailFromAttributes = value; }
    inline void SetMailFromAttributes(MailFromAttributes&& value) { m_mailFromAttributes = std::move(value); }
    inline GetEmailIdentityResult& WithMailFromAttributes(const MailFromAttributes& value) { SetMailFromAttributes(value); return *this;}
    inline GetEmailIdentityResult& WithMailFromAttributes(MailFromAttributes&& value) { SetMailFromAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the email identity.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetEmailIdentityResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetEmailIdentityResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEmailIdentityResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetEmailIdentityResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEmailIdentityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEmailIdentityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEmailIdentityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdentityType m_identityType;

    bool m_feedbackForwardingStatus;

    bool m_verifiedForSendingStatus;

    DkimAttributes m_dkimAttributes;

    MailFromAttributes m_mailFromAttributes;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
