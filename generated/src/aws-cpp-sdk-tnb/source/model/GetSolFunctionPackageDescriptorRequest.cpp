﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageDescriptorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSolFunctionPackageDescriptorRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetSolFunctionPackageDescriptorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet && m_accept != DescriptorContentType::NOT_SET)
  {
    headers.emplace("accept", DescriptorContentTypeMapper::GetNameForDescriptorContentType(m_accept));
  }

  return headers;

}




