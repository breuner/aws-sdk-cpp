﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateConnectionOAuthClientRequestParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

CreateConnectionOAuthClientRequestParameters::CreateConnectionOAuthClientRequestParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateConnectionOAuthClientRequestParameters& CreateConnectionOAuthClientRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientID"))
  {
    m_clientID = jsonValue.GetString("ClientID");
    m_clientIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientSecret"))
  {
    m_clientSecret = jsonValue.GetString("ClientSecret");
    m_clientSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateConnectionOAuthClientRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_clientIDHasBeenSet)
  {
   payload.WithString("ClientID", m_clientID);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
