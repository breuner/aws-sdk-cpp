﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AssumedRole.h>
#include <aws/macie2/model/AwsAccount.h>
#include <aws/macie2/model/AwsService.h>
#include <aws/macie2/model/FederatedUser.h>
#include <aws/macie2/model/IamUser.h>
#include <aws/macie2/model/UserIdentityRoot.h>
#include <aws/macie2/model/UserIdentityType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the type and other characteristics of an entity
   * that performed an action on an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UserIdentity">AWS
   * API Reference</a></p>
   */
  class UserIdentity
  {
  public:
    AWS_MACIE2_API UserIdentity();
    AWS_MACIE2_API UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the action was performed with temporary security credentials that were
     * obtained using the AssumeRole operation of the Security Token Service (STS) API,
     * the identifiers, session context, and other details about the identity.</p>
     */
    inline const AssumedRole& GetAssumedRole() const{ return m_assumedRole; }
    inline bool AssumedRoleHasBeenSet() const { return m_assumedRoleHasBeenSet; }
    inline void SetAssumedRole(const AssumedRole& value) { m_assumedRoleHasBeenSet = true; m_assumedRole = value; }
    inline void SetAssumedRole(AssumedRole&& value) { m_assumedRoleHasBeenSet = true; m_assumedRole = std::move(value); }
    inline UserIdentity& WithAssumedRole(const AssumedRole& value) { SetAssumedRole(value); return *this;}
    inline UserIdentity& WithAssumedRole(AssumedRole&& value) { SetAssumedRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for another Amazon Web
     * Services account, the details of that account.</p>
     */
    inline const AwsAccount& GetAwsAccount() const{ return m_awsAccount; }
    inline bool AwsAccountHasBeenSet() const { return m_awsAccountHasBeenSet; }
    inline void SetAwsAccount(const AwsAccount& value) { m_awsAccountHasBeenSet = true; m_awsAccount = value; }
    inline void SetAwsAccount(AwsAccount&& value) { m_awsAccountHasBeenSet = true; m_awsAccount = std::move(value); }
    inline UserIdentity& WithAwsAccount(const AwsAccount& value) { SetAwsAccount(value); return *this;}
    inline UserIdentity& WithAwsAccount(AwsAccount&& value) { SetAwsAccount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed by an Amazon Web Services account that belongs to
     * an Amazon Web Services service, the name of the service.</p>
     */
    inline const AwsService& GetAwsService() const{ return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(const AwsService& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline void SetAwsService(AwsService&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }
    inline UserIdentity& WithAwsService(const AwsService& value) { SetAwsService(value); return *this;}
    inline UserIdentity& WithAwsService(AwsService&& value) { SetAwsService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed with temporary security credentials that were
     * obtained using the GetFederationToken operation of the Security Token Service
     * (STS) API, the identifiers, session context, and other details about the
     * identity.</p>
     */
    inline const FederatedUser& GetFederatedUser() const{ return m_federatedUser; }
    inline bool FederatedUserHasBeenSet() const { return m_federatedUserHasBeenSet; }
    inline void SetFederatedUser(const FederatedUser& value) { m_federatedUserHasBeenSet = true; m_federatedUser = value; }
    inline void SetFederatedUser(FederatedUser&& value) { m_federatedUserHasBeenSet = true; m_federatedUser = std::move(value); }
    inline UserIdentity& WithFederatedUser(const FederatedUser& value) { SetFederatedUser(value); return *this;}
    inline UserIdentity& WithFederatedUser(FederatedUser&& value) { SetFederatedUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for an Identity and Access
     * Management (IAM) user, the name and other details about the user.</p>
     */
    inline const IamUser& GetIamUser() const{ return m_iamUser; }
    inline bool IamUserHasBeenSet() const { return m_iamUserHasBeenSet; }
    inline void SetIamUser(const IamUser& value) { m_iamUserHasBeenSet = true; m_iamUser = value; }
    inline void SetIamUser(IamUser&& value) { m_iamUserHasBeenSet = true; m_iamUser = std::move(value); }
    inline UserIdentity& WithIamUser(const IamUser& value) { SetIamUser(value); return *this;}
    inline UserIdentity& WithIamUser(IamUser&& value) { SetIamUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action was performed using the credentials for your Amazon Web
     * Services account, the details of your account.</p>
     */
    inline const UserIdentityRoot& GetRoot() const{ return m_root; }
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }
    inline void SetRoot(const UserIdentityRoot& value) { m_rootHasBeenSet = true; m_root = value; }
    inline void SetRoot(UserIdentityRoot&& value) { m_rootHasBeenSet = true; m_root = std::move(value); }
    inline UserIdentity& WithRoot(const UserIdentityRoot& value) { SetRoot(value); return *this;}
    inline UserIdentity& WithRoot(UserIdentityRoot&& value) { SetRoot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity that performed the action.</p>
     */
    inline const UserIdentityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserIdentityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserIdentityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UserIdentity& WithType(const UserIdentityType& value) { SetType(value); return *this;}
    inline UserIdentity& WithType(UserIdentityType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    AssumedRole m_assumedRole;
    bool m_assumedRoleHasBeenSet = false;

    AwsAccount m_awsAccount;
    bool m_awsAccountHasBeenSet = false;

    AwsService m_awsService;
    bool m_awsServiceHasBeenSet = false;

    FederatedUser m_federatedUser;
    bool m_federatedUserHasBeenSet = false;

    IamUser m_iamUser;
    bool m_iamUserHasBeenSet = false;

    UserIdentityRoot m_root;
    bool m_rootHasBeenSet = false;

    UserIdentityType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
