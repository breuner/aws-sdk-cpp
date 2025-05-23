﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to change the warm-up attributes for a dedicated IP address. This
   * operation is useful when you want to resume the warm-up process for an existing
   * IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpWarmupAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutDedicatedIpWarmupAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDedicatedIpWarmupAttributes"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    PutDedicatedIpWarmupAttributesRequest& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warm-up percentage that you want to associate with the dedicated IP
     * address.</p>
     */
    inline int GetWarmupPercentage() const { return m_warmupPercentage; }
    inline bool WarmupPercentageHasBeenSet() const { return m_warmupPercentageHasBeenSet; }
    inline void SetWarmupPercentage(int value) { m_warmupPercentageHasBeenSet = true; m_warmupPercentage = value; }
    inline PutDedicatedIpWarmupAttributesRequest& WithWarmupPercentage(int value) { SetWarmupPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    int m_warmupPercentage{0};
    bool m_warmupPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
