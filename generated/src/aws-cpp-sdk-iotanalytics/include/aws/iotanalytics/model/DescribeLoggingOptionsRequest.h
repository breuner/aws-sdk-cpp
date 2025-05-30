﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class DescribeLoggingOptionsRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API DescribeLoggingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoggingOptions"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
