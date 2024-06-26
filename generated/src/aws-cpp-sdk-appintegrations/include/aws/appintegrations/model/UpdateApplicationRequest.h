﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ApplicationSourceConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateApplicationRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateApplicationRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for where the application should be loaded from.</p>
     */
    inline const ApplicationSourceConfig& GetApplicationSourceConfig() const{ return m_applicationSourceConfig; }
    inline bool ApplicationSourceConfigHasBeenSet() const { return m_applicationSourceConfigHasBeenSet; }
    inline void SetApplicationSourceConfig(const ApplicationSourceConfig& value) { m_applicationSourceConfigHasBeenSet = true; m_applicationSourceConfig = value; }
    inline void SetApplicationSourceConfig(ApplicationSourceConfig&& value) { m_applicationSourceConfigHasBeenSet = true; m_applicationSourceConfig = std::move(value); }
    inline UpdateApplicationRequest& WithApplicationSourceConfig(const ApplicationSourceConfig& value) { SetApplicationSourceConfig(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationSourceConfig(ApplicationSourceConfig&& value) { SetApplicationSourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of events or requests that the application has access
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline UpdateApplicationRequest& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}
    inline UpdateApplicationRequest& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}
    inline UpdateApplicationRequest& AddPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline UpdateApplicationRequest& AddPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    inline UpdateApplicationRequest& AddPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationSourceConfig m_applicationSourceConfig;
    bool m_applicationSourceConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
