﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/model/StartSessionResult.h>
#include <aws/qldb-session/model/StartTransactionResult.h>
#include <aws/qldb-session/model/EndSessionResult.h>
#include <aws/qldb-session/model/CommitTransactionResult.h>
#include <aws/qldb-session/model/AbortTransactionResult.h>
#include <aws/qldb-session/model/ExecuteStatementResult.h>
#include <aws/qldb-session/model/FetchPageResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QLDBSession
{
namespace Model
{
  class SendCommandResult
  {
  public:
    AWS_QLDBSESSION_API SendCommandResult();
    AWS_QLDBSESSION_API SendCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDBSESSION_API SendCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the details of the started session that includes a session token.
     * This <code>SessionToken</code> is required for every subsequent command that is
     * issued during the current session.</p>
     */
    inline const StartSessionResult& GetStartSession() const{ return m_startSession; }
    inline void SetStartSession(const StartSessionResult& value) { m_startSession = value; }
    inline void SetStartSession(StartSessionResult&& value) { m_startSession = std::move(value); }
    inline SendCommandResult& WithStartSession(const StartSessionResult& value) { SetStartSession(value); return *this;}
    inline SendCommandResult& WithStartSession(StartSessionResult&& value) { SetStartSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the started transaction.</p>
     */
    inline const StartTransactionResult& GetStartTransaction() const{ return m_startTransaction; }
    inline void SetStartTransaction(const StartTransactionResult& value) { m_startTransaction = value; }
    inline void SetStartTransaction(StartTransactionResult&& value) { m_startTransaction = std::move(value); }
    inline SendCommandResult& WithStartTransaction(const StartTransactionResult& value) { SetStartTransaction(value); return *this;}
    inline SendCommandResult& WithStartTransaction(StartTransactionResult&& value) { SetStartTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the ended session.</p>
     */
    inline const EndSessionResult& GetEndSession() const{ return m_endSession; }
    inline void SetEndSession(const EndSessionResult& value) { m_endSession = value; }
    inline void SetEndSession(EndSessionResult&& value) { m_endSession = std::move(value); }
    inline SendCommandResult& WithEndSession(const EndSessionResult& value) { SetEndSession(value); return *this;}
    inline SendCommandResult& WithEndSession(EndSessionResult&& value) { SetEndSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the committed transaction.</p>
     */
    inline const CommitTransactionResult& GetCommitTransaction() const{ return m_commitTransaction; }
    inline void SetCommitTransaction(const CommitTransactionResult& value) { m_commitTransaction = value; }
    inline void SetCommitTransaction(CommitTransactionResult&& value) { m_commitTransaction = std::move(value); }
    inline SendCommandResult& WithCommitTransaction(const CommitTransactionResult& value) { SetCommitTransaction(value); return *this;}
    inline SendCommandResult& WithCommitTransaction(CommitTransactionResult&& value) { SetCommitTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the aborted transaction.</p>
     */
    inline const AbortTransactionResult& GetAbortTransaction() const{ return m_abortTransaction; }
    inline void SetAbortTransaction(const AbortTransactionResult& value) { m_abortTransaction = value; }
    inline void SetAbortTransaction(AbortTransactionResult&& value) { m_abortTransaction = std::move(value); }
    inline SendCommandResult& WithAbortTransaction(const AbortTransactionResult& value) { SetAbortTransaction(value); return *this;}
    inline SendCommandResult& WithAbortTransaction(AbortTransactionResult&& value) { SetAbortTransaction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the executed statement.</p>
     */
    inline const ExecuteStatementResult& GetExecuteStatement() const{ return m_executeStatement; }
    inline void SetExecuteStatement(const ExecuteStatementResult& value) { m_executeStatement = value; }
    inline void SetExecuteStatement(ExecuteStatementResult&& value) { m_executeStatement = std::move(value); }
    inline SendCommandResult& WithExecuteStatement(const ExecuteStatementResult& value) { SetExecuteStatement(value); return *this;}
    inline SendCommandResult& WithExecuteStatement(ExecuteStatementResult&& value) { SetExecuteStatement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the fetched page.</p>
     */
    inline const FetchPageResult& GetFetchPage() const{ return m_fetchPage; }
    inline void SetFetchPage(const FetchPageResult& value) { m_fetchPage = value; }
    inline void SetFetchPage(FetchPageResult&& value) { m_fetchPage = std::move(value); }
    inline SendCommandResult& WithFetchPage(const FetchPageResult& value) { SetFetchPage(value); return *this;}
    inline SendCommandResult& WithFetchPage(FetchPageResult&& value) { SetFetchPage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StartSessionResult m_startSession;

    StartTransactionResult m_startTransaction;

    EndSessionResult m_endSession;

    CommitTransactionResult m_commitTransaction;

    AbortTransactionResult m_abortTransaction;

    ExecuteStatementResult m_executeStatement;

    FetchPageResult m_fetchPage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
