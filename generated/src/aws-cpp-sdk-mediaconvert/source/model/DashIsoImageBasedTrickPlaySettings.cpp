﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlaySettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DashIsoImageBasedTrickPlaySettings::DashIsoImageBasedTrickPlaySettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DashIsoImageBasedTrickPlaySettings& DashIsoImageBasedTrickPlaySettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intervalCadence"))
  {
    m_intervalCadence = DashIsoIntervalCadenceMapper::GetDashIsoIntervalCadenceForName(jsonValue.GetString("intervalCadence"));
    m_intervalCadenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailHeight"))
  {
    m_thumbnailHeight = jsonValue.GetInteger("thumbnailHeight");
    m_thumbnailHeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailInterval"))
  {
    m_thumbnailInterval = jsonValue.GetDouble("thumbnailInterval");
    m_thumbnailIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailWidth"))
  {
    m_thumbnailWidth = jsonValue.GetInteger("thumbnailWidth");
    m_thumbnailWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tileHeight"))
  {
    m_tileHeight = jsonValue.GetInteger("tileHeight");
    m_tileHeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tileWidth"))
  {
    m_tileWidth = jsonValue.GetInteger("tileWidth");
    m_tileWidthHasBeenSet = true;
  }
  return *this;
}

JsonValue DashIsoImageBasedTrickPlaySettings::Jsonize() const
{
  JsonValue payload;

  if(m_intervalCadenceHasBeenSet)
  {
   payload.WithString("intervalCadence", DashIsoIntervalCadenceMapper::GetNameForDashIsoIntervalCadence(m_intervalCadence));
  }

  if(m_thumbnailHeightHasBeenSet)
  {
   payload.WithInteger("thumbnailHeight", m_thumbnailHeight);

  }

  if(m_thumbnailIntervalHasBeenSet)
  {
   payload.WithDouble("thumbnailInterval", m_thumbnailInterval);

  }

  if(m_thumbnailWidthHasBeenSet)
  {
   payload.WithInteger("thumbnailWidth", m_thumbnailWidth);

  }

  if(m_tileHeightHasBeenSet)
  {
   payload.WithInteger("tileHeight", m_tileHeight);

  }

  if(m_tileWidthHasBeenSet)
  {
   payload.WithInteger("tileWidth", m_tileWidth);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
