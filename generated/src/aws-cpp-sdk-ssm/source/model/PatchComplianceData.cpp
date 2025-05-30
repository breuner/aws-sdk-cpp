﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchComplianceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchComplianceData::PatchComplianceData(JsonView jsonValue)
{
  *this = jsonValue;
}

PatchComplianceData& PatchComplianceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KBId"))
  {
    m_kBId = jsonValue.GetString("KBId");
    m_kBIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");
    m_classificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetString("Severity");
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = PatchComplianceDataStateMapper::GetPatchComplianceDataStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstalledTime"))
  {
    m_installedTime = jsonValue.GetDouble("InstalledTime");
    m_installedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CVEIds"))
  {
    m_cVEIds = jsonValue.GetString("CVEIds");
    m_cVEIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue PatchComplianceData::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_kBIdHasBeenSet)
  {
   payload.WithString("KBId", m_kBId);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", PatchComplianceDataStateMapper::GetNameForPatchComplianceDataState(m_state));
  }

  if(m_installedTimeHasBeenSet)
  {
   payload.WithDouble("InstalledTime", m_installedTime.SecondsWithMSPrecision());
  }

  if(m_cVEIdsHasBeenSet)
  {
   payload.WithString("CVEIds", m_cVEIds);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
