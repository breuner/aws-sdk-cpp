﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttachmentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AttachmentInput::AttachmentInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachmentInput& AttachmentInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("copyFrom"))
  {
    m_copyFrom = jsonValue.GetObject("copyFrom");
    m_copyFromHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_copyFromHasBeenSet)
  {
   payload.WithObject("copyFrom", m_copyFrom.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
