﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/HECEndpointType.h>
#include <aws/firehose/model/SplunkRetryOptions.h>
#include <aws/firehose/model/SplunkS3BackupMode.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/SplunkBufferingHints.h>
#include <aws/firehose/model/SecretsManagerConfiguration.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes an update for a destination in Splunk.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SplunkDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class SplunkDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API SplunkDestinationUpdate() = default;
    AWS_FIREHOSE_API SplunkDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SplunkDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP Event Collector (HEC) endpoint to which Firehose sends your
     * data.</p>
     */
    inline const Aws::String& GetHECEndpoint() const { return m_hECEndpoint; }
    inline bool HECEndpointHasBeenSet() const { return m_hECEndpointHasBeenSet; }
    template<typename HECEndpointT = Aws::String>
    void SetHECEndpoint(HECEndpointT&& value) { m_hECEndpointHasBeenSet = true; m_hECEndpoint = std::forward<HECEndpointT>(value); }
    template<typename HECEndpointT = Aws::String>
    SplunkDestinationUpdate& WithHECEndpoint(HECEndpointT&& value) { SetHECEndpoint(std::forward<HECEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This type can be either "Raw" or "Event."</p>
     */
    inline HECEndpointType GetHECEndpointType() const { return m_hECEndpointType; }
    inline bool HECEndpointTypeHasBeenSet() const { return m_hECEndpointTypeHasBeenSet; }
    inline void SetHECEndpointType(HECEndpointType value) { m_hECEndpointTypeHasBeenSet = true; m_hECEndpointType = value; }
    inline SplunkDestinationUpdate& WithHECEndpointType(HECEndpointType value) { SetHECEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A GUID that you obtain from your Splunk cluster when you create a new HEC
     * endpoint.</p>
     */
    inline const Aws::String& GetHECToken() const { return m_hECToken; }
    inline bool HECTokenHasBeenSet() const { return m_hECTokenHasBeenSet; }
    template<typename HECTokenT = Aws::String>
    void SetHECToken(HECTokenT&& value) { m_hECTokenHasBeenSet = true; m_hECToken = std::forward<HECTokenT>(value); }
    template<typename HECTokenT = Aws::String>
    SplunkDestinationUpdate& WithHECToken(HECTokenT&& value) { SetHECToken(std::forward<HECTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that Firehose waits to receive an acknowledgment from
     * Splunk after it sends data. At the end of the timeout period, Firehose either
     * tries to send the data again or considers it an error, based on your retry
     * settings.</p>
     */
    inline int GetHECAcknowledgmentTimeoutInSeconds() const { return m_hECAcknowledgmentTimeoutInSeconds; }
    inline bool HECAcknowledgmentTimeoutInSecondsHasBeenSet() const { return m_hECAcknowledgmentTimeoutInSecondsHasBeenSet; }
    inline void SetHECAcknowledgmentTimeoutInSeconds(int value) { m_hECAcknowledgmentTimeoutInSecondsHasBeenSet = true; m_hECAcknowledgmentTimeoutInSeconds = value; }
    inline SplunkDestinationUpdate& WithHECAcknowledgmentTimeoutInSeconds(int value) { SetHECAcknowledgmentTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver data to Splunk or if
     * it doesn't receive an acknowledgment of receipt from Splunk.</p>
     */
    inline const SplunkRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = SplunkRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = SplunkRetryOptions>
    SplunkDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how you want Firehose to back up documents to Amazon S3. When set
     * to <code>FailedDocumentsOnly</code>, Firehose writes any data that could not be
     * indexed to the configured Amazon S3 destination. When set to
     * <code>AllEvents</code>, Firehose delivers all incoming records to Amazon S3, and
     * also writes failed documents to Amazon S3. The default value is
     * <code>FailedEventsOnly</code>.</p> <p>You can update this backup mode from
     * <code>FailedEventsOnly</code> to <code>AllEvents</code>. You can't update it
     * from <code>AllEvents</code> to <code>FailedEventsOnly</code>.</p>
     */
    inline SplunkS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(SplunkS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline SplunkDestinationUpdate& WithS3BackupMode(SplunkS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your update to the configuration of the backup Amazon S3 location.</p>
     */
    inline const S3DestinationUpdate& GetS3Update() const { return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    template<typename S3UpdateT = S3DestinationUpdate>
    void SetS3Update(S3UpdateT&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::forward<S3UpdateT>(value); }
    template<typename S3UpdateT = S3DestinationUpdate>
    SplunkDestinationUpdate& WithS3Update(S3UpdateT&& value) { SetS3Update(std::forward<S3UpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    SplunkDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    SplunkDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified, the default values for
     * Splunk are used.</p>
     */
    inline const SplunkBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = SplunkBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = SplunkBufferingHints>
    SplunkDestinationUpdate& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for Splunk. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    SplunkDestinationUpdate& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hECEndpoint;
    bool m_hECEndpointHasBeenSet = false;

    HECEndpointType m_hECEndpointType{HECEndpointType::NOT_SET};
    bool m_hECEndpointTypeHasBeenSet = false;

    Aws::String m_hECToken;
    bool m_hECTokenHasBeenSet = false;

    int m_hECAcknowledgmentTimeoutInSeconds{0};
    bool m_hECAcknowledgmentTimeoutInSecondsHasBeenSet = false;

    SplunkRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    SplunkS3BackupMode m_s3BackupMode{SplunkS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    SplunkBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
