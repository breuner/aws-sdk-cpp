﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>GetInstanceOnboardingJobStatusRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetInstanceOnboardingJobStatusRequest">AWS
   * API Reference</a></p>
   */
  class GetInstanceOnboardingJobStatusRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API GetInstanceOnboardingJobStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceOnboardingJobStatus"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    GetInstanceOnboardingJobStatusRequest& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
