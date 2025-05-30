﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/TemporaryCredential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

TemporaryCredential::TemporaryCredential(JsonView jsonValue)
{
  *this = jsonValue;
}

TemporaryCredential& TemporaryCredential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");
    m_passwordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidForInMinutes"))
  {
    m_validForInMinutes = jsonValue.GetInteger("ValidForInMinutes");
    m_validForInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TemporaryCredential::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_validForInMinutesHasBeenSet)
  {
   payload.WithInteger("ValidForInMinutes", m_validForInMinutes);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
