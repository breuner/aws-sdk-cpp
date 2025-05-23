﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateStaticPolicyDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

UpdateStaticPolicyDefinition::UpdateStaticPolicyDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateStaticPolicyDefinition& UpdateStaticPolicyDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statement"))
  {
    m_statement = jsonValue.GetString("statement");
    m_statementHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateStaticPolicyDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statementHasBeenSet)
  {
   payload.WithString("statement", m_statement);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
