﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClientException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ClientException::ClientException(JsonView jsonValue)
{
  *this = jsonValue;
}

ClientException& ClientException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodegroupName"))
  {
    m_nodegroupName = jsonValue.GetString("nodegroupName");
    m_nodegroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addonName"))
  {
    m_addonName = jsonValue.GetString("addonName");
    m_addonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientException::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("addonName", m_addonName);

  }

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("subscriptionId", m_subscriptionId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
