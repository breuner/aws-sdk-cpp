﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/GetDevicePoolCompatibilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDevicePoolCompatibilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_devicePoolArnHasBeenSet)
  {
   payload.WithString("devicePoolArn", m_devicePoolArn);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_testTypeHasBeenSet)
  {
   payload.WithString("testType", TestTypeMapper::GetNameForTestType(m_testType));
  }

  if(m_testHasBeenSet)
  {
   payload.WithObject("test", m_test.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDevicePoolCompatibilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.GetDevicePoolCompatibility"));
  return headers;

}




