﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayListenerTlsFileCertificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualGatewayListenerTlsFileCertificate::VirtualGatewayListenerTlsFileCertificate(JsonView jsonValue)
{
  *this = jsonValue;
}

VirtualGatewayListenerTlsFileCertificate& VirtualGatewayListenerTlsFileCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateChain"))
  {
    m_certificateChain = jsonValue.GetString("certificateChain");
    m_certificateChainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateKey"))
  {
    m_privateKey = jsonValue.GetString("privateKey");
    m_privateKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue VirtualGatewayListenerTlsFileCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("certificateChain", m_certificateChain);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("privateKey", m_privateKey);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
