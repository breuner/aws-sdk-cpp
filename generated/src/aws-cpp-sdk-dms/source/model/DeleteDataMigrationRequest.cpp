﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteDataMigrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteDataMigrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataMigrationIdentifierHasBeenSet)
  {
   payload.WithString("DataMigrationIdentifier", m_dataMigrationIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDataMigrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteDataMigration"));
  return headers;

}




