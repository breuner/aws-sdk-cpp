﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class GetChannelGroupRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetChannelGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannelGroup"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    GetChannelGroupRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
