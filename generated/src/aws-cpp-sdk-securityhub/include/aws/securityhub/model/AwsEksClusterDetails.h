﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEksClusterResourcesVpcConfigDetails.h>
#include <aws/securityhub/model/AwsEksClusterLoggingDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Amazon EKS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEksClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsEksClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEksClusterDetails();
    AWS_SECURITYHUB_API AwsEksClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEksClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsEksClusterDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsEksClusterDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate authority data for the cluster.</p>
     */
    inline const Aws::String& GetCertificateAuthorityData() const{ return m_certificateAuthorityData; }
    inline bool CertificateAuthorityDataHasBeenSet() const { return m_certificateAuthorityDataHasBeenSet; }
    inline void SetCertificateAuthorityData(const Aws::String& value) { m_certificateAuthorityDataHasBeenSet = true; m_certificateAuthorityData = value; }
    inline void SetCertificateAuthorityData(Aws::String&& value) { m_certificateAuthorityDataHasBeenSet = true; m_certificateAuthorityData = std::move(value); }
    inline void SetCertificateAuthorityData(const char* value) { m_certificateAuthorityDataHasBeenSet = true; m_certificateAuthorityData.assign(value); }
    inline AwsEksClusterDetails& WithCertificateAuthorityData(const Aws::String& value) { SetCertificateAuthorityData(value); return *this;}
    inline AwsEksClusterDetails& WithCertificateAuthorityData(Aws::String&& value) { SetCertificateAuthorityData(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithCertificateAuthorityData(const char* value) { SetCertificateAuthorityData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. Valid values are as follows:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATING</code> </p> </li> <li>
     * <p> <code>DELETING</code> </p> </li> <li> <p> <code>FAILED</code> </p> </li>
     * <li> <p> <code>PENDING</code> </p> </li> <li> <p> <code>UPDATING</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }
    inline AwsEksClusterDetails& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}
    inline AwsEksClusterDetails& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the Amazon EKS API server.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline AwsEksClusterDetails& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline AwsEksClusterDetails& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsEksClusterDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsEksClusterDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration used by the cluster control plane.</p>
     */
    inline const AwsEksClusterResourcesVpcConfigDetails& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    inline void SetResourcesVpcConfig(const AwsEksClusterResourcesVpcConfigDetails& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }
    inline void SetResourcesVpcConfig(AwsEksClusterResourcesVpcConfigDetails&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }
    inline AwsEksClusterDetails& WithResourcesVpcConfig(const AwsEksClusterResourcesVpcConfigDetails& value) { SetResourcesVpcConfig(value); return *this;}
    inline AwsEksClusterDetails& WithResourcesVpcConfig(AwsEksClusterResourcesVpcConfigDetails&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides permissions for the Amazon EKS control
     * plane to make calls to Amazon Web Services API operations on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AwsEksClusterDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AwsEksClusterDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS server version for the cluster.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AwsEksClusterDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AwsEksClusterDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AwsEksClusterDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for the cluster.</p>
     */
    inline const AwsEksClusterLoggingDetails& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const AwsEksClusterLoggingDetails& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(AwsEksClusterLoggingDetails&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline AwsEksClusterDetails& WithLogging(const AwsEksClusterLoggingDetails& value) { SetLogging(value); return *this;}
    inline AwsEksClusterDetails& WithLogging(AwsEksClusterLoggingDetails&& value) { SetLogging(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityData;
    bool m_certificateAuthorityDataHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEksClusterResourcesVpcConfigDetails m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    AwsEksClusterLoggingDetails m_logging;
    bool m_loggingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
