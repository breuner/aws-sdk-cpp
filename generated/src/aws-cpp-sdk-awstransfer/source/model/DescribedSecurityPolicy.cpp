﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedSecurityPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedSecurityPolicy::DescribedSecurityPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedSecurityPolicy& DescribedSecurityPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fips"))
  {
    m_fips = jsonValue.GetBool("Fips");
    m_fipsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityPolicyName"))
  {
    m_securityPolicyName = jsonValue.GetString("SecurityPolicyName");
    m_securityPolicyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshCiphers"))
  {
    Aws::Utils::Array<JsonView> sshCiphersJsonList = jsonValue.GetArray("SshCiphers");
    for(unsigned sshCiphersIndex = 0; sshCiphersIndex < sshCiphersJsonList.GetLength(); ++sshCiphersIndex)
    {
      m_sshCiphers.push_back(sshCiphersJsonList[sshCiphersIndex].AsString());
    }
    m_sshCiphersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshKexs"))
  {
    Aws::Utils::Array<JsonView> sshKexsJsonList = jsonValue.GetArray("SshKexs");
    for(unsigned sshKexsIndex = 0; sshKexsIndex < sshKexsJsonList.GetLength(); ++sshKexsIndex)
    {
      m_sshKexs.push_back(sshKexsJsonList[sshKexsIndex].AsString());
    }
    m_sshKexsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshMacs"))
  {
    Aws::Utils::Array<JsonView> sshMacsJsonList = jsonValue.GetArray("SshMacs");
    for(unsigned sshMacsIndex = 0; sshMacsIndex < sshMacsJsonList.GetLength(); ++sshMacsIndex)
    {
      m_sshMacs.push_back(sshMacsJsonList[sshMacsIndex].AsString());
    }
    m_sshMacsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TlsCiphers"))
  {
    Aws::Utils::Array<JsonView> tlsCiphersJsonList = jsonValue.GetArray("TlsCiphers");
    for(unsigned tlsCiphersIndex = 0; tlsCiphersIndex < tlsCiphersJsonList.GetLength(); ++tlsCiphersIndex)
    {
      m_tlsCiphers.push_back(tlsCiphersJsonList[tlsCiphersIndex].AsString());
    }
    m_tlsCiphersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshHostKeyAlgorithms"))
  {
    Aws::Utils::Array<JsonView> sshHostKeyAlgorithmsJsonList = jsonValue.GetArray("SshHostKeyAlgorithms");
    for(unsigned sshHostKeyAlgorithmsIndex = 0; sshHostKeyAlgorithmsIndex < sshHostKeyAlgorithmsJsonList.GetLength(); ++sshHostKeyAlgorithmsIndex)
    {
      m_sshHostKeyAlgorithms.push_back(sshHostKeyAlgorithmsJsonList[sshHostKeyAlgorithmsIndex].AsString());
    }
    m_sshHostKeyAlgorithmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SecurityPolicyResourceTypeMapper::GetSecurityPolicyResourceTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(SecurityPolicyProtocolMapper::GetSecurityPolicyProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedSecurityPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_fipsHasBeenSet)
  {
   payload.WithBool("Fips", m_fips);

  }

  if(m_securityPolicyNameHasBeenSet)
  {
   payload.WithString("SecurityPolicyName", m_securityPolicyName);

  }

  if(m_sshCiphersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshCiphersJsonList(m_sshCiphers.size());
   for(unsigned sshCiphersIndex = 0; sshCiphersIndex < sshCiphersJsonList.GetLength(); ++sshCiphersIndex)
   {
     sshCiphersJsonList[sshCiphersIndex].AsString(m_sshCiphers[sshCiphersIndex]);
   }
   payload.WithArray("SshCiphers", std::move(sshCiphersJsonList));

  }

  if(m_sshKexsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshKexsJsonList(m_sshKexs.size());
   for(unsigned sshKexsIndex = 0; sshKexsIndex < sshKexsJsonList.GetLength(); ++sshKexsIndex)
   {
     sshKexsJsonList[sshKexsIndex].AsString(m_sshKexs[sshKexsIndex]);
   }
   payload.WithArray("SshKexs", std::move(sshKexsJsonList));

  }

  if(m_sshMacsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshMacsJsonList(m_sshMacs.size());
   for(unsigned sshMacsIndex = 0; sshMacsIndex < sshMacsJsonList.GetLength(); ++sshMacsIndex)
   {
     sshMacsJsonList[sshMacsIndex].AsString(m_sshMacs[sshMacsIndex]);
   }
   payload.WithArray("SshMacs", std::move(sshMacsJsonList));

  }

  if(m_tlsCiphersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tlsCiphersJsonList(m_tlsCiphers.size());
   for(unsigned tlsCiphersIndex = 0; tlsCiphersIndex < tlsCiphersJsonList.GetLength(); ++tlsCiphersIndex)
   {
     tlsCiphersJsonList[tlsCiphersIndex].AsString(m_tlsCiphers[tlsCiphersIndex]);
   }
   payload.WithArray("TlsCiphers", std::move(tlsCiphersJsonList));

  }

  if(m_sshHostKeyAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshHostKeyAlgorithmsJsonList(m_sshHostKeyAlgorithms.size());
   for(unsigned sshHostKeyAlgorithmsIndex = 0; sshHostKeyAlgorithmsIndex < sshHostKeyAlgorithmsJsonList.GetLength(); ++sshHostKeyAlgorithmsIndex)
   {
     sshHostKeyAlgorithmsJsonList[sshHostKeyAlgorithmsIndex].AsString(m_sshHostKeyAlgorithms[sshHostKeyAlgorithmsIndex]);
   }
   payload.WithArray("SshHostKeyAlgorithms", std::move(sshHostKeyAlgorithmsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SecurityPolicyResourceTypeMapper::GetNameForSecurityPolicyResourceType(m_type));
  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(SecurityPolicyProtocolMapper::GetNameForSecurityPolicyProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
