﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class WorkloadIssueManagementStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    INHERIT
  };

namespace WorkloadIssueManagementStatusMapper
{
AWS_WELLARCHITECTED_API WorkloadIssueManagementStatus GetWorkloadIssueManagementStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForWorkloadIssueManagementStatus(WorkloadIssueManagementStatus value);
} // namespace WorkloadIssueManagementStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
