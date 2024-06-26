﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{
  class UpdateLaunchConfigurationResult
  {
  public:
    AWS_MGN_API UpdateLaunchConfigurationResult();
    AWS_MGN_API UpdateLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UpdateLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }
    inline void SetBootMode(const BootMode& value) { m_bootMode = value; }
    inline void SetBootMode(BootMode&& value) { m_bootMode = std::move(value); }
    inline UpdateLaunchConfigurationResult& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIp = value; }
    inline UpdateLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline void SetCopyTags(bool value) { m_copyTags = value; }
    inline UpdateLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateID = value; }
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateID = std::move(value); }
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateID.assign(value); }
    inline UpdateLaunchConfigurationResult& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationResult& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTagging = value; }
    inline UpdateLaunchConfigurationResult& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDisposition = std::move(value); }
    inline UpdateLaunchConfigurationResult& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline void SetLicensing(const Licensing& value) { m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensing = std::move(value); }
    inline UpdateLaunchConfigurationResult& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeID = value; }
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeID = std::move(value); }
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeID.assign(value); }
    inline UpdateLaunchConfigurationResult& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationResult& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateLaunchConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActions = value; }
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActions = std::move(value); }
    inline UpdateLaunchConfigurationResult& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }
    inline UpdateLaunchConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline UpdateLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateLaunchConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateLaunchConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BootMode m_bootMode;

    bool m_copyPrivateIp;

    bool m_copyTags;

    Aws::String m_ec2LaunchTemplateID;

    bool m_enableMapAutoTagging;

    LaunchDisposition m_launchDisposition;

    Licensing m_licensing;

    Aws::String m_mapAutoTaggingMpeID;

    Aws::String m_name;

    PostLaunchActions m_postLaunchActions;

    Aws::String m_sourceServerID;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
