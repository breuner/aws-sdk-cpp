﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DmsSslModeValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an Oracle data provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/OracleDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class OracleDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings();
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Oracle server.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline OracleDataProviderSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline OracleDataProviderSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value for the Oracle data provider.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline OracleDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name on the Oracle data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline OracleDataProviderSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline OracleDataProviderSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the Oracle data provider. The default value
     * is <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }
    inline OracleDataProviderSettings& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}
    inline OracleDataProviderSettings& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline OracleDataProviderSettings& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline OracleDataProviderSettings& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of your Oracle Automatic Storage Management (ASM) server. You can
     * set this value from the <code>asm_server</code> value. You set
     * <code>asm_server</code> as part of the extra connection attribute string to
     * access an Oracle server with Binary Reader that uses ASM. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmServer() const{ return m_asmServer; }
    inline bool AsmServerHasBeenSet() const { return m_asmServerHasBeenSet; }
    inline void SetAsmServer(const Aws::String& value) { m_asmServerHasBeenSet = true; m_asmServer = value; }
    inline void SetAsmServer(Aws::String&& value) { m_asmServerHasBeenSet = true; m_asmServer = std::move(value); }
    inline void SetAsmServer(const char* value) { m_asmServerHasBeenSet = true; m_asmServer.assign(value); }
    inline OracleDataProviderSettings& WithAsmServer(const Aws::String& value) { SetAsmServer(value); return *this;}
    inline OracleDataProviderSettings& WithAsmServer(Aws::String&& value) { SetAsmServer(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithAsmServer(const char* value) { SetAsmServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secret in Secrets Manager that contains the Oracle ASM
     * connection details.</p> <p>Required only if your data provider uses the Oracle
     * ASM server.</p>
     */
    inline const Aws::String& GetSecretsManagerOracleAsmSecretId() const{ return m_secretsManagerOracleAsmSecretId; }
    inline bool SecretsManagerOracleAsmSecretIdHasBeenSet() const { return m_secretsManagerOracleAsmSecretIdHasBeenSet; }
    inline void SetSecretsManagerOracleAsmSecretId(const Aws::String& value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId = value; }
    inline void SetSecretsManagerOracleAsmSecretId(Aws::String&& value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId = std::move(value); }
    inline void SetSecretsManagerOracleAsmSecretId(const char* value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId.assign(value); }
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmSecretId(const Aws::String& value) { SetSecretsManagerOracleAsmSecretId(value); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmSecretId(Aws::String&& value) { SetSecretsManagerOracleAsmSecretId(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmSecretId(const char* value) { SetSecretsManagerOracleAsmSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides access to the secret in Secrets Manager
     * that contains the Oracle ASM connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerOracleAsmAccessRoleArn() const{ return m_secretsManagerOracleAsmAccessRoleArn; }
    inline bool SecretsManagerOracleAsmAccessRoleArnHasBeenSet() const { return m_secretsManagerOracleAsmAccessRoleArnHasBeenSet; }
    inline void SetSecretsManagerOracleAsmAccessRoleArn(const Aws::String& value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn = value; }
    inline void SetSecretsManagerOracleAsmAccessRoleArn(Aws::String&& value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn = std::move(value); }
    inline void SetSecretsManagerOracleAsmAccessRoleArn(const char* value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn.assign(value); }
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmAccessRoleArn(const Aws::String& value) { SetSecretsManagerOracleAsmAccessRoleArn(value); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmAccessRoleArn(Aws::String&& value) { SetSecretsManagerOracleAsmAccessRoleArn(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerOracleAsmAccessRoleArn(const char* value) { SetSecretsManagerOracleAsmAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secret in Secrets Manager that contains the transparent
     * data encryption (TDE) password. DMS requires this password to access Oracle redo
     * logs encrypted by TDE using Binary Reader.</p>
     */
    inline const Aws::String& GetSecretsManagerSecurityDbEncryptionSecretId() const{ return m_secretsManagerSecurityDbEncryptionSecretId; }
    inline bool SecretsManagerSecurityDbEncryptionSecretIdHasBeenSet() const { return m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet; }
    inline void SetSecretsManagerSecurityDbEncryptionSecretId(const Aws::String& value) { m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = true; m_secretsManagerSecurityDbEncryptionSecretId = value; }
    inline void SetSecretsManagerSecurityDbEncryptionSecretId(Aws::String&& value) { m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = true; m_secretsManagerSecurityDbEncryptionSecretId = std::move(value); }
    inline void SetSecretsManagerSecurityDbEncryptionSecretId(const char* value) { m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = true; m_secretsManagerSecurityDbEncryptionSecretId.assign(value); }
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionSecretId(const Aws::String& value) { SetSecretsManagerSecurityDbEncryptionSecretId(value); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionSecretId(Aws::String&& value) { SetSecretsManagerSecurityDbEncryptionSecretId(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionSecretId(const char* value) { SetSecretsManagerSecurityDbEncryptionSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides access to the secret in Secrets Manager
     * that contains the TDE password.</p>
     */
    inline const Aws::String& GetSecretsManagerSecurityDbEncryptionAccessRoleArn() const{ return m_secretsManagerSecurityDbEncryptionAccessRoleArn; }
    inline bool SecretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet() const { return m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet; }
    inline void SetSecretsManagerSecurityDbEncryptionAccessRoleArn(const Aws::String& value) { m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = true; m_secretsManagerSecurityDbEncryptionAccessRoleArn = value; }
    inline void SetSecretsManagerSecurityDbEncryptionAccessRoleArn(Aws::String&& value) { m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = true; m_secretsManagerSecurityDbEncryptionAccessRoleArn = std::move(value); }
    inline void SetSecretsManagerSecurityDbEncryptionAccessRoleArn(const char* value) { m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = true; m_secretsManagerSecurityDbEncryptionAccessRoleArn.assign(value); }
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionAccessRoleArn(const Aws::String& value) { SetSecretsManagerSecurityDbEncryptionAccessRoleArn(value); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionAccessRoleArn(Aws::String&& value) { SetSecretsManagerSecurityDbEncryptionAccessRoleArn(std::move(value)); return *this;}
    inline OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionAccessRoleArn(const char* value) { SetSecretsManagerSecurityDbEncryptionAccessRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    DmsSslModeValue m_sslMode;
    bool m_sslModeHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_asmServer;
    bool m_asmServerHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmSecretId;
    bool m_secretsManagerOracleAsmSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmAccessRoleArn;
    bool m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecurityDbEncryptionSecretId;
    bool m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerSecurityDbEncryptionAccessRoleArn;
    bool m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
