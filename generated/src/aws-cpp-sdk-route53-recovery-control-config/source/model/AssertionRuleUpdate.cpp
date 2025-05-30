﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/AssertionRuleUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

AssertionRuleUpdate::AssertionRuleUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

AssertionRuleUpdate& AssertionRuleUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SafetyRuleArn"))
  {
    m_safetyRuleArn = jsonValue.GetString("SafetyRuleArn");
    m_safetyRuleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitPeriodMs"))
  {
    m_waitPeriodMs = jsonValue.GetInteger("WaitPeriodMs");
    m_waitPeriodMsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssertionRuleUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_safetyRuleArnHasBeenSet)
  {
   payload.WithString("SafetyRuleArn", m_safetyRuleArn);

  }

  if(m_waitPeriodMsHasBeenSet)
  {
   payload.WithInteger("WaitPeriodMs", m_waitPeriodMs);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
