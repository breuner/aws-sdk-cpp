﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstancePortInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstancePortInfo::InstancePortInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

InstancePortInfo& InstancePortInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromPort"))
  {
    m_fromPort = jsonValue.GetInteger("fromPort");
    m_fromPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toPort"))
  {
    m_toPort = jsonValue.GetInteger("toPort");
    m_toPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = NetworkProtocolMapper::GetNetworkProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessFrom"))
  {
    m_accessFrom = jsonValue.GetString("accessFrom");
    m_accessFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessType"))
  {
    m_accessType = PortAccessTypeMapper::GetPortAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commonName"))
  {
    m_commonName = jsonValue.GetString("commonName");
    m_commonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessDirection"))
  {
    m_accessDirection = AccessDirectionMapper::GetAccessDirectionForName(jsonValue.GetString("accessDirection"));
    m_accessDirectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cidrs"))
  {
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipv6Cidrs"))
  {
    Aws::Utils::Array<JsonView> ipv6CidrsJsonList = jsonValue.GetArray("ipv6Cidrs");
    for(unsigned ipv6CidrsIndex = 0; ipv6CidrsIndex < ipv6CidrsJsonList.GetLength(); ++ipv6CidrsIndex)
    {
      m_ipv6Cidrs.push_back(ipv6CidrsJsonList[ipv6CidrsIndex].AsString());
    }
    m_ipv6CidrsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cidrListAliases"))
  {
    Aws::Utils::Array<JsonView> cidrListAliasesJsonList = jsonValue.GetArray("cidrListAliases");
    for(unsigned cidrListAliasesIndex = 0; cidrListAliasesIndex < cidrListAliasesJsonList.GetLength(); ++cidrListAliasesIndex)
    {
      m_cidrListAliases.push_back(cidrListAliasesJsonList[cidrListAliasesIndex].AsString());
    }
    m_cidrListAliasesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancePortInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("fromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("toPort", m_toPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", NetworkProtocolMapper::GetNameForNetworkProtocol(m_protocol));
  }

  if(m_accessFromHasBeenSet)
  {
   payload.WithString("accessFrom", m_accessFrom);

  }

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("accessType", PortAccessTypeMapper::GetNameForPortAccessType(m_accessType));
  }

  if(m_commonNameHasBeenSet)
  {
   payload.WithString("commonName", m_commonName);

  }

  if(m_accessDirectionHasBeenSet)
  {
   payload.WithString("accessDirection", AccessDirectionMapper::GetNameForAccessDirection(m_accessDirection));
  }

  if(m_cidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("cidrs", std::move(cidrsJsonList));

  }

  if(m_ipv6CidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6CidrsJsonList(m_ipv6Cidrs.size());
   for(unsigned ipv6CidrsIndex = 0; ipv6CidrsIndex < ipv6CidrsJsonList.GetLength(); ++ipv6CidrsIndex)
   {
     ipv6CidrsJsonList[ipv6CidrsIndex].AsString(m_ipv6Cidrs[ipv6CidrsIndex]);
   }
   payload.WithArray("ipv6Cidrs", std::move(ipv6CidrsJsonList));

  }

  if(m_cidrListAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrListAliasesJsonList(m_cidrListAliases.size());
   for(unsigned cidrListAliasesIndex = 0; cidrListAliasesIndex < cidrListAliasesJsonList.GetLength(); ++cidrListAliasesIndex)
   {
     cidrListAliasesJsonList[cidrListAliasesIndex].AsString(m_cidrListAliases[cidrListAliasesIndex]);
   }
   payload.WithArray("cidrListAliases", std::move(cidrListAliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
