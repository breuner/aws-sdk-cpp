﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuditCheckRunStatus.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about the audit check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditCheckDetails">AWS
   * API Reference</a></p>
   */
  class AuditCheckDetails
  {
  public:
    AWS_IOT_API AuditCheckDetails();
    AWS_IOT_API AuditCheckDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditCheckDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The completion status of this check. One of "IN_PROGRESS",
     * "WAITING_FOR_DATA_COLLECTION", "CANCELED", "COMPLETED_COMPLIANT",
     * "COMPLETED_NON_COMPLIANT", or "FAILED".</p>
     */
    inline const AuditCheckRunStatus& GetCheckRunStatus() const{ return m_checkRunStatus; }
    inline bool CheckRunStatusHasBeenSet() const { return m_checkRunStatusHasBeenSet; }
    inline void SetCheckRunStatus(const AuditCheckRunStatus& value) { m_checkRunStatusHasBeenSet = true; m_checkRunStatus = value; }
    inline void SetCheckRunStatus(AuditCheckRunStatus&& value) { m_checkRunStatusHasBeenSet = true; m_checkRunStatus = std::move(value); }
    inline AuditCheckDetails& WithCheckRunStatus(const AuditCheckRunStatus& value) { SetCheckRunStatus(value); return *this;}
    inline AuditCheckDetails& WithCheckRunStatus(AuditCheckRunStatus&& value) { SetCheckRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the check is complete and found all resources compliant.</p>
     */
    inline bool GetCheckCompliant() const{ return m_checkCompliant; }
    inline bool CheckCompliantHasBeenSet() const { return m_checkCompliantHasBeenSet; }
    inline void SetCheckCompliant(bool value) { m_checkCompliantHasBeenSet = true; m_checkCompliant = value; }
    inline AuditCheckDetails& WithCheckCompliant(bool value) { SetCheckCompliant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources on which the check was performed.</p>
     */
    inline long long GetTotalResourcesCount() const{ return m_totalResourcesCount; }
    inline bool TotalResourcesCountHasBeenSet() const { return m_totalResourcesCountHasBeenSet; }
    inline void SetTotalResourcesCount(long long value) { m_totalResourcesCountHasBeenSet = true; m_totalResourcesCount = value; }
    inline AuditCheckDetails& WithTotalResourcesCount(long long value) { SetTotalResourcesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that were found noncompliant during the check.</p>
     */
    inline long long GetNonCompliantResourcesCount() const{ return m_nonCompliantResourcesCount; }
    inline bool NonCompliantResourcesCountHasBeenSet() const { return m_nonCompliantResourcesCountHasBeenSet; }
    inline void SetNonCompliantResourcesCount(long long value) { m_nonCompliantResourcesCountHasBeenSet = true; m_nonCompliantResourcesCount = value; }
    inline AuditCheckDetails& WithNonCompliantResourcesCount(long long value) { SetNonCompliantResourcesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes how many of the non-compliant resources created during the
     * evaluation of an audit check were marked as suppressed. </p>
     */
    inline long long GetSuppressedNonCompliantResourcesCount() const{ return m_suppressedNonCompliantResourcesCount; }
    inline bool SuppressedNonCompliantResourcesCountHasBeenSet() const { return m_suppressedNonCompliantResourcesCountHasBeenSet; }
    inline void SetSuppressedNonCompliantResourcesCount(long long value) { m_suppressedNonCompliantResourcesCountHasBeenSet = true; m_suppressedNonCompliantResourcesCount = value; }
    inline AuditCheckDetails& WithSuppressedNonCompliantResourcesCount(long long value) { SetSuppressedNonCompliantResourcesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code of any error encountered when this check is performed during this
     * audit. One of "INSUFFICIENT_PERMISSIONS" or "AUDIT_CHECK_DISABLED".</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline AuditCheckDetails& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline AuditCheckDetails& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline AuditCheckDetails& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with any error encountered when this check is
     * performed during this audit.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AuditCheckDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AuditCheckDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AuditCheckDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    AuditCheckRunStatus m_checkRunStatus;
    bool m_checkRunStatusHasBeenSet = false;

    bool m_checkCompliant;
    bool m_checkCompliantHasBeenSet = false;

    long long m_totalResourcesCount;
    bool m_totalResourcesCountHasBeenSet = false;

    long long m_nonCompliantResourcesCount;
    bool m_nonCompliantResourcesCountHasBeenSet = false;

    long long m_suppressedNonCompliantResourcesCount;
    bool m_suppressedNonCompliantResourcesCountHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
