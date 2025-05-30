﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitoringConfiguration& MonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3MonitoringConfiguration"))
  {
    m_s3MonitoringConfiguration = jsonValue.GetObject("s3MonitoringConfiguration");
    m_s3MonitoringConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedPersistenceMonitoringConfiguration"))
  {
    m_managedPersistenceMonitoringConfiguration = jsonValue.GetObject("managedPersistenceMonitoringConfiguration");
    m_managedPersistenceMonitoringConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudWatchLoggingConfiguration"))
  {
    m_cloudWatchLoggingConfiguration = jsonValue.GetObject("cloudWatchLoggingConfiguration");
    m_cloudWatchLoggingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prometheusMonitoringConfiguration"))
  {
    m_prometheusMonitoringConfiguration = jsonValue.GetObject("prometheusMonitoringConfiguration");
    m_prometheusMonitoringConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3MonitoringConfigurationHasBeenSet)
  {
   payload.WithObject("s3MonitoringConfiguration", m_s3MonitoringConfiguration.Jsonize());

  }

  if(m_managedPersistenceMonitoringConfigurationHasBeenSet)
  {
   payload.WithObject("managedPersistenceMonitoringConfiguration", m_managedPersistenceMonitoringConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingConfigurationHasBeenSet)
  {
   payload.WithObject("cloudWatchLoggingConfiguration", m_cloudWatchLoggingConfiguration.Jsonize());

  }

  if(m_prometheusMonitoringConfigurationHasBeenSet)
  {
   payload.WithObject("prometheusMonitoringConfiguration", m_prometheusMonitoringConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
