﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpstreamRepositoryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

UpstreamRepositoryInfo::UpstreamRepositoryInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

UpstreamRepositoryInfo& UpstreamRepositoryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  return *this;
}

JsonValue UpstreamRepositoryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
