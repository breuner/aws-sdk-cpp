﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ClusterStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ClusterStatus::ClusterStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterStatus& ClusterStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetObject("StateChangeReason");
    m_stateChangeReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");
    m_timelineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ClusterStateMapper::GetNameForClusterState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithObject("StateChangeReason", m_stateChangeReason.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  if(m_errorDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
   for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
   {
     errorDetailsJsonList[errorDetailsIndex].AsObject(m_errorDetails[errorDetailsIndex].Jsonize());
   }
   payload.WithArray("ErrorDetails", std::move(errorDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
