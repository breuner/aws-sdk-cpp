﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class AssociatePhoneNumbersWithVoiceConnectorGroupRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API AssociatePhoneNumbersWithVoiceConnectorGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePhoneNumbersWithVoiceConnectorGroup"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime SDK Voice Connector group ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorGroupId() const { return m_voiceConnectorGroupId; }
    inline bool VoiceConnectorGroupIdHasBeenSet() const { return m_voiceConnectorGroupIdHasBeenSet; }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    void SetVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { m_voiceConnectorGroupIdHasBeenSet = true; m_voiceConnectorGroupId = std::forward<VoiceConnectorGroupIdT>(value); }
    template<typename VoiceConnectorGroupIdT = Aws::String>
    AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithVoiceConnectorGroupId(VoiceConnectorGroupIdT&& value) { SetVoiceConnectorGroupId(std::forward<VoiceConnectorGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const { return m_e164PhoneNumbers; }
    inline bool E164PhoneNumbersHasBeenSet() const { return m_e164PhoneNumbersHasBeenSet; }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    void SetE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers = std::forward<E164PhoneNumbersT>(value); }
    template<typename E164PhoneNumbersT = Aws::Vector<Aws::String>>
    AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithE164PhoneNumbers(E164PhoneNumbersT&& value) { SetE164PhoneNumbers(std::forward<E164PhoneNumbersT>(value)); return *this;}
    template<typename E164PhoneNumbersT = Aws::String>
    AssociatePhoneNumbersWithVoiceConnectorGroupRequest& AddE164PhoneNumbers(E164PhoneNumbersT&& value) { m_e164PhoneNumbersHasBeenSet = true; m_e164PhoneNumbers.emplace_back(std::forward<E164PhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, associates the provided phone numbers with the provided Amazon Chime
     * SDK Voice Connector Group and removes any previously existing associations. If
     * false, does not associate any phone numbers that have previously existing
     * associations.</p>
     */
    inline bool GetForceAssociate() const { return m_forceAssociate; }
    inline bool ForceAssociateHasBeenSet() const { return m_forceAssociateHasBeenSet; }
    inline void SetForceAssociate(bool value) { m_forceAssociateHasBeenSet = true; m_forceAssociate = value; }
    inline AssociatePhoneNumbersWithVoiceConnectorGroupRequest& WithForceAssociate(bool value) { SetForceAssociate(value); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorGroupId;
    bool m_voiceConnectorGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_e164PhoneNumbers;
    bool m_e164PhoneNumbersHasBeenSet = false;

    bool m_forceAssociate{false};
    bool m_forceAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
