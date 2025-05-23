﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/TargetAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

TargetAddress::TargetAddress(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetAddress& TargetAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");
    m_ipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6"))
  {
    m_ipv6 = jsonValue.GetString("Ipv6");
    m_ipv6HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerNameIndication"))
  {
    m_serverNameIndication = jsonValue.GetString("ServerNameIndication");
    m_serverNameIndicationHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetAddress::Jsonize() const
{
  JsonValue payload;

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_ipv6HasBeenSet)
  {
   payload.WithString("Ipv6", m_ipv6);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_serverNameIndicationHasBeenSet)
  {
   payload.WithString("ServerNameIndication", m_serverNameIndication);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
