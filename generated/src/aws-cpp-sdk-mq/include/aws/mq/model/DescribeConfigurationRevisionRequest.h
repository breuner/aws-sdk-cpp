﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   */
  class DescribeConfigurationRevisionRequest : public MQRequest
  {
  public:
    AWS_MQ_API DescribeConfigurationRevisionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRevision"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    DescribeConfigurationRevisionRequest& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationRevision() const { return m_configurationRevision; }
    inline bool ConfigurationRevisionHasBeenSet() const { return m_configurationRevisionHasBeenSet; }
    template<typename ConfigurationRevisionT = Aws::String>
    void SetConfigurationRevision(ConfigurationRevisionT&& value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = std::forward<ConfigurationRevisionT>(value); }
    template<typename ConfigurationRevisionT = Aws::String>
    DescribeConfigurationRevisionRequest& WithConfigurationRevision(ConfigurationRevisionT&& value) { SetConfigurationRevision(std::forward<ConfigurationRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_configurationRevision;
    bool m_configurationRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
