﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso/model/RoleInfo.h>
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
namespace SSO
{
namespace Model
{
  class ListAccountRolesResult
  {
  public:
    AWS_SSO_API ListAccountRolesResult();
    AWS_SSO_API ListAccountRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSO_API ListAccountRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The page token client that is used to retrieve the list of accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccountRolesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountRolesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountRolesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paginated response with the list of roles and the next token if more
     * results are available.</p>
     */
    inline const Aws::Vector<RoleInfo>& GetRoleList() const{ return m_roleList; }
    inline void SetRoleList(const Aws::Vector<RoleInfo>& value) { m_roleList = value; }
    inline void SetRoleList(Aws::Vector<RoleInfo>&& value) { m_roleList = std::move(value); }
    inline ListAccountRolesResult& WithRoleList(const Aws::Vector<RoleInfo>& value) { SetRoleList(value); return *this;}
    inline ListAccountRolesResult& WithRoleList(Aws::Vector<RoleInfo>&& value) { SetRoleList(std::move(value)); return *this;}
    inline ListAccountRolesResult& AddRoleList(const RoleInfo& value) { m_roleList.push_back(value); return *this; }
    inline ListAccountRolesResult& AddRoleList(RoleInfo&& value) { m_roleList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccountRolesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccountRolesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccountRolesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RoleInfo> m_roleList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
