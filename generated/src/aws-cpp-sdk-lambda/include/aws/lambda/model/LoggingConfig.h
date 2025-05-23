﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/LogFormat.h>
#include <aws/lambda/model/ApplicationLogLevel.h>
#include <aws/lambda/model/SystemLogLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The function's Amazon CloudWatch Logs configuration settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_LAMBDA_API LoggingConfig() = default;
    AWS_LAMBDA_API LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format in which Lambda sends your function's application and system logs
     * to CloudWatch. Select between plain text and structured JSON.</p>
     */
    inline LogFormat GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    inline void SetLogFormat(LogFormat value) { m_logFormatHasBeenSet = true; m_logFormat = value; }
    inline LoggingConfig& WithLogFormat(LogFormat value) { SetLogFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this property to filter the application logs for your function that
     * Lambda sends to CloudWatch. Lambda only sends application logs at the selected
     * level of detail and lower, where <code>TRACE</code> is the highest level and
     * <code>FATAL</code> is the lowest.</p>
     */
    inline ApplicationLogLevel GetApplicationLogLevel() const { return m_applicationLogLevel; }
    inline bool ApplicationLogLevelHasBeenSet() const { return m_applicationLogLevelHasBeenSet; }
    inline void SetApplicationLogLevel(ApplicationLogLevel value) { m_applicationLogLevelHasBeenSet = true; m_applicationLogLevel = value; }
    inline LoggingConfig& WithApplicationLogLevel(ApplicationLogLevel value) { SetApplicationLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this property to filter the system logs for your function that Lambda
     * sends to CloudWatch. Lambda only sends system logs at the selected level of
     * detail and lower, where <code>DEBUG</code> is the highest level and
     * <code>WARN</code> is the lowest.</p>
     */
    inline SystemLogLevel GetSystemLogLevel() const { return m_systemLogLevel; }
    inline bool SystemLogLevelHasBeenSet() const { return m_systemLogLevelHasBeenSet; }
    inline void SetSystemLogLevel(SystemLogLevel value) { m_systemLogLevelHasBeenSet = true; m_systemLogLevel = value; }
    inline LoggingConfig& WithSystemLogLevel(SystemLogLevel value) { SetSystemLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch log group the function sends logs to. By
     * default, Lambda functions send logs to a default log group named
     * <code>/aws/lambda/&lt;function name&gt;</code>. To use a different log group,
     * enter an existing log group or enter a new log group name.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    LoggingConfig& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}
  private:

    LogFormat m_logFormat{LogFormat::NOT_SET};
    bool m_logFormatHasBeenSet = false;

    ApplicationLogLevel m_applicationLogLevel{ApplicationLogLevel::NOT_SET};
    bool m_applicationLogLevelHasBeenSet = false;

    SystemLogLevel m_systemLogLevel{SystemLogLevel::NOT_SET};
    bool m_systemLogLevelHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
