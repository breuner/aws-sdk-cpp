﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/RandomSplitEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

RandomSplitEntry::RandomSplitEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

RandomSplitEntry& RandomSplitEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");
    m_nextActivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetInteger("Percentage");
    m_percentageHasBeenSet = true;
  }
  return *this;
}

JsonValue RandomSplitEntry::Jsonize() const
{
  JsonValue payload;

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithInteger("Percentage", m_percentage);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
