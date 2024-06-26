﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ValidationStatus.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Contains the status of validating an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotificationContext">AWS
   * API Reference</a></p>
   */
  class NotificationContext
  {
  public:
    AWS_SMS_API NotificationContext();
    AWS_SMS_API NotificationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API NotificationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const{ return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    inline void SetValidationId(const Aws::String& value) { m_validationIdHasBeenSet = true; m_validationId = value; }
    inline void SetValidationId(Aws::String&& value) { m_validationIdHasBeenSet = true; m_validationId = std::move(value); }
    inline void SetValidationId(const char* value) { m_validationIdHasBeenSet = true; m_validationId.assign(value); }
    inline NotificationContext& WithValidationId(const Aws::String& value) { SetValidationId(value); return *this;}
    inline NotificationContext& WithValidationId(Aws::String&& value) { SetValidationId(std::move(value)); return *this;}
    inline NotificationContext& WithValidationId(const char* value) { SetValidationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation.</p>
     */
    inline const ValidationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ValidationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ValidationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NotificationContext& WithStatus(const ValidationStatus& value) { SetStatus(value); return *this;}
    inline NotificationContext& WithStatus(ValidationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline NotificationContext& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline NotificationContext& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline NotificationContext& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    ValidationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
