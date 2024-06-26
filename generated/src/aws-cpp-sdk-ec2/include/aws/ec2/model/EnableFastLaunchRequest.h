﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastLaunchSnapshotConfigurationRequest.h>
#include <aws/ec2/model/FastLaunchLaunchTemplateSpecificationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableFastLaunchRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableFastLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableFastLaunch"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specify the ID of the image for which to enable Windows fast launch.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline EnableFastLaunchRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline EnableFastLaunchRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline EnableFastLaunchRequest& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource to use for pre-provisioning the AMI for Windows fast
     * launch. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline EnableFastLaunchRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline EnableFastLaunchRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline EnableFastLaunchRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the AMI for Windows fast launch. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline const FastLaunchSnapshotConfigurationRequest& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfigurationRequest& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = value; }
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfigurationRequest&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::move(value); }
    inline EnableFastLaunchRequest& WithSnapshotConfiguration(const FastLaunchSnapshotConfigurationRequest& value) { SetSnapshotConfiguration(value); return *this;}
    inline EnableFastLaunchRequest& WithSnapshotConfiguration(FastLaunchSnapshotConfigurationRequest&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationRequest& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecificationRequest& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecificationRequest&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline EnableFastLaunchRequest& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecificationRequest& value) { SetLaunchTemplate(value); return *this;}
    inline EnableFastLaunchRequest& WithLaunchTemplate(FastLaunchLaunchTemplateSpecificationRequest&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch. Value must be
     * <code>6</code> or greater.</p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline EnableFastLaunchRequest& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline EnableFastLaunchRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    FastLaunchSnapshotConfigurationRequest m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    FastLaunchLaunchTemplateSpecificationRequest m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    int m_maxParallelLaunches;
    bool m_maxParallelLaunchesHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
