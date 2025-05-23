﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Playlist.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Playlist::Playlist(JsonView jsonValue)
{
  *this = jsonValue;
}

Playlist& Playlist::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputKeys"))
  {
    Aws::Utils::Array<JsonView> outputKeysJsonList = jsonValue.GetArray("OutputKeys");
    for(unsigned outputKeysIndex = 0; outputKeysIndex < outputKeysJsonList.GetLength(); ++outputKeysIndex)
    {
      m_outputKeys.push_back(outputKeysJsonList[outputKeysIndex].AsString());
    }
    m_outputKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HlsContentProtection"))
  {
    m_hlsContentProtection = jsonValue.GetObject("HlsContentProtection");
    m_hlsContentProtectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlayReadyDrm"))
  {
    m_playReadyDrm = jsonValue.GetObject("PlayReadyDrm");
    m_playReadyDrmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetail"))
  {
    m_statusDetail = jsonValue.GetString("StatusDetail");
    m_statusDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue Playlist::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_outputKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputKeysJsonList(m_outputKeys.size());
   for(unsigned outputKeysIndex = 0; outputKeysIndex < outputKeysJsonList.GetLength(); ++outputKeysIndex)
   {
     outputKeysJsonList[outputKeysIndex].AsString(m_outputKeys[outputKeysIndex]);
   }
   payload.WithArray("OutputKeys", std::move(outputKeysJsonList));

  }

  if(m_hlsContentProtectionHasBeenSet)
  {
   payload.WithObject("HlsContentProtection", m_hlsContentProtection.Jsonize());

  }

  if(m_playReadyDrmHasBeenSet)
  {
   payload.WithObject("PlayReadyDrm", m_playReadyDrm.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusDetailHasBeenSet)
  {
   payload.WithString("StatusDetail", m_statusDetail);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
