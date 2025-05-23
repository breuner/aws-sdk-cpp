﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AnalysisFormat
  {
    NOT_SET,
    SQL,
    PYSPARK_1_0
  };

namespace AnalysisFormatMapper
{
AWS_CLEANROOMS_API AnalysisFormat GetAnalysisFormatForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisFormat(AnalysisFormat value);
} // namespace AnalysisFormatMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
