﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipPreferences.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class GetChannelMembershipPreferencesResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult();
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline GetChannelMembershipPreferencesResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline GetChannelMembershipPreferencesResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline GetChannelMembershipPreferencesResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a user.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }
    inline void SetMember(const Identity& value) { m_member = value; }
    inline void SetMember(Identity&& value) { m_member = std::move(value); }
    inline GetChannelMembershipPreferencesResult& WithMember(const Identity& value) { SetMember(value); return *this;}
    inline GetChannelMembershipPreferencesResult& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline const ChannelMembershipPreferences& GetPreferences() const{ return m_preferences; }
    inline void SetPreferences(const ChannelMembershipPreferences& value) { m_preferences = value; }
    inline void SetPreferences(ChannelMembershipPreferences&& value) { m_preferences = std::move(value); }
    inline GetChannelMembershipPreferencesResult& WithPreferences(const ChannelMembershipPreferences& value) { SetPreferences(value); return *this;}
    inline GetChannelMembershipPreferencesResult& WithPreferences(ChannelMembershipPreferences&& value) { SetPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetChannelMembershipPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetChannelMembershipPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetChannelMembershipPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Identity m_member;

    ChannelMembershipPreferences m_preferences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
