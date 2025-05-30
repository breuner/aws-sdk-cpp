﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachToIndex.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchAttachToIndex::BatchAttachToIndex(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchAttachToIndex& BatchAttachToIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexReference"))
  {
    m_indexReference = jsonValue.GetObject("IndexReference");
    m_indexReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetReference"))
  {
    m_targetReference = jsonValue.GetObject("TargetReference");
    m_targetReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchAttachToIndex::Jsonize() const
{
  JsonValue payload;

  if(m_indexReferenceHasBeenSet)
  {
   payload.WithObject("IndexReference", m_indexReference.Jsonize());

  }

  if(m_targetReferenceHasBeenSet)
  {
   payload.WithObject("TargetReference", m_targetReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
