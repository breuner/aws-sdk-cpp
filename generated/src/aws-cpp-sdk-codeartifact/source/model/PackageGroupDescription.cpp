﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupDescription.h>
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

PackageGroupDescription::PackageGroupDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageGroupDescription& PackageGroupDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");
    m_patternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainOwner"))
  {
    m_domainOwner = jsonValue.GetString("domainOwner");
    m_domainOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contactInfo"))
  {
    m_contactInfo = jsonValue.GetString("contactInfo");
    m_contactInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("originConfiguration"))
  {
    m_originConfiguration = jsonValue.GetObject("originConfiguration");
    m_originConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parent"))
  {
    m_parent = jsonValue.GetObject("parent");
    m_parentHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageGroupDescription::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_domainOwnerHasBeenSet)
  {
   payload.WithString("domainOwner", m_domainOwner);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_contactInfoHasBeenSet)
  {
   payload.WithString("contactInfo", m_contactInfo);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_originConfigurationHasBeenSet)
  {
   payload.WithObject("originConfiguration", m_originConfiguration.Jsonize());

  }

  if(m_parentHasBeenSet)
  {
   payload.WithObject("parent", m_parent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
