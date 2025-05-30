﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class AGAPreferredProtocolForDirectory
  {
    NOT_SET,
    TCP,
    NONE
  };

namespace AGAPreferredProtocolForDirectoryMapper
{
AWS_WORKSPACES_API AGAPreferredProtocolForDirectory GetAGAPreferredProtocolForDirectoryForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAGAPreferredProtocolForDirectory(AGAPreferredProtocolForDirectory value);
} // namespace AGAPreferredProtocolForDirectoryMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
