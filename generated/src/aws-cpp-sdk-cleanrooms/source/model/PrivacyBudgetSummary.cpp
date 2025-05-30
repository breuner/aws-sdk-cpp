﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudgetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

PrivacyBudgetSummary::PrivacyBudgetSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivacyBudgetSummary& PrivacyBudgetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privacyBudgetTemplateId"))
  {
    m_privacyBudgetTemplateId = jsonValue.GetString("privacyBudgetTemplateId");
    m_privacyBudgetTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privacyBudgetTemplateArn"))
  {
    m_privacyBudgetTemplateArn = jsonValue.GetString("privacyBudgetTemplateArn");
    m_privacyBudgetTemplateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationArn"))
  {
    m_collaborationArn = jsonValue.GetString("collaborationArn");
    m_collaborationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PrivacyBudgetTypeMapper::GetPrivacyBudgetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("budget"))
  {
    m_budget = jsonValue.GetObject("budget");
    m_budgetHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivacyBudgetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_privacyBudgetTemplateIdHasBeenSet)
  {
   payload.WithString("privacyBudgetTemplateId", m_privacyBudgetTemplateId);

  }

  if(m_privacyBudgetTemplateArnHasBeenSet)
  {
   payload.WithString("privacyBudgetTemplateArn", m_privacyBudgetTemplateArn);

  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PrivacyBudgetTypeMapper::GetNameForPrivacyBudgetType(m_type));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_budgetHasBeenSet)
  {
   payload.WithObject("budget", m_budget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
