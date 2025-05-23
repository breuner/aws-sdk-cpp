﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

VideoSelector::VideoSelector(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSelector& VideoSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("colorSpace"))
  {
    m_colorSpace = VideoSelectorColorSpaceMapper::GetVideoSelectorColorSpaceForName(jsonValue.GetString("colorSpace"));
    m_colorSpaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceSettings"))
  {
    m_colorSpaceSettings = jsonValue.GetObject("colorSpaceSettings");
    m_colorSpaceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceUsage"))
  {
    m_colorSpaceUsage = VideoSelectorColorSpaceUsageMapper::GetVideoSelectorColorSpaceUsageForName(jsonValue.GetString("colorSpaceUsage"));
    m_colorSpaceUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selectorSettings"))
  {
    m_selectorSettings = jsonValue.GetObject("selectorSettings");
    m_selectorSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSelector::Jsonize() const
{
  JsonValue payload;

  if(m_colorSpaceHasBeenSet)
  {
   payload.WithString("colorSpace", VideoSelectorColorSpaceMapper::GetNameForVideoSelectorColorSpace(m_colorSpace));
  }

  if(m_colorSpaceSettingsHasBeenSet)
  {
   payload.WithObject("colorSpaceSettings", m_colorSpaceSettings.Jsonize());

  }

  if(m_colorSpaceUsageHasBeenSet)
  {
   payload.WithString("colorSpaceUsage", VideoSelectorColorSpaceUsageMapper::GetNameForVideoSelectorColorSpaceUsage(m_colorSpaceUsage));
  }

  if(m_selectorSettingsHasBeenSet)
  {
   payload.WithObject("selectorSettings", m_selectorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
