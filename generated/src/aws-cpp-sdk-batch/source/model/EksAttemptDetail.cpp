﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksAttemptDetail.h>
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

EksAttemptDetail::EksAttemptDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

EksAttemptDetail& EksAttemptDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initContainers"))
  {
    Aws::Utils::Array<JsonView> initContainersJsonList = jsonValue.GetArray("initContainers");
    for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
    {
      m_initContainers.push_back(initContainersJsonList[initContainersIndex].AsObject());
    }
    m_initContainersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksClusterArn"))
  {
    m_eksClusterArn = jsonValue.GetString("eksClusterArn");
    m_eksClusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("podName"))
  {
    m_podName = jsonValue.GetString("podName");
    m_podNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("podNamespace"))
  {
    m_podNamespace = jsonValue.GetString("podNamespace");
    m_podNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetInt64("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue EksAttemptDetail::Jsonize() const
{
  JsonValue payload;

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_initContainersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> initContainersJsonList(m_initContainers.size());
   for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
   {
     initContainersJsonList[initContainersIndex].AsObject(m_initContainers[initContainersIndex].Jsonize());
   }
   payload.WithArray("initContainers", std::move(initContainersJsonList));

  }

  if(m_eksClusterArnHasBeenSet)
  {
   payload.WithString("eksClusterArn", m_eksClusterArn);

  }

  if(m_podNameHasBeenSet)
  {
   payload.WithString("podName", m_podName);

  }

  if(m_podNamespaceHasBeenSet)
  {
   payload.WithString("podNamespace", m_podNamespace);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithInt64("stoppedAt", m_stoppedAt);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
