﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/TargetDevice.h>
#include <aws/lookoutvision/model/TargetPlatform.h>
#include <aws/lookoutvision/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutvision/model/Tag.h>
#include <utility>

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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Configuration information for the AWS IoT Greengrass component created in a
   * model packaging job. For more information, see <a>StartModelPackagingJob</a>.
   * </p>  <p>You can't specify a component with the same
   * <code>ComponentName</code> and <code>Componentversion</code> as an existing
   * component with the same component name and component version.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/GreengrassConfiguration">AWS
   * API Reference</a></p>
   */
  class GreengrassConfiguration
  {
  public:
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration();
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API GreengrassConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional compiler options for the Greengrass component. Currently, only
     * NVIDIA Graphics Processing Units (GPU) and CPU accelerators are supported. If
     * you specify <code>TargetDevice</code>, don't specify
     * <code>CompilerOptions</code>.</p> <p>For more information, see <i>Compiler
     * options</i> in the Amazon Lookout for Vision Developer Guide. </p>
     */
    inline const Aws::String& GetCompilerOptions() const{ return m_compilerOptions; }
    inline bool CompilerOptionsHasBeenSet() const { return m_compilerOptionsHasBeenSet; }
    inline void SetCompilerOptions(const Aws::String& value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions = value; }
    inline void SetCompilerOptions(Aws::String&& value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions = std::move(value); }
    inline void SetCompilerOptions(const char* value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions.assign(value); }
    inline GreengrassConfiguration& WithCompilerOptions(const Aws::String& value) { SetCompilerOptions(value); return *this;}
    inline GreengrassConfiguration& WithCompilerOptions(Aws::String&& value) { SetCompilerOptions(std::move(value)); return *this;}
    inline GreengrassConfiguration& WithCompilerOptions(const char* value) { SetCompilerOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target device for the model. Currently the only supported value is
     * <code>jetson_xavier</code>. If you specify <code>TargetDevice</code>, you can't
     * specify <code>TargetPlatform</code>. </p>
     */
    inline const TargetDevice& GetTargetDevice() const{ return m_targetDevice; }
    inline bool TargetDeviceHasBeenSet() const { return m_targetDeviceHasBeenSet; }
    inline void SetTargetDevice(const TargetDevice& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = value; }
    inline void SetTargetDevice(TargetDevice&& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = std::move(value); }
    inline GreengrassConfiguration& WithTargetDevice(const TargetDevice& value) { SetTargetDevice(value); return *this;}
    inline GreengrassConfiguration& WithTargetDevice(TargetDevice&& value) { SetTargetDevice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target platform for the model. If you specify
     * <code>TargetPlatform</code>, you can't specify <code>TargetDevice</code>. </p>
     */
    inline const TargetPlatform& GetTargetPlatform() const{ return m_targetPlatform; }
    inline bool TargetPlatformHasBeenSet() const { return m_targetPlatformHasBeenSet; }
    inline void SetTargetPlatform(const TargetPlatform& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = value; }
    inline void SetTargetPlatform(TargetPlatform&& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = std::move(value); }
    inline GreengrassConfiguration& WithTargetPlatform(const TargetPlatform& value) { SetTargetPlatform(value); return *this;}
    inline GreengrassConfiguration& WithTargetPlatform(TargetPlatform&& value) { SetTargetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An S3 location in which Lookout for Vision stores the component artifacts.
     * </p>
     */
    inline const S3Location& GetS3OutputLocation() const{ return m_s3OutputLocation; }
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
    inline void SetS3OutputLocation(const S3Location& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }
    inline void SetS3OutputLocation(S3Location&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }
    inline GreengrassConfiguration& WithS3OutputLocation(const S3Location& value) { SetS3OutputLocation(value); return *this;}
    inline GreengrassConfiguration& WithS3OutputLocation(S3Location&& value) { SetS3OutputLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name for the AWS IoT Greengrass component. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline GreengrassConfiguration& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline GreengrassConfiguration& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline GreengrassConfiguration& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Version for the AWS IoT Greengrass component. If you don't provide a value,
     * a default value of <code> <i>Model Version</i>.0.0</code> is used. </p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }
    inline GreengrassConfiguration& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}
    inline GreengrassConfiguration& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}
    inline GreengrassConfiguration& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the AWS IoT Greengrass component. </p>
     */
    inline const Aws::String& GetComponentDescription() const{ return m_componentDescription; }
    inline bool ComponentDescriptionHasBeenSet() const { return m_componentDescriptionHasBeenSet; }
    inline void SetComponentDescription(const Aws::String& value) { m_componentDescriptionHasBeenSet = true; m_componentDescription = value; }
    inline void SetComponentDescription(Aws::String&& value) { m_componentDescriptionHasBeenSet = true; m_componentDescription = std::move(value); }
    inline void SetComponentDescription(const char* value) { m_componentDescriptionHasBeenSet = true; m_componentDescription.assign(value); }
    inline GreengrassConfiguration& WithComponentDescription(const Aws::String& value) { SetComponentDescription(value); return *this;}
    inline GreengrassConfiguration& WithComponentDescription(Aws::String&& value) { SetComponentDescription(std::move(value)); return *this;}
    inline GreengrassConfiguration& WithComponentDescription(const char* value) { SetComponentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the AWS IoT
     * Greengrass component. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline GreengrassConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GreengrassConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GreengrassConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline GreengrassConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_compilerOptions;
    bool m_compilerOptionsHasBeenSet = false;

    TargetDevice m_targetDevice;
    bool m_targetDeviceHasBeenSet = false;

    TargetPlatform m_targetPlatform;
    bool m_targetPlatformHasBeenSet = false;

    S3Location m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::String m_componentDescription;
    bool m_componentDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
