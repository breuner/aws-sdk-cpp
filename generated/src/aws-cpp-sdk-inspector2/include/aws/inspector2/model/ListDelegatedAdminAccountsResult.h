﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/DelegatedAdminAccount.h>
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
namespace Inspector2
{
namespace Model
{
  class ListDelegatedAdminAccountsResult
  {
  public:
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult();
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the Amazon Inspector delegated administrator of your
     * organization.</p>
     */
    inline const Aws::Vector<DelegatedAdminAccount>& GetDelegatedAdminAccounts() const{ return m_delegatedAdminAccounts; }
    inline void SetDelegatedAdminAccounts(const Aws::Vector<DelegatedAdminAccount>& value) { m_delegatedAdminAccounts = value; }
    inline void SetDelegatedAdminAccounts(Aws::Vector<DelegatedAdminAccount>&& value) { m_delegatedAdminAccounts = std::move(value); }
    inline ListDelegatedAdminAccountsResult& WithDelegatedAdminAccounts(const Aws::Vector<DelegatedAdminAccount>& value) { SetDelegatedAdminAccounts(value); return *this;}
    inline ListDelegatedAdminAccountsResult& WithDelegatedAdminAccounts(Aws::Vector<DelegatedAdminAccount>&& value) { SetDelegatedAdminAccounts(std::move(value)); return *this;}
    inline ListDelegatedAdminAccountsResult& AddDelegatedAdminAccounts(const DelegatedAdminAccount& value) { m_delegatedAdminAccounts.push_back(value); return *this; }
    inline ListDelegatedAdminAccountsResult& AddDelegatedAdminAccounts(DelegatedAdminAccount&& value) { m_delegatedAdminAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDelegatedAdminAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDelegatedAdminAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDelegatedAdminAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDelegatedAdminAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDelegatedAdminAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDelegatedAdminAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DelegatedAdminAccount> m_delegatedAdminAccounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
