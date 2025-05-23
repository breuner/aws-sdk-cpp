﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/Database.h>
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
namespace Athena
{
namespace Model
{
  class ListDatabasesResult
  {
  public:
    AWS_ATHENA_API ListDatabasesResult() = default;
    AWS_ATHENA_API ListDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ListDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of databases from a data catalog.</p>
     */
    inline const Aws::Vector<Database>& GetDatabaseList() const { return m_databaseList; }
    template<typename DatabaseListT = Aws::Vector<Database>>
    void SetDatabaseList(DatabaseListT&& value) { m_databaseListHasBeenSet = true; m_databaseList = std::forward<DatabaseListT>(value); }
    template<typename DatabaseListT = Aws::Vector<Database>>
    ListDatabasesResult& WithDatabaseList(DatabaseListT&& value) { SetDatabaseList(std::forward<DatabaseListT>(value)); return *this;}
    template<typename DatabaseListT = Database>
    ListDatabasesResult& AddDatabaseList(DatabaseListT&& value) { m_databaseListHasBeenSet = true; m_databaseList.emplace_back(std::forward<DatabaseListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the NextToken from the response object of the previous page call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatabasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatabasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Database> m_databaseList;
    bool m_databaseListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
