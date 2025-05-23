﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OidcConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

OidcConfig::OidcConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OidcConfig& OidcConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientSecret"))
  {
    m_clientSecret = jsonValue.GetString("ClientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("AuthorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("TokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserInfoEndpoint"))
  {
    m_userInfoEndpoint = jsonValue.GetString("UserInfoEndpoint");
    m_userInfoEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoutEndpoint"))
  {
    m_logoutEndpoint = jsonValue.GetString("LogoutEndpoint");
    m_logoutEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JwksUri"))
  {
    m_jwksUri = jsonValue.GetString("JwksUri");
    m_jwksUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationRequestExtraParams"))
  {
    Aws::Map<Aws::String, JsonView> authenticationRequestExtraParamsJsonMap = jsonValue.GetObject("AuthenticationRequestExtraParams").GetAllObjects();
    for(auto& authenticationRequestExtraParamsItem : authenticationRequestExtraParamsJsonMap)
    {
      m_authenticationRequestExtraParams[authenticationRequestExtraParamsItem.first] = authenticationRequestExtraParamsItem.second.AsString();
    }
    m_authenticationRequestExtraParamsHasBeenSet = true;
  }
  return *this;
}

JsonValue OidcConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_authorizationEndpointHasBeenSet)
  {
   payload.WithString("AuthorizationEndpoint", m_authorizationEndpoint);

  }

  if(m_tokenEndpointHasBeenSet)
  {
   payload.WithString("TokenEndpoint", m_tokenEndpoint);

  }

  if(m_userInfoEndpointHasBeenSet)
  {
   payload.WithString("UserInfoEndpoint", m_userInfoEndpoint);

  }

  if(m_logoutEndpointHasBeenSet)
  {
   payload.WithString("LogoutEndpoint", m_logoutEndpoint);

  }

  if(m_jwksUriHasBeenSet)
  {
   payload.WithString("JwksUri", m_jwksUri);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_authenticationRequestExtraParamsHasBeenSet)
  {
   JsonValue authenticationRequestExtraParamsJsonMap;
   for(auto& authenticationRequestExtraParamsItem : m_authenticationRequestExtraParams)
   {
     authenticationRequestExtraParamsJsonMap.WithString(authenticationRequestExtraParamsItem.first, authenticationRequestExtraParamsItem.second);
   }
   payload.WithObject("AuthenticationRequestExtraParams", std::move(authenticationRequestExtraParamsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
