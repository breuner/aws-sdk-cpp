﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputDeviceThumbnailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeInputDeviceThumbnailRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DescribeInputDeviceThumbnailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet && m_accept != AcceptHeader::NOT_SET)
  {
    headers.emplace("accept", AcceptHeaderMapper::GetNameForAcceptHeader(m_accept));
  }

  return headers;

}




