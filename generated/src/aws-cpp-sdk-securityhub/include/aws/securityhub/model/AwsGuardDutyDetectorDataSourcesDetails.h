﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesCloudTrailDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesDnsLogsDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesFlowLogsDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesKubernetesDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesS3LogsDetails.h>
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
   * <p> Describes which data sources are activated for the detector. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An object that contains information on the status of CloudTrail as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesCloudTrailDetails& GetCloudTrail() const{ return m_cloudTrail; }
    inline bool CloudTrailHasBeenSet() const { return m_cloudTrailHasBeenSet; }
    inline void SetCloudTrail(const AwsGuardDutyDetectorDataSourcesCloudTrailDetails& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = value; }
    inline void SetCloudTrail(AwsGuardDutyDetectorDataSourcesCloudTrailDetails&& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithCloudTrail(const AwsGuardDutyDetectorDataSourcesCloudTrailDetails& value) { SetCloudTrail(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithCloudTrail(AwsGuardDutyDetectorDataSourcesCloudTrailDetails&& value) { SetCloudTrail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of DNS logs as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesDnsLogsDetails& GetDnsLogs() const{ return m_dnsLogs; }
    inline bool DnsLogsHasBeenSet() const { return m_dnsLogsHasBeenSet; }
    inline void SetDnsLogs(const AwsGuardDutyDetectorDataSourcesDnsLogsDetails& value) { m_dnsLogsHasBeenSet = true; m_dnsLogs = value; }
    inline void SetDnsLogs(AwsGuardDutyDetectorDataSourcesDnsLogsDetails&& value) { m_dnsLogsHasBeenSet = true; m_dnsLogs = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithDnsLogs(const AwsGuardDutyDetectorDataSourcesDnsLogsDetails& value) { SetDnsLogs(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithDnsLogs(AwsGuardDutyDetectorDataSourcesDnsLogsDetails&& value) { SetDnsLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of VPC Flow Logs as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesFlowLogsDetails& GetFlowLogs() const{ return m_flowLogs; }
    inline bool FlowLogsHasBeenSet() const { return m_flowLogsHasBeenSet; }
    inline void SetFlowLogs(const AwsGuardDutyDetectorDataSourcesFlowLogsDetails& value) { m_flowLogsHasBeenSet = true; m_flowLogs = value; }
    inline void SetFlowLogs(AwsGuardDutyDetectorDataSourcesFlowLogsDetails&& value) { m_flowLogsHasBeenSet = true; m_flowLogs = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithFlowLogs(const AwsGuardDutyDetectorDataSourcesFlowLogsDetails& value) { SetFlowLogs(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithFlowLogs(AwsGuardDutyDetectorDataSourcesFlowLogsDetails&& value) { SetFlowLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of Kubernetes data sources
     * for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesKubernetesDetails& GetKubernetes() const{ return m_kubernetes; }
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }
    inline void SetKubernetes(const AwsGuardDutyDetectorDataSourcesKubernetesDetails& value) { m_kubernetesHasBeenSet = true; m_kubernetes = value; }
    inline void SetKubernetes(AwsGuardDutyDetectorDataSourcesKubernetesDetails&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithKubernetes(const AwsGuardDutyDetectorDataSourcesKubernetesDetails& value) { SetKubernetes(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithKubernetes(AwsGuardDutyDetectorDataSourcesKubernetesDetails&& value) { SetKubernetes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of Malware Protection as a
     * data source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails& GetMalwareProtection() const{ return m_malwareProtection; }
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }
    inline void SetMalwareProtection(const AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }
    inline void SetMalwareProtection(AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithMalwareProtection(const AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails& value) { SetMalwareProtection(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithMalwareProtection(AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails&& value) { SetMalwareProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of S3 Data event logs as a
     * data source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesS3LogsDetails& GetS3Logs() const{ return m_s3Logs; }
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }
    inline void SetS3Logs(const AwsGuardDutyDetectorDataSourcesS3LogsDetails& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }
    inline void SetS3Logs(AwsGuardDutyDetectorDataSourcesS3LogsDetails&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }
    inline AwsGuardDutyDetectorDataSourcesDetails& WithS3Logs(const AwsGuardDutyDetectorDataSourcesS3LogsDetails& value) { SetS3Logs(value); return *this;}
    inline AwsGuardDutyDetectorDataSourcesDetails& WithS3Logs(AwsGuardDutyDetectorDataSourcesS3LogsDetails&& value) { SetS3Logs(std::move(value)); return *this;}
    ///@}
  private:

    AwsGuardDutyDetectorDataSourcesCloudTrailDetails m_cloudTrail;
    bool m_cloudTrailHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesDnsLogsDetails m_dnsLogs;
    bool m_dnsLogsHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesFlowLogsDetails m_flowLogs;
    bool m_flowLogsHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesKubernetesDetails m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesS3LogsDetails m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
