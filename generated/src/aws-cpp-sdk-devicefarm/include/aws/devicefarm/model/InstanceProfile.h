﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the instance profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstanceProfile">AWS
   * API Reference</a></p>
   */
  class InstanceProfile
  {
  public:
    AWS_DEVICEFARM_API InstanceProfile();
    AWS_DEVICEFARM_API InstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API InstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, Device Farm removes app packages after a test
     * run. The default value is <code>false</code> for private devices.</p>
     */
    inline bool GetPackageCleanup() const{ return m_packageCleanup; }
    inline bool PackageCleanupHasBeenSet() const { return m_packageCleanupHasBeenSet; }
    inline void SetPackageCleanup(bool value) { m_packageCleanupHasBeenSet = true; m_packageCleanup = value; }
    inline InstanceProfile& WithPackageCleanup(bool value) { SetPackageCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings containing the list of app packages that should not be
     * cleaned up from the device after a test run completes.</p> <p>The list of
     * packages is considered only if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAppPackagesFromCleanup() const{ return m_excludeAppPackagesFromCleanup; }
    inline bool ExcludeAppPackagesFromCleanupHasBeenSet() const { return m_excludeAppPackagesFromCleanupHasBeenSet; }
    inline void SetExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = value; }
    inline void SetExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = std::move(value); }
    inline InstanceProfile& WithExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { SetExcludeAppPackagesFromCleanup(value); return *this;}
    inline InstanceProfile& WithExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { SetExcludeAppPackagesFromCleanup(std::move(value)); return *this;}
    inline InstanceProfile& AddExcludeAppPackagesFromCleanup(const Aws::String& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }
    inline InstanceProfile& AddExcludeAppPackagesFromCleanup(Aws::String&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(std::move(value)); return *this; }
    inline InstanceProfile& AddExcludeAppPackagesFromCleanup(const char* value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, Device Farm reboots the instance after a test
     * run. The default value is <code>true</code>.</p>
     */
    inline bool GetRebootAfterUse() const{ return m_rebootAfterUse; }
    inline bool RebootAfterUseHasBeenSet() const { return m_rebootAfterUseHasBeenSet; }
    inline void SetRebootAfterUse(bool value) { m_rebootAfterUseHasBeenSet = true; m_rebootAfterUse = value; }
    inline InstanceProfile& WithRebootAfterUse(bool value) { SetRebootAfterUse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceProfile& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceProfile& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the instance profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InstanceProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InstanceProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InstanceProfile& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_packageCleanup;
    bool m_packageCleanupHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAppPackagesFromCleanup;
    bool m_excludeAppPackagesFromCleanupHasBeenSet = false;

    bool m_rebootAfterUse;
    bool m_rebootAfterUseHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
