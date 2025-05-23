﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AccountLevelPermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

AccountLevelPermissions::AccountLevelPermissions(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountLevelPermissions& AccountLevelPermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockPublicAccess"))
  {
    m_blockPublicAccess = jsonValue.GetObject("blockPublicAccess");
    m_blockPublicAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountLevelPermissions::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicAccessHasBeenSet)
  {
   payload.WithObject("blockPublicAccess", m_blockPublicAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
