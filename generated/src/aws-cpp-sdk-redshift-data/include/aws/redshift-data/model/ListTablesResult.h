﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-data/model/TableMember.h>
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
  class ListTablesResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ListTablesResult();
    AWS_REDSHIFTDATAAPISERVICE_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tables that match the request pattern. </p>
     */
    inline const Aws::Vector<TableMember>& GetTables() const{ return m_tables; }
    inline void SetTables(const Aws::Vector<TableMember>& value) { m_tables = value; }
    inline void SetTables(Aws::Vector<TableMember>&& value) { m_tables = std::move(value); }
    inline ListTablesResult& WithTables(const Aws::Vector<TableMember>& value) { SetTables(value); return *this;}
    inline ListTablesResult& WithTables(Aws::Vector<TableMember>&& value) { SetTables(std::move(value)); return *this;}
    inline ListTablesResult& AddTables(const TableMember& value) { m_tables.push_back(value); return *this; }
    inline ListTablesResult& AddTables(TableMember&& value) { m_tables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TableMember> m_tables;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
