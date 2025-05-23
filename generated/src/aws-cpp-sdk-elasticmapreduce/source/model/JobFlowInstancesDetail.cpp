﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/JobFlowInstancesDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

JobFlowInstancesDetail::JobFlowInstancesDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

JobFlowInstancesDetail& JobFlowInstancesDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MasterInstanceType"))
  {
    m_masterInstanceType = jsonValue.GetString("MasterInstanceType");
    m_masterInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterPublicDnsName"))
  {
    m_masterPublicDnsName = jsonValue.GetString("MasterPublicDnsName");
    m_masterPublicDnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterInstanceId"))
  {
    m_masterInstanceId = jsonValue.GetString("MasterInstanceId");
    m_masterInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlaveInstanceType"))
  {
    m_slaveInstanceType = jsonValue.GetString("SlaveInstanceType");
    m_slaveInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroups"))
  {
    Aws::Utils::Array<JsonView> instanceGroupsJsonList = jsonValue.GetArray("InstanceGroups");
    for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
    {
      m_instanceGroups.push_back(instanceGroupsJsonList[instanceGroupsIndex].AsObject());
    }
    m_instanceGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NormalizedInstanceHours"))
  {
    m_normalizedInstanceHours = jsonValue.GetInteger("NormalizedInstanceHours");
    m_normalizedInstanceHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2KeyName"))
  {
    m_ec2KeyName = jsonValue.GetString("Ec2KeyName");
    m_ec2KeyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2SubnetId"))
  {
    m_ec2SubnetId = jsonValue.GetString("Ec2SubnetId");
    m_ec2SubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = jsonValue.GetObject("Placement");
    m_placementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeepJobFlowAliveWhenNoSteps"))
  {
    m_keepJobFlowAliveWhenNoSteps = jsonValue.GetBool("KeepJobFlowAliveWhenNoSteps");
    m_keepJobFlowAliveWhenNoStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TerminationProtected"))
  {
    m_terminationProtected = jsonValue.GetBool("TerminationProtected");
    m_terminationProtectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnhealthyNodeReplacement"))
  {
    m_unhealthyNodeReplacement = jsonValue.GetBool("UnhealthyNodeReplacement");
    m_unhealthyNodeReplacementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HadoopVersion"))
  {
    m_hadoopVersion = jsonValue.GetString("HadoopVersion");
    m_hadoopVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue JobFlowInstancesDetail::Jsonize() const
{
  JsonValue payload;

  if(m_masterInstanceTypeHasBeenSet)
  {
   payload.WithString("MasterInstanceType", m_masterInstanceType);

  }

  if(m_masterPublicDnsNameHasBeenSet)
  {
   payload.WithString("MasterPublicDnsName", m_masterPublicDnsName);

  }

  if(m_masterInstanceIdHasBeenSet)
  {
   payload.WithString("MasterInstanceId", m_masterInstanceId);

  }

  if(m_slaveInstanceTypeHasBeenSet)
  {
   payload.WithString("SlaveInstanceType", m_slaveInstanceType);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_instanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_normalizedInstanceHoursHasBeenSet)
  {
   payload.WithInteger("NormalizedInstanceHours", m_normalizedInstanceHours);

  }

  if(m_ec2KeyNameHasBeenSet)
  {
   payload.WithString("Ec2KeyName", m_ec2KeyName);

  }

  if(m_ec2SubnetIdHasBeenSet)
  {
   payload.WithString("Ec2SubnetId", m_ec2SubnetId);

  }

  if(m_placementHasBeenSet)
  {
   payload.WithObject("Placement", m_placement.Jsonize());

  }

  if(m_keepJobFlowAliveWhenNoStepsHasBeenSet)
  {
   payload.WithBool("KeepJobFlowAliveWhenNoSteps", m_keepJobFlowAliveWhenNoSteps);

  }

  if(m_terminationProtectedHasBeenSet)
  {
   payload.WithBool("TerminationProtected", m_terminationProtected);

  }

  if(m_unhealthyNodeReplacementHasBeenSet)
  {
   payload.WithBool("UnhealthyNodeReplacement", m_unhealthyNodeReplacement);

  }

  if(m_hadoopVersionHasBeenSet)
  {
   payload.WithString("HadoopVersion", m_hadoopVersion);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
