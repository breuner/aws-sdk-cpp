﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UserProfile.h>
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

UserProfile::UserProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

UserProfile& UserProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamUserArn"))
  {
    m_iamUserArn = jsonValue.GetString("IamUserArn");
    m_iamUserArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshUsername"))
  {
    m_sshUsername = jsonValue.GetString("SshUsername");
    m_sshUsernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SshPublicKey"))
  {
    m_sshPublicKey = jsonValue.GetString("SshPublicKey");
    m_sshPublicKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowSelfManagement"))
  {
    m_allowSelfManagement = jsonValue.GetBool("AllowSelfManagement");
    m_allowSelfManagementHasBeenSet = true;
  }
  return *this;
}

JsonValue UserProfile::Jsonize() const
{
  JsonValue payload;

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sshUsernameHasBeenSet)
  {
   payload.WithString("SshUsername", m_sshUsername);

  }

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("SshPublicKey", m_sshPublicKey);

  }

  if(m_allowSelfManagementHasBeenSet)
  {
   payload.WithBool("AllowSelfManagement", m_allowSelfManagement);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
