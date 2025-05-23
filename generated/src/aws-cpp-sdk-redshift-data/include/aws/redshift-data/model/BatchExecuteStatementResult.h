﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RedshiftDataAPIService
{
namespace Model
{
  class BatchExecuteStatementResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementResult() = default;
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    BatchExecuteStatementResult& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BatchExecuteStatementResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    BatchExecuteStatementResult& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of colon (:) separated names of database groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbGroups() const { return m_dbGroups; }
    template<typename DbGroupsT = Aws::Vector<Aws::String>>
    void SetDbGroups(DbGroupsT&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups = std::forward<DbGroupsT>(value); }
    template<typename DbGroupsT = Aws::Vector<Aws::String>>
    BatchExecuteStatementResult& WithDbGroups(DbGroupsT&& value) { SetDbGroups(std::forward<DbGroupsT>(value)); return *this;}
    template<typename DbGroupsT = Aws::String>
    BatchExecuteStatementResult& AddDbGroups(DbGroupsT&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups.emplace_back(std::forward<DbGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The database user name.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    BatchExecuteStatementResult& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. This identifier is returned by <code>BatchExecuteStatment</code>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchExecuteStatementResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    BatchExecuteStatementResult& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier of the query.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    BatchExecuteStatementResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless workgroup name or Amazon Resource Name (ARN). This element is
     * not returned when connecting to a provisioned cluster.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    BatchExecuteStatementResult& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchExecuteStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbGroups;
    bool m_dbGroupsHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
