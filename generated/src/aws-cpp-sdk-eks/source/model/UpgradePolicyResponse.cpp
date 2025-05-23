﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpgradePolicyResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

UpgradePolicyResponse::UpgradePolicyResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

UpgradePolicyResponse& UpgradePolicyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportType"))
  {
    m_supportType = SupportTypeMapper::GetSupportTypeForName(jsonValue.GetString("supportType"));
    m_supportTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpgradePolicyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_supportTypeHasBeenSet)
  {
   payload.WithString("supportType", SupportTypeMapper::GetNameForSupportType(m_supportType));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
