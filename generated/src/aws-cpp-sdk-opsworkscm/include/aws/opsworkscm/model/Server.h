﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/MaintenanceStatus.h>
#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Describes a configuration management server. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Server">AWS
   * API Reference</a></p>
   */
  class Server
  {
  public:
    AWS_OPSWORKSCM_API Server();
    AWS_OPSWORKSCM_API Server(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline Server& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline int GetBackupRetentionCount() const{ return m_backupRetentionCount; }
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }
    inline Server& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline Server& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline Server& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline Server& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Server& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Server& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline const Aws::String& GetCloudFormationStackArn() const{ return m_cloudFormationStackArn; }
    inline bool CloudFormationStackArnHasBeenSet() const { return m_cloudFormationStackArnHasBeenSet; }
    inline void SetCloudFormationStackArn(const Aws::String& value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn = value; }
    inline void SetCloudFormationStackArn(Aws::String&& value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn = std::move(value); }
    inline void SetCloudFormationStackArn(const char* value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn.assign(value); }
    inline Server& WithCloudFormationStackArn(const Aws::String& value) { SetCloudFormationStackArn(value); return *this;}
    inline Server& WithCloudFormationStackArn(Aws::String&& value) { SetCloudFormationStackArn(std::move(value)); return *this;}
    inline Server& WithCloudFormationStackArn(const char* value) { SetCloudFormationStackArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. You cannot access the server by using
     * the <code>Endpoint</code> value if the server has a <code>CustomDomain</code>
     * specified.</p>
     */
    inline const Aws::String& GetCustomDomain() const{ return m_customDomain; }
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }
    inline void SetCustomDomain(const Aws::String& value) { m_customDomainHasBeenSet = true; m_customDomain = value; }
    inline void SetCustomDomain(Aws::String&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::move(value); }
    inline void SetCustomDomain(const char* value) { m_customDomainHasBeenSet = true; m_customDomain.assign(value); }
    inline Server& WithCustomDomain(const Aws::String& value) { SetCustomDomain(value); return *this;}
    inline Server& WithCustomDomain(Aws::String&& value) { SetCustomDomain(std::move(value)); return *this;}
    inline Server& WithCustomDomain(const char* value) { SetCustomDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline bool GetDisableAutomatedBackup() const{ return m_disableAutomatedBackup; }
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }
    inline Server& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code>. You cannot access the
     * server by using the <code>Endpoint</code> value if the server has a
     * <code>CustomDomain</code> specified. </p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Server& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Server& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Server& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline Server& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline Server& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline Server& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const{ return m_engineModel; }
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }
    inline void SetEngineModel(const Aws::String& value) { m_engineModelHasBeenSet = true; m_engineModel = value; }
    inline void SetEngineModel(Aws::String&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::move(value); }
    inline void SetEngineModel(const char* value) { m_engineModelHasBeenSet = true; m_engineModel.assign(value); }
    inline Server& WithEngineModel(const Aws::String& value) { SetEngineModel(value); return *this;}
    inline Server& WithEngineModel(Aws::String&& value) { SetEngineModel(std::move(value)); return *this;}
    inline Server& WithEngineModel(const char* value) { SetEngineModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }
    inline Server& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}
    inline Server& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}
    inline Server& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }
    inline Server& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>2</code>. For a Puppet server, specify either
     * <code>2019</code> or <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline Server& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline Server& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline Server& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline Server& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline Server& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline Server& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Server& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Server& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Server& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key pair associated with the server. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }
    inline Server& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}
    inline Server& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}
    inline Server& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline const MaintenanceStatus& GetMaintenanceStatus() const{ return m_maintenanceStatus; }
    inline bool MaintenanceStatusHasBeenSet() const { return m_maintenanceStatusHasBeenSet; }
    inline void SetMaintenanceStatus(const MaintenanceStatus& value) { m_maintenanceStatusHasBeenSet = true; m_maintenanceStatus = value; }
    inline void SetMaintenanceStatus(MaintenanceStatus&& value) { m_maintenanceStatusHasBeenSet = true; m_maintenanceStatus = std::move(value); }
    inline Server& WithMaintenanceStatus(const MaintenanceStatus& value) { SetMaintenanceStatus(value); return *this;}
    inline Server& WithMaintenanceStatus(MaintenanceStatus&& value) { SetMaintenanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline Server& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline Server& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline Server& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline Server& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline Server& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline Server& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline Server& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline Server& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline Server& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline Server& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline Server& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline Server& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline Server& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline Server& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline const ServerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Server& WithStatus(const ServerStatus& value) { SetStatus(value); return *this;}
    inline Server& WithStatus(ServerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline Server& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline Server& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline Server& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline Server& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline Server& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline Server& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline Server& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline Server& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the server. </p>
     */
    inline const Aws::String& GetServerArn() const{ return m_serverArn; }
    inline bool ServerArnHasBeenSet() const { return m_serverArnHasBeenSet; }
    inline void SetServerArn(const Aws::String& value) { m_serverArnHasBeenSet = true; m_serverArn = value; }
    inline void SetServerArn(Aws::String&& value) { m_serverArnHasBeenSet = true; m_serverArn = std::move(value); }
    inline void SetServerArn(const char* value) { m_serverArnHasBeenSet = true; m_serverArn.assign(value); }
    inline Server& WithServerArn(const Aws::String& value) { SetServerArn(value); return *this;}
    inline Server& WithServerArn(Aws::String&& value) { SetServerArn(std::move(value)); return *this;}
    inline Server& WithServerArn(const char* value) { SetServerArn(value); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    int m_backupRetentionCount;
    bool m_backupRetentionCountHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_cloudFormationStackArn;
    bool m_cloudFormationStackArnHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    bool m_disableAutomatedBackup;
    bool m_disableAutomatedBackupHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    MaintenanceStatus m_maintenanceStatus;
    bool m_maintenanceStatusHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    ServerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_serverArn;
    bool m_serverArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
