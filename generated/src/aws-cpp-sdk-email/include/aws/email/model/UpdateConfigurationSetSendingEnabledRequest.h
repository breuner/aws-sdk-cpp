﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable the email sending capabilities for
   * a specific configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetSendingEnabledRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConfigurationSetSendingEnabledRequest : public SESRequest
  {
  public:
    AWS_SES_API UpdateConfigurationSetSendingEnabledRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationSetSendingEnabled"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the configuration set to update.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    UpdateConfigurationSetSendingEnabledRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether email sending is enabled or disabled for the configuration
     * set. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateConfigurationSetSendingEnabledRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
