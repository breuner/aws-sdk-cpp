﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about the timeout configuration for a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobTimeoutConfig">AWS
   * API Reference</a></p>
   */
  class IoTJobTimeoutConfig
  {
  public:
    AWS_GREENGRASSV2_API IoTJobTimeoutConfig() = default;
    AWS_GREENGRASSV2_API IoTJobTimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobTimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time, in minutes, that devices have to complete the job. The
     * timer starts when the job status is set to <code>IN_PROGRESS</code>. If the job
     * status doesn't change to a terminal state before the time expires, then the job
     * status is set to <code>TIMED_OUT</code>.</p> <p>The timeout interval must be
     * between 1 minute and 7 days (10080 minutes).</p>
     */
    inline long long GetInProgressTimeoutInMinutes() const { return m_inProgressTimeoutInMinutes; }
    inline bool InProgressTimeoutInMinutesHasBeenSet() const { return m_inProgressTimeoutInMinutesHasBeenSet; }
    inline void SetInProgressTimeoutInMinutes(long long value) { m_inProgressTimeoutInMinutesHasBeenSet = true; m_inProgressTimeoutInMinutes = value; }
    inline IoTJobTimeoutConfig& WithInProgressTimeoutInMinutes(long long value) { SetInProgressTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    long long m_inProgressTimeoutInMinutes{0};
    bool m_inProgressTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
