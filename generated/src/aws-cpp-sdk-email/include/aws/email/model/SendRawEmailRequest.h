﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/RawMessage.h>
#include <aws/email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a single raw email using Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendRawEmailRequest : public SESRequest
  {
  public:
    AWS_SES_API SendRawEmailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendRawEmail"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identity's email address. If you do not provide a value for this
     * parameter, you must specify a "From" address in the raw text of the message.
     * (You can also specify both.)</p>  <p>Amazon SES does not support the
     * SMTPUTF8 extension, as described in<a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * email address string must be 7-bit ASCII. If you want to send to or from email
     * addresses that contain Unicode characters in the domain part of an address, you
     * must encode the domain using Punycode. Punycode is not permitted in the local
     * part of the email address (the part before the @ sign) nor in the "friendly
     * from" name. If you want to use Unicode characters in the "friendly from" name,
     * you must encode the "friendly from" name using MIME encoded-word syntax, as
     * described in <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Sending raw
     * email using the Amazon SES API</a>. For more information about Punycode, see <a
     * href="http://tools.ietf.org/html/rfc3492">RFC 3492</a>.</p>  <p>If you
     * specify the <code>Source</code> parameter and have feedback forwarding enabled,
     * then bounces and complaints are sent to this email address. This takes
     * precedence over any Return-Path header that you might include in the raw text of
     * the message.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    SendRawEmailRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of destinations for the message, consisting of To:, CC:, and BCC:
     * addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    SendRawEmailRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Aws::String>
    SendRawEmailRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The raw email message itself. The message has to meet the following
     * criteria:</p> <ul> <li> <p>The message has to contain a header and a body,
     * separated by a blank line.</p> </li> <li> <p>All of the required header fields
     * must be present in the message.</p> </li> <li> <p>Each part of a multipart MIME
     * message must be formatted properly.</p> </li> <li> <p>Attachments must be of a
     * content type that Amazon SES supports. For a list on unsupported content types,
     * see <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/mime-types.html">Unsupported
     * Attachment Types</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li>
     * <p>The entire message must be base64-encoded.</p> </li> <li> <p>If any of the
     * MIME parts in your message contain content that is outside of the 7-bit ASCII
     * character range, we highly recommend that you encode that content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Sending Raw
     * Email</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> <li> <p>Per <a
     * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
     * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
     * 1,000 characters.</p> </li> </ul>
     */
    inline const RawMessage& GetRawMessage() const { return m_rawMessage; }
    inline bool RawMessageHasBeenSet() const { return m_rawMessageHasBeenSet; }
    template<typename RawMessageT = RawMessage>
    void SetRawMessage(RawMessageT&& value) { m_rawMessageHasBeenSet = true; m_rawMessage = std::forward<RawMessageT>(value); }
    template<typename RawMessageT = RawMessage>
    SendRawEmailRequest& WithRawMessage(RawMessageT&& value) { SetRawMessage(std::forward<RawMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to specify a particular "From" address in the header of the raw email.</p>
     * <p>Instead of using this parameter, you can use the X-header
     * <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the
     * <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses
     * the value of the <code>FromArn</code> parameter.</p>  <p>For information
     * about when to use this parameter, see the description of
     * <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetFromArn() const { return m_fromArn; }
    inline bool FromArnHasBeenSet() const { return m_fromArnHasBeenSet; }
    template<typename FromArnT = Aws::String>
    void SetFromArn(FromArnT&& value) { m_fromArnHasBeenSet = true; m_fromArn = std::forward<FromArnT>(value); }
    template<typename FromArnT = Aws::String>
    SendRawEmailRequest& WithFromArn(FromArnT&& value) { SetFromArn(std::forward<FromArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>Instead of
     * using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in
     * the raw message of the email. If you use both the <code>SourceArn</code>
     * parameter and the corresponding X-header, Amazon SES uses the value of the
     * <code>SourceArn</code> parameter.</p>  <p>For information about when to
     * use this parameter, see the description of <code>SendRawEmail</code> in this
     * guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    SendRawEmailRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>Instead
     * of using this parameter, you can use the X-header
     * <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use
     * both the <code>ReturnPathArn</code> parameter and the corresponding X-header,
     * Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p>
     *  <p>For information about when to use this parameter, see the description
     * of <code>SendRawEmail</code> in this guide, or see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization-delegate-sender-tasks-email.html">Amazon
     * SES Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetReturnPathArn() const { return m_returnPathArn; }
    inline bool ReturnPathArnHasBeenSet() const { return m_returnPathArnHasBeenSet; }
    template<typename ReturnPathArnT = Aws::String>
    void SetReturnPathArn(ReturnPathArnT&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = std::forward<ReturnPathArnT>(value); }
    template<typename ReturnPathArnT = Aws::String>
    SendRawEmailRequest& WithReturnPathArn(ReturnPathArnT&& value) { SetReturnPathArn(std::forward<ReturnPathArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using <code>SendRawEmail</code>. Tags correspond to characteristics of
     * the email that you define, so that you can publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<MessageTag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<MessageTag>>
    SendRawEmailRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = MessageTag>
    SendRawEmailRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendRawEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendRawEmailRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    RawMessage m_rawMessage;
    bool m_rawMessageHasBeenSet = false;

    Aws::String m_fromArn;
    bool m_fromArnHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet = false;

    Aws::Vector<MessageTag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
