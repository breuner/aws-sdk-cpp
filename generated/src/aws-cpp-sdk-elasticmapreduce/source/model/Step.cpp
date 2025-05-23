﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Step.h>
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

Step::Step(JsonView jsonValue)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Config"))
  {
    m_config = jsonValue.GetObject("Config");
    m_configHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionOnFailure"))
  {
    m_actionOnFailure = ActionOnFailureMapper::GetActionOnFailureForName(jsonValue.GetString("ActionOnFailure"));
    m_actionOnFailureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Step::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_configHasBeenSet)
  {
   payload.WithObject("Config", m_config.Jsonize());

  }

  if(m_actionOnFailureHasBeenSet)
  {
   payload.WithString("ActionOnFailure", ActionOnFailureMapper::GetNameForActionOnFailure(m_actionOnFailure));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
