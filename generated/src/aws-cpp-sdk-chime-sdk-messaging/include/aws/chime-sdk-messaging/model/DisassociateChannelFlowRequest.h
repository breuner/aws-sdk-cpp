﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class DisassociateChannelFlowRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API DisassociateChannelFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateChannelFlow"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline DisassociateChannelFlowRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline DisassociateChannelFlowRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline DisassociateChannelFlowRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const{ return m_channelFlowArn; }
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }
    inline void SetChannelFlowArn(const Aws::String& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = value; }
    inline void SetChannelFlowArn(Aws::String&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::move(value); }
    inline void SetChannelFlowArn(const char* value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn.assign(value); }
    inline DisassociateChannelFlowRequest& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}
    inline DisassociateChannelFlowRequest& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}
    inline DisassociateChannelFlowRequest& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }
    inline DisassociateChannelFlowRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}
    inline DisassociateChannelFlowRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}
    inline DisassociateChannelFlowRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
