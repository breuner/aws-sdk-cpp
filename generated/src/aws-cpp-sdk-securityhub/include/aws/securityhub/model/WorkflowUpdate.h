﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/WorkflowStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Used to update information about the investigation into the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WorkflowUpdate">AWS
   * API Reference</a></p>
   */
  class WorkflowUpdate
  {
  public:
    AWS_SECURITYHUB_API WorkflowUpdate() = default;
    AWS_SECURITYHUB_API WorkflowUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API WorkflowUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets <code>WorkFlowStatus</code> from <code>NOTIFIED</code> or
     * <code>RESOLVED</code> to <code>NEW</code> in the following cases:</p> <ul> <li>
     * <p>The record state changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p>The compliance status changes from
     * <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>RESOLVED</code> - The finding was
     * reviewed and remediated and is now considered resolved.</p> </li> <li> <p>
     * <code>SUPPRESSED</code> - Indicates that you reviewed the finding and don't
     * believe that any action is needed. The finding is no longer updated.</p> </li>
     * </ul>
     */
    inline WorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowUpdate& WithStatus(WorkflowStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    WorkflowStatus m_status{WorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
