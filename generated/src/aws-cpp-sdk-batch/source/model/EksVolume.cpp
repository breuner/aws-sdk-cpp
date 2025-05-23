﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksVolume::EksVolume(JsonView jsonValue)
{
  *this = jsonValue;
}

EksVolume& EksVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostPath"))
  {
    m_hostPath = jsonValue.GetObject("hostPath");
    m_hostPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("emptyDir"))
  {
    m_emptyDir = jsonValue.GetObject("emptyDir");
    m_emptyDirHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secret"))
  {
    m_secret = jsonValue.GetObject("secret");
    m_secretHasBeenSet = true;
  }
  if(jsonValue.ValueExists("persistentVolumeClaim"))
  {
    m_persistentVolumeClaim = jsonValue.GetObject("persistentVolumeClaim");
    m_persistentVolumeClaimHasBeenSet = true;
  }
  return *this;
}

JsonValue EksVolume::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hostPathHasBeenSet)
  {
   payload.WithObject("hostPath", m_hostPath.Jsonize());

  }

  if(m_emptyDirHasBeenSet)
  {
   payload.WithObject("emptyDir", m_emptyDir.Jsonize());

  }

  if(m_secretHasBeenSet)
  {
   payload.WithObject("secret", m_secret.Jsonize());

  }

  if(m_persistentVolumeClaimHasBeenSet)
  {
   payload.WithObject("persistentVolumeClaim", m_persistentVolumeClaim.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
