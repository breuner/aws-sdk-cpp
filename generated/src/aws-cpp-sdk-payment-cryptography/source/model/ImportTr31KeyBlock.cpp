﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ImportTr31KeyBlock.h>
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

ImportTr31KeyBlock::ImportTr31KeyBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportTr31KeyBlock& ImportTr31KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WrappingKeyIdentifier"))
  {
    m_wrappingKeyIdentifier = jsonValue.GetString("WrappingKeyIdentifier");
    m_wrappingKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WrappedKeyBlock"))
  {
    m_wrappedKeyBlock = jsonValue.GetString("WrappedKeyBlock");
    m_wrappedKeyBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportTr31KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_wrappingKeyIdentifierHasBeenSet)
  {
   payload.WithString("WrappingKeyIdentifier", m_wrappingKeyIdentifier);

  }

  if(m_wrappedKeyBlockHasBeenSet)
  {
   payload.WithString("WrappedKeyBlock", m_wrappedKeyBlock);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
