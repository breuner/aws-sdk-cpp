﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportKeyMaterial.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

ExportKeyMaterial::ExportKeyMaterial(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportKeyMaterial& ExportKeyMaterial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tr31KeyBlock"))
  {
    m_tr31KeyBlock = jsonValue.GetObject("Tr31KeyBlock");
    m_tr31KeyBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tr34KeyBlock"))
  {
    m_tr34KeyBlock = jsonValue.GetObject("Tr34KeyBlock");
    m_tr34KeyBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCryptogram"))
  {
    m_keyCryptogram = jsonValue.GetObject("KeyCryptogram");
    m_keyCryptogramHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiffieHellmanTr31KeyBlock"))
  {
    m_diffieHellmanTr31KeyBlock = jsonValue.GetObject("DiffieHellmanTr31KeyBlock");
    m_diffieHellmanTr31KeyBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportKeyMaterial::Jsonize() const
{
  JsonValue payload;

  if(m_tr31KeyBlockHasBeenSet)
  {
   payload.WithObject("Tr31KeyBlock", m_tr31KeyBlock.Jsonize());

  }

  if(m_tr34KeyBlockHasBeenSet)
  {
   payload.WithObject("Tr34KeyBlock", m_tr34KeyBlock.Jsonize());

  }

  if(m_keyCryptogramHasBeenSet)
  {
   payload.WithObject("KeyCryptogram", m_keyCryptogram.Jsonize());

  }

  if(m_diffieHellmanTr31KeyBlockHasBeenSet)
  {
   payload.WithObject("DiffieHellmanTr31KeyBlock", m_diffieHellmanTr31KeyBlock.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
