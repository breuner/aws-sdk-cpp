﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GCMMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

GCMMessage::GCMMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

GCMMessage& GCMMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CollapseKey"))
  {
    m_collapseKey = jsonValue.GetString("CollapseKey");
    m_collapseKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Data"))
  {
    Aws::Map<Aws::String, JsonView> dataJsonMap = jsonValue.GetObject("Data").GetAllObjects();
    for(auto& dataItem : dataJsonMap)
    {
      m_data[dataItem.first] = dataItem.second.AsString();
    }
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IconReference"))
  {
    m_iconReference = jsonValue.GetString("IconReference");
    m_iconReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageIconUrl"))
  {
    m_imageIconUrl = jsonValue.GetString("ImageIconUrl");
    m_imageIconUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");
    m_imageUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredAuthenticationMethod"))
  {
    m_preferredAuthenticationMethod = jsonValue.GetString("PreferredAuthenticationMethod");
    m_preferredAuthenticationMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetString("Priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RawContent"))
  {
    m_rawContent = jsonValue.GetString("RawContent");
    m_rawContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestrictedPackageName"))
  {
    m_restrictedPackageName = jsonValue.GetString("RestrictedPackageName");
    m_restrictedPackageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SilentPush"))
  {
    m_silentPush = jsonValue.GetBool("SilentPush");
    m_silentPushHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SmallImageIconUrl"))
  {
    m_smallImageIconUrl = jsonValue.GetString("SmallImageIconUrl");
    m_smallImageIconUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sound"))
  {
    m_sound = jsonValue.GetString("Sound");
    m_soundHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Substitutions"))
  {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for(auto& substitutionsItem : substitutionsJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__stringList);
    }
    m_substitutionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeToLive"))
  {
    m_timeToLive = jsonValue.GetInteger("TimeToLive");
    m_timeToLiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue GCMMessage::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_collapseKeyHasBeenSet)
  {
   payload.WithString("CollapseKey", m_collapseKey);

  }

  if(m_dataHasBeenSet)
  {
   JsonValue dataJsonMap;
   for(auto& dataItem : m_data)
   {
     dataJsonMap.WithString(dataItem.first, dataItem.second);
   }
   payload.WithObject("Data", std::move(dataJsonMap));

  }

  if(m_iconReferenceHasBeenSet)
  {
   payload.WithString("IconReference", m_iconReference);

  }

  if(m_imageIconUrlHasBeenSet)
  {
   payload.WithString("ImageIconUrl", m_imageIconUrl);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_preferredAuthenticationMethodHasBeenSet)
  {
   payload.WithString("PreferredAuthenticationMethod", m_preferredAuthenticationMethod);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithString("Priority", m_priority);

  }

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", m_rawContent);

  }

  if(m_restrictedPackageNameHasBeenSet)
  {
   payload.WithString("RestrictedPackageName", m_restrictedPackageName);

  }

  if(m_silentPushHasBeenSet)
  {
   payload.WithBool("SilentPush", m_silentPush);

  }

  if(m_smallImageIconUrlHasBeenSet)
  {
   payload.WithString("SmallImageIconUrl", m_smallImageIconUrl);

  }

  if(m_soundHasBeenSet)
  {
   payload.WithString("Sound", m_sound);

  }

  if(m_substitutionsHasBeenSet)
  {
   JsonValue substitutionsJsonMap;
   for(auto& substitutionsItem : m_substitutions)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
     }
     substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Substitutions", std::move(substitutionsJsonMap));

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithInteger("TimeToLive", m_timeToLive);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
