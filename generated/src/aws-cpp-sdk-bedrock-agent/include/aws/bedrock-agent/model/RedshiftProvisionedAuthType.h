﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class RedshiftProvisionedAuthType
  {
    NOT_SET,
    IAM,
    USERNAME_PASSWORD,
    USERNAME
  };

namespace RedshiftProvisionedAuthTypeMapper
{
AWS_BEDROCKAGENT_API RedshiftProvisionedAuthType GetRedshiftProvisionedAuthTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRedshiftProvisionedAuthType(RedshiftProvisionedAuthType value);
} // namespace RedshiftProvisionedAuthTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
