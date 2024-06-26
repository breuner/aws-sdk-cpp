﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTemplateCloudWatchLogsLogConfigurationInput.h>
#include <aws/fis/model/ExperimentTemplateS3LogConfigurationInput.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Specifies the configuration for experiment logging.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplateLogConfigurationInput">AWS
   * API Reference</a></p>
   */
  class UpdateExperimentTemplateLogConfigurationInput
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateLogConfigurationInput();
    AWS_FIS_API UpdateExperimentTemplateLogConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API UpdateExperimentTemplateLogConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline const ExperimentTemplateCloudWatchLogsLogConfigurationInput& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    inline void SetCloudWatchLogsConfiguration(const ExperimentTemplateCloudWatchLogsLogConfigurationInput& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }
    inline void SetCloudWatchLogsConfiguration(ExperimentTemplateCloudWatchLogsLogConfigurationInput&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }
    inline UpdateExperimentTemplateLogConfigurationInput& WithCloudWatchLogsConfiguration(const ExperimentTemplateCloudWatchLogsLogConfigurationInput& value) { SetCloudWatchLogsConfiguration(value); return *this;}
    inline UpdateExperimentTemplateLogConfigurationInput& WithCloudWatchLogsConfiguration(ExperimentTemplateCloudWatchLogsLogConfigurationInput&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline const ExperimentTemplateS3LogConfigurationInput& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const ExperimentTemplateS3LogConfigurationInput& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(ExperimentTemplateS3LogConfigurationInput&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline UpdateExperimentTemplateLogConfigurationInput& WithS3Configuration(const ExperimentTemplateS3LogConfigurationInput& value) { SetS3Configuration(value); return *this;}
    inline UpdateExperimentTemplateLogConfigurationInput& WithS3Configuration(ExperimentTemplateS3LogConfigurationInput&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version.</p>
     */
    inline int GetLogSchemaVersion() const{ return m_logSchemaVersion; }
    inline bool LogSchemaVersionHasBeenSet() const { return m_logSchemaVersionHasBeenSet; }
    inline void SetLogSchemaVersion(int value) { m_logSchemaVersionHasBeenSet = true; m_logSchemaVersion = value; }
    inline UpdateExperimentTemplateLogConfigurationInput& WithLogSchemaVersion(int value) { SetLogSchemaVersion(value); return *this;}
    ///@}
  private:

    ExperimentTemplateCloudWatchLogsLogConfigurationInput m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet = false;

    ExperimentTemplateS3LogConfigurationInput m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    int m_logSchemaVersion;
    bool m_logSchemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
