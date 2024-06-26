﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UsageReportSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/LastReportGenerationExecutionError.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes information about the usage report subscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UsageReportSubscription">AWS
   * API Reference</a></p>
   */
  class UsageReportSubscription
  {
  public:
    AWS_APPSTREAM_API UsageReportSubscription();
    AWS_APPSTREAM_API UsageReportSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API UsageReportSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket where generated reports are stored.</p> <p>If you
     * enabled on-instance session scripts and Amazon S3 logging for your session
     * script configuration, AppStream 2.0 created an S3 bucket to store the script
     * output. The bucket is unique to your account and Region. When you enable usage
     * reporting in this case, AppStream 2.0 uses the same bucket to store your usage
     * reports. If you haven't already enabled on-instance session scripts, when you
     * enable usage reports, AppStream 2.0 creates a new S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline UsageReportSubscription& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline UsageReportSubscription& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline UsageReportSubscription& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for generating usage reports.</p>
     */
    inline const UsageReportSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const UsageReportSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(UsageReportSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline UsageReportSubscription& WithSchedule(const UsageReportSchedule& value) { SetSchedule(value); return *this;}
    inline UsageReportSubscription& WithSchedule(UsageReportSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the last usage report was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedReportDate() const{ return m_lastGeneratedReportDate; }
    inline bool LastGeneratedReportDateHasBeenSet() const { return m_lastGeneratedReportDateHasBeenSet; }
    inline void SetLastGeneratedReportDate(const Aws::Utils::DateTime& value) { m_lastGeneratedReportDateHasBeenSet = true; m_lastGeneratedReportDate = value; }
    inline void SetLastGeneratedReportDate(Aws::Utils::DateTime&& value) { m_lastGeneratedReportDateHasBeenSet = true; m_lastGeneratedReportDate = std::move(value); }
    inline UsageReportSubscription& WithLastGeneratedReportDate(const Aws::Utils::DateTime& value) { SetLastGeneratedReportDate(value); return *this;}
    inline UsageReportSubscription& WithLastGeneratedReportDate(Aws::Utils::DateTime&& value) { SetLastGeneratedReportDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors that were returned if usage reports couldn't be generated.</p>
     */
    inline const Aws::Vector<LastReportGenerationExecutionError>& GetSubscriptionErrors() const{ return m_subscriptionErrors; }
    inline bool SubscriptionErrorsHasBeenSet() const { return m_subscriptionErrorsHasBeenSet; }
    inline void SetSubscriptionErrors(const Aws::Vector<LastReportGenerationExecutionError>& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors = value; }
    inline void SetSubscriptionErrors(Aws::Vector<LastReportGenerationExecutionError>&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors = std::move(value); }
    inline UsageReportSubscription& WithSubscriptionErrors(const Aws::Vector<LastReportGenerationExecutionError>& value) { SetSubscriptionErrors(value); return *this;}
    inline UsageReportSubscription& WithSubscriptionErrors(Aws::Vector<LastReportGenerationExecutionError>&& value) { SetSubscriptionErrors(std::move(value)); return *this;}
    inline UsageReportSubscription& AddSubscriptionErrors(const LastReportGenerationExecutionError& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors.push_back(value); return *this; }
    inline UsageReportSubscription& AddSubscriptionErrors(LastReportGenerationExecutionError&& value) { m_subscriptionErrorsHasBeenSet = true; m_subscriptionErrors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    UsageReportSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedReportDate;
    bool m_lastGeneratedReportDateHasBeenSet = false;

    Aws::Vector<LastReportGenerationExecutionError> m_subscriptionErrors;
    bool m_subscriptionErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
