﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Sampling statistics from a call to <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>
   * that X-Ray could not process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UnprocessedStatistics">AWS
   * API Reference</a></p>
   */
  class UnprocessedStatistics
  {
  public:
    AWS_XRAY_API UnprocessedStatistics();
    AWS_XRAY_API UnprocessedStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API UnprocessedStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline UnprocessedStatistics& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline UnprocessedStatistics& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline UnprocessedStatistics& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline UnprocessedStatistics& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline UnprocessedStatistics& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline UnprocessedStatistics& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline UnprocessedStatistics& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline UnprocessedStatistics& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline UnprocessedStatistics& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
