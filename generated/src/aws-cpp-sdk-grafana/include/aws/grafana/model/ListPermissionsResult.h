﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/PermissionEntry.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class ListPermissionsResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListPermissionsResult();
    AWS_MANAGEDGRAFANA_API ListPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListPermissions</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions returned by the operation.</p>
     */
    inline const Aws::Vector<PermissionEntry>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<PermissionEntry>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<PermissionEntry>&& value) { m_permissions = std::move(value); }
    inline ListPermissionsResult& WithPermissions(const Aws::Vector<PermissionEntry>& value) { SetPermissions(value); return *this;}
    inline ListPermissionsResult& WithPermissions(Aws::Vector<PermissionEntry>&& value) { SetPermissions(std::move(value)); return *this;}
    inline ListPermissionsResult& AddPermissions(const PermissionEntry& value) { m_permissions.push_back(value); return *this; }
    inline ListPermissionsResult& AddPermissions(PermissionEntry&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PermissionEntry> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
