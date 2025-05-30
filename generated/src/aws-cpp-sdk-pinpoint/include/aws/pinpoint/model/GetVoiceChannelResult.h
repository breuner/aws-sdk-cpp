﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceChannelResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetVoiceChannelResult
  {
  public:
    AWS_PINPOINT_API GetVoiceChannelResult() = default;
    AWS_PINPOINT_API GetVoiceChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetVoiceChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const VoiceChannelResponse& GetVoiceChannelResponse() const { return m_voiceChannelResponse; }
    template<typename VoiceChannelResponseT = VoiceChannelResponse>
    void SetVoiceChannelResponse(VoiceChannelResponseT&& value) { m_voiceChannelResponseHasBeenSet = true; m_voiceChannelResponse = std::forward<VoiceChannelResponseT>(value); }
    template<typename VoiceChannelResponseT = VoiceChannelResponse>
    GetVoiceChannelResult& WithVoiceChannelResponse(VoiceChannelResponseT&& value) { SetVoiceChannelResponse(std::forward<VoiceChannelResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VoiceChannelResponse m_voiceChannelResponse;
    bool m_voiceChannelResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
