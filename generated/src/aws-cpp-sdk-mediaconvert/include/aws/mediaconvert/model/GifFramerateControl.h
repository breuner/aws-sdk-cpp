﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class GifFramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace GifFramerateControlMapper
{
AWS_MEDIACONVERT_API GifFramerateControl GetGifFramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForGifFramerateControl(GifFramerateControl value);
} // namespace GifFramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
