﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AdminAccount.h>
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
namespace Macie2
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_MACIE2_API ListOrganizationAdminAccountsResult() = default;
    AWS_MACIE2_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const { return m_adminAccounts; }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    void SetAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts = std::forward<AdminAccountsT>(value); }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    ListOrganizationAdminAccountsResult& WithAdminAccounts(AdminAccountsT&& value) { SetAdminAccounts(std::forward<AdminAccountsT>(value)); return *this;}
    template<typename AdminAccountsT = AdminAccount>
    ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts.emplace_back(std::forward<AdminAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationAdminAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationAdminAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdminAccount> m_adminAccounts;
    bool m_adminAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
