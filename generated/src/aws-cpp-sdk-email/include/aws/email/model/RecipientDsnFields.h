﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/DsnAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ExtensionField.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Recipient-related information to include in the Delivery Status Notification
   * (DSN) when an email that Amazon SES receives on your behalf bounces.</p> <p>For
   * information about receiving email through Amazon SES, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email.html">Amazon SES
   * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/RecipientDsnFields">AWS
   * API Reference</a></p>
   */
  class RecipientDsnFields
  {
  public:
    AWS_SES_API RecipientDsnFields() = default;
    AWS_SES_API RecipientDsnFields(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API RecipientDsnFields& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The email address that the message was ultimately delivered to. This
     * corresponds to the <code>Final-Recipient</code> in the DSN. If not specified,
     * <code>FinalRecipient</code> is set to the <code>Recipient</code> specified in
     * the <code>BouncedRecipientInfo</code> structure. Either
     * <code>FinalRecipient</code> or the recipient in
     * <code>BouncedRecipientInfo</code> must be a recipient of the original bounced
     * message.</p>  <p>Do not prepend the <code>FinalRecipient</code> email
     * address with <code>rfc 822;</code>, as described in <a
     * href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p> 
     */
    inline const Aws::String& GetFinalRecipient() const { return m_finalRecipient; }
    inline bool FinalRecipientHasBeenSet() const { return m_finalRecipientHasBeenSet; }
    template<typename FinalRecipientT = Aws::String>
    void SetFinalRecipient(FinalRecipientT&& value) { m_finalRecipientHasBeenSet = true; m_finalRecipient = std::forward<FinalRecipientT>(value); }
    template<typename FinalRecipientT = Aws::String>
    RecipientDsnFields& WithFinalRecipient(FinalRecipientT&& value) { SetFinalRecipient(std::forward<FinalRecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action performed by the reporting mail transfer agent (MTA) as a result
     * of its attempt to deliver the message to the recipient address. This is required
     * by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline DsnAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(DsnAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline RecipientDsnFields& WithAction(DsnAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MTA to which the remote MTA attempted to deliver the message, formatted
     * as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>
     * (<code>mta-name-type; mta-name</code>). This parameter typically applies only to
     * propagating synchronous bounces.</p>
     */
    inline const Aws::String& GetRemoteMta() const { return m_remoteMta; }
    inline bool RemoteMtaHasBeenSet() const { return m_remoteMtaHasBeenSet; }
    template<typename RemoteMtaT = Aws::String>
    void SetRemoteMta(RemoteMtaT&& value) { m_remoteMtaHasBeenSet = true; m_remoteMta = std::forward<RemoteMtaT>(value); }
    template<typename RemoteMtaT = Aws::String>
    RecipientDsnFields& WithRemoteMta(RemoteMtaT&& value) { SetRemoteMta(std::forward<RemoteMtaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code that indicates what went wrong. This is required by <a
     * href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    RecipientDsnFields& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An extended explanation of what went wrong; this is usually an SMTP response.
     * See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct
     * formatting of this parameter.</p>
     */
    inline const Aws::String& GetDiagnosticCode() const { return m_diagnosticCode; }
    inline bool DiagnosticCodeHasBeenSet() const { return m_diagnosticCodeHasBeenSet; }
    template<typename DiagnosticCodeT = Aws::String>
    void SetDiagnosticCode(DiagnosticCodeT&& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = std::forward<DiagnosticCodeT>(value); }
    template<typename DiagnosticCodeT = Aws::String>
    RecipientDsnFields& WithDiagnosticCode(DiagnosticCodeT&& value) { SetDiagnosticCode(std::forward<DiagnosticCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the final delivery attempt was made, in <a
     * href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptDate() const { return m_lastAttemptDate; }
    inline bool LastAttemptDateHasBeenSet() const { return m_lastAttemptDateHasBeenSet; }
    template<typename LastAttemptDateT = Aws::Utils::DateTime>
    void SetLastAttemptDate(LastAttemptDateT&& value) { m_lastAttemptDateHasBeenSet = true; m_lastAttemptDate = std::forward<LastAttemptDateT>(value); }
    template<typename LastAttemptDateT = Aws::Utils::DateTime>
    RecipientDsnFields& WithLastAttemptDate(LastAttemptDateT&& value) { SetLastAttemptDate(std::forward<LastAttemptDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional X-headers to include in the DSN.</p>
     */
    inline const Aws::Vector<ExtensionField>& GetExtensionFields() const { return m_extensionFields; }
    inline bool ExtensionFieldsHasBeenSet() const { return m_extensionFieldsHasBeenSet; }
    template<typename ExtensionFieldsT = Aws::Vector<ExtensionField>>
    void SetExtensionFields(ExtensionFieldsT&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields = std::forward<ExtensionFieldsT>(value); }
    template<typename ExtensionFieldsT = Aws::Vector<ExtensionField>>
    RecipientDsnFields& WithExtensionFields(ExtensionFieldsT&& value) { SetExtensionFields(std::forward<ExtensionFieldsT>(value)); return *this;}
    template<typename ExtensionFieldsT = ExtensionField>
    RecipientDsnFields& AddExtensionFields(ExtensionFieldsT&& value) { m_extensionFieldsHasBeenSet = true; m_extensionFields.emplace_back(std::forward<ExtensionFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_finalRecipient;
    bool m_finalRecipientHasBeenSet = false;

    DsnAction m_action{DsnAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_remoteMta;
    bool m_remoteMtaHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_diagnosticCode;
    bool m_diagnosticCodeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptDate{};
    bool m_lastAttemptDateHasBeenSet = false;

    Aws::Vector<ExtensionField> m_extensionFields;
    bool m_extensionFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
