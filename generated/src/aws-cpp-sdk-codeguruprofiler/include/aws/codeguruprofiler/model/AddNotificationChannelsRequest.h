﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/Channel.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the AddNotificationChannelsRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AddNotificationChannelsRequest">AWS
   * API Reference</a></p>
   */
  class AddNotificationChannelsRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API AddNotificationChannelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddNotificationChannels"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>One or 2 channels to report to when anomalies are detected.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Channel>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Channel>>
    AddNotificationChannelsRequest& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    template<typename ChannelsT = Channel>
    AddNotificationChannelsRequest& AddChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels.emplace_back(std::forward<ChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group that we are setting up notifications for.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    AddNotificationChannelsRequest& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
