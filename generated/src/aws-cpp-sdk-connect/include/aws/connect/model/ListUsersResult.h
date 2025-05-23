﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListUsersResult
  {
  public:
    AWS_CONNECT_API ListUsersResult() = default;
    AWS_CONNECT_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the users.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUserSummaryList() const { return m_userSummaryList; }
    template<typename UserSummaryListT = Aws::Vector<UserSummary>>
    void SetUserSummaryList(UserSummaryListT&& value) { m_userSummaryListHasBeenSet = true; m_userSummaryList = std::forward<UserSummaryListT>(value); }
    template<typename UserSummaryListT = Aws::Vector<UserSummary>>
    ListUsersResult& WithUserSummaryList(UserSummaryListT&& value) { SetUserSummaryList(std::forward<UserSummaryListT>(value)); return *this;}
    template<typename UserSummaryListT = UserSummary>
    ListUsersResult& AddUserSummaryList(UserSummaryListT&& value) { m_userSummaryListHasBeenSet = true; m_userSummaryList.emplace_back(std::forward<UserSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUsersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserSummary> m_userSummaryList;
    bool m_userSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
