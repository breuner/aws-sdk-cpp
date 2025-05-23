﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/LogoutRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSO::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String LogoutRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection LogoutRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accessTokenHasBeenSet)
  {
    ss << m_accessToken;
    headers.emplace("x-amz-sso_bearer_token",  ss.str());
    ss.str("");
  }

  return headers;

}




