﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/TemplateLinkedPolicyDefinitionItem.h>
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

TemplateLinkedPolicyDefinitionItem::TemplateLinkedPolicyDefinitionItem(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateLinkedPolicyDefinitionItem& TemplateLinkedPolicyDefinitionItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyTemplateId"))
  {
    m_policyTemplateId = jsonValue.GetString("policyTemplateId");
    m_policyTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateLinkedPolicyDefinitionItem::Jsonize() const
{
  JsonValue payload;

  if(m_policyTemplateIdHasBeenSet)
  {
   payload.WithString("policyTemplateId", m_policyTemplateId);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
