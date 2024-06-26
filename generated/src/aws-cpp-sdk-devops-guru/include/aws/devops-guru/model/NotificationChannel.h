﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/NotificationChannelConfig.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about a notification channel. A notification channel is used to
   * notify you when DevOps Guru creates an insight. The one supported notification
   * channel is Amazon Simple Notification Service (Amazon SNS). </p> <p>If you use
   * an Amazon SNS topic in another account, you must attach a policy to it that
   * grants DevOps Guru permission to send it notifications. DevOps Guru adds the
   * required policy on your behalf to send notifications using Amazon SNS in your
   * account. DevOps Guru only supports standard SNS topics. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
   * for Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic that is
   * encrypted by an Amazon Web Services Key Management Service customer-managed key
   * (CMK), then you must add permissions to the CMK. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
   * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/NotificationChannel">AWS
   * API Reference</a></p>
   */
  class NotificationChannel
  {
  public:
    AWS_DEVOPSGURU_API NotificationChannel();
    AWS_DEVOPSGURU_API NotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API NotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of a notification channel. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline NotificationChannel& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline NotificationChannel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline NotificationChannel& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>NotificationChannelConfig</code> object that contains information
     * about configured notification channels. </p>
     */
    inline const NotificationChannelConfig& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const NotificationChannelConfig& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(NotificationChannelConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline NotificationChannel& WithConfig(const NotificationChannelConfig& value) { SetConfig(value); return *this;}
    inline NotificationChannel& WithConfig(NotificationChannelConfig&& value) { SetConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    NotificationChannelConfig m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
