﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutLoggingOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutLoggingOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingOptionsHasBeenSet)
  {
   payload.WithObject("loggingOptions", m_loggingOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




