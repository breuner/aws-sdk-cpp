﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class PutSellingSystemSettingsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API PutSellingSystemSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSellingSystemSettings"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog in which the settings will be updated. Acceptable
     * values include <code>AWS</code> for production and <code>Sandbox</code> for
     * testing environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    PutSellingSystemSettingsRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the IAM Role used for resource snapshot job
     * executions.</p>
     */
    inline const Aws::String& GetResourceSnapshotJobRoleIdentifier() const { return m_resourceSnapshotJobRoleIdentifier; }
    inline bool ResourceSnapshotJobRoleIdentifierHasBeenSet() const { return m_resourceSnapshotJobRoleIdentifierHasBeenSet; }
    template<typename ResourceSnapshotJobRoleIdentifierT = Aws::String>
    void SetResourceSnapshotJobRoleIdentifier(ResourceSnapshotJobRoleIdentifierT&& value) { m_resourceSnapshotJobRoleIdentifierHasBeenSet = true; m_resourceSnapshotJobRoleIdentifier = std::forward<ResourceSnapshotJobRoleIdentifierT>(value); }
    template<typename ResourceSnapshotJobRoleIdentifierT = Aws::String>
    PutSellingSystemSettingsRequest& WithResourceSnapshotJobRoleIdentifier(ResourceSnapshotJobRoleIdentifierT&& value) { SetResourceSnapshotJobRoleIdentifier(std::forward<ResourceSnapshotJobRoleIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_resourceSnapshotJobRoleIdentifier;
    bool m_resourceSnapshotJobRoleIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
