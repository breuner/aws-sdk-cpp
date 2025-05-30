﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/Issuer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

Issuer::Issuer(JsonView jsonValue)
{
  *this = jsonValue;
}

Issuer& Issuer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignKey"))
  {
    m_signKey = jsonValue.GetString("SignKey");
    m_signKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue Issuer::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_signKeyHasBeenSet)
  {
   payload.WithString("SignKey", m_signKey);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
