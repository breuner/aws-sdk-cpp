﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/PointInTimeRecoveryStatus.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Point-in-time recovery (PITR) helps protect your Amazon Keyspaces tables from
   * accidental write or delete operations by providing you continuous backups of
   * your table data.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery.html">Point-in-time
   * recovery</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/PointInTimeRecovery">AWS
   * API Reference</a></p>
   */
  class PointInTimeRecovery
  {
  public:
    AWS_KEYSPACES_API PointInTimeRecovery() = default;
    AWS_KEYSPACES_API PointInTimeRecovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API PointInTimeRecovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options are:</p> <ul> <li> <p> <code>status=ENABLED</code> </p> </li>
     * <li> <p> <code>status=DISABLED</code> </p> </li> </ul>
     */
    inline PointInTimeRecoveryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PointInTimeRecoveryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PointInTimeRecovery& WithStatus(PointInTimeRecoveryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    PointInTimeRecoveryStatus m_status{PointInTimeRecoveryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
