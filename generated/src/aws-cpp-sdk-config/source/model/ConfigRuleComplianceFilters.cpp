﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigRuleComplianceFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigRuleComplianceFilters::ConfigRuleComplianceFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigRuleComplianceFilters& ConfigRuleComplianceFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");
    m_configRuleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("ComplianceType"));
    m_complianceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");
    m_awsRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigRuleComplianceFilters::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ComplianceTypeMapper::GetNameForComplianceType(m_complianceType));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
