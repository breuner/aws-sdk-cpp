﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ServiceNowSourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ServiceNowSourceProperties::ServiceNowSourceProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNowSourceProperties& ServiceNowSourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Object"))
  {
    m_object = jsonValue.GetString("Object");
    m_objectHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowSourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("Object", m_object);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
