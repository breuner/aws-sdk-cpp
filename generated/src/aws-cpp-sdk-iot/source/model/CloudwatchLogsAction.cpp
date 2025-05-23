﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CloudwatchLogsAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CloudwatchLogsAction::CloudwatchLogsAction(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudwatchLogsAction& CloudwatchLogsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("batchMode"))
  {
    m_batchMode = jsonValue.GetBool("batchMode");
    m_batchModeHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudwatchLogsAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_batchModeHasBeenSet)
  {
   payload.WithBool("batchMode", m_batchMode);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
