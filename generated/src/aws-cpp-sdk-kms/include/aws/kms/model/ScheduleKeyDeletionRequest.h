﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class ScheduleKeyDeletionRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ScheduleKeyDeletionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ScheduleKeyDeletion"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    ScheduleKeyDeletionRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, KMS deletes the KMS key.</p> <p>If the KMS key is a multi-Region primary
     * key with replica keys, the waiting period begins when the last of its replica
     * keys is deleted. Otherwise, the waiting period begins immediately.</p> <p>This
     * value is optional. If you include a value, it must be between 7 and 30,
     * inclusive. If you do not include a value, it defaults to 30. You can use the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-schedule-key-deletion-pending-window-in-days">
     * <code>kms:ScheduleKeyDeletionPendingWindowInDays</code> </a> condition key to
     * further constrain the values that principals can specify in the
     * <code>PendingWindowInDays</code> parameter.</p>
     */
    inline int GetPendingWindowInDays() const { return m_pendingWindowInDays; }
    inline bool PendingWindowInDaysHasBeenSet() const { return m_pendingWindowInDaysHasBeenSet; }
    inline void SetPendingWindowInDays(int value) { m_pendingWindowInDaysHasBeenSet = true; m_pendingWindowInDays = value; }
    inline ScheduleKeyDeletionRequest& WithPendingWindowInDays(int value) { SetPendingWindowInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    int m_pendingWindowInDays{0};
    bool m_pendingWindowInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
