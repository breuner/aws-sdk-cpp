﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AuthenticationType.h>
#include <aws/datazone/model/BasicAuthenticationCredentials.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/OAuth2Properties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The authentication configuration of a connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AuthenticationConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfigurationInput
  {
  public:
    AWS_DATAZONE_API AuthenticationConfigurationInput();
    AWS_DATAZONE_API AuthenticationConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AuthenticationConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type of a connection.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline AuthenticationConfigurationInput& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline AuthenticationConfigurationInput& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic authentication credentials of a connection.</p>
     */
    inline const BasicAuthenticationCredentials& GetBasicAuthenticationCredentials() const{ return m_basicAuthenticationCredentials; }
    inline bool BasicAuthenticationCredentialsHasBeenSet() const { return m_basicAuthenticationCredentialsHasBeenSet; }
    inline void SetBasicAuthenticationCredentials(const BasicAuthenticationCredentials& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = value; }
    inline void SetBasicAuthenticationCredentials(BasicAuthenticationCredentials&& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = std::move(value); }
    inline AuthenticationConfigurationInput& WithBasicAuthenticationCredentials(const BasicAuthenticationCredentials& value) { SetBasicAuthenticationCredentials(value); return *this;}
    inline AuthenticationConfigurationInput& WithBasicAuthenticationCredentials(BasicAuthenticationCredentials&& value) { SetBasicAuthenticationCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom authentication credentials of a connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAuthenticationCredentials() const{ return m_customAuthenticationCredentials; }
    inline bool CustomAuthenticationCredentialsHasBeenSet() const { return m_customAuthenticationCredentialsHasBeenSet; }
    inline void SetCustomAuthenticationCredentials(const Aws::Map<Aws::String, Aws::String>& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials = value; }
    inline void SetCustomAuthenticationCredentials(Aws::Map<Aws::String, Aws::String>&& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials = std::move(value); }
    inline AuthenticationConfigurationInput& WithCustomAuthenticationCredentials(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomAuthenticationCredentials(value); return *this;}
    inline AuthenticationConfigurationInput& WithCustomAuthenticationCredentials(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomAuthenticationCredentials(std::move(value)); return *this;}
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(const Aws::String& key, const Aws::String& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(key, value); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(Aws::String&& key, const Aws::String& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(std::move(key), value); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(const Aws::String& key, Aws::String&& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(key, std::move(value)); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(Aws::String&& key, Aws::String&& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(const char* key, Aws::String&& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(key, std::move(value)); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(Aws::String&& key, const char* value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(std::move(key), value); return *this; }
    inline AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(const char* key, const char* value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The KMS key ARN of a connection.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline AuthenticationConfigurationInput& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline AuthenticationConfigurationInput& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline AuthenticationConfigurationInput& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The oAuth2 properties of a connection.</p>
     */
    inline const OAuth2Properties& GetOAuth2Properties() const{ return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    inline void SetOAuth2Properties(const OAuth2Properties& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = value; }
    inline void SetOAuth2Properties(OAuth2Properties&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::move(value); }
    inline AuthenticationConfigurationInput& WithOAuth2Properties(const OAuth2Properties& value) { SetOAuth2Properties(value); return *this;}
    inline AuthenticationConfigurationInput& WithOAuth2Properties(OAuth2Properties&& value) { SetOAuth2Properties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret ARN of a connection.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline AuthenticationConfigurationInput& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline AuthenticationConfigurationInput& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline AuthenticationConfigurationInput& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}
  private:

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    BasicAuthenticationCredentials m_basicAuthenticationCredentials;
    bool m_basicAuthenticationCredentialsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customAuthenticationCredentials;
    bool m_customAuthenticationCredentialsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    OAuth2Properties m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
