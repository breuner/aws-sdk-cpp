﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codebuild/CodeBuildErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeBuild;

namespace Aws
{
namespace CodeBuild
{
namespace CodeBuildErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int O_AUTH_PROVIDER_HASH = HashingUtils::HashString("OAuthProviderException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("AccountSuspendedException");
static const int ACCOUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AccountLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == O_AUTH_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::O_AUTH_PROVIDER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACCOUNT_SUSPENDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::ACCOUNT_SUSPENDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ACCOUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::ACCOUNT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeBuildErrorMapper
} // namespace CodeBuild
} // namespace Aws
