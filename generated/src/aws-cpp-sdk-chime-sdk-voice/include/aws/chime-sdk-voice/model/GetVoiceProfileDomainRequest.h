﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class GetVoiceProfileDomainRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceProfileDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVoiceProfileDomain"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The voice profile domain ID.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const { return m_voiceProfileDomainId; }
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }
    template<typename VoiceProfileDomainIdT = Aws::String>
    void SetVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::forward<VoiceProfileDomainIdT>(value); }
    template<typename VoiceProfileDomainIdT = Aws::String>
    GetVoiceProfileDomainRequest& WithVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { SetVoiceProfileDomainId(std::forward<VoiceProfileDomainIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
