﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AppsListDataSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListAppsListsResult
  {
  public:
    AWS_FMS_API ListAppsListsResult();
    AWS_FMS_API ListAppsListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListAppsListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>AppsListDataSummary</code> objects.</p>
     */
    inline const Aws::Vector<AppsListDataSummary>& GetAppsLists() const{ return m_appsLists; }
    inline void SetAppsLists(const Aws::Vector<AppsListDataSummary>& value) { m_appsLists = value; }
    inline void SetAppsLists(Aws::Vector<AppsListDataSummary>&& value) { m_appsLists = std::move(value); }
    inline ListAppsListsResult& WithAppsLists(const Aws::Vector<AppsListDataSummary>& value) { SetAppsLists(value); return *this;}
    inline ListAppsListsResult& WithAppsLists(Aws::Vector<AppsListDataSummary>&& value) { SetAppsLists(std::move(value)); return *this;}
    inline ListAppsListsResult& AddAppsLists(const AppsListDataSummary& value) { m_appsLists.push_back(value); return *this; }
    inline ListAppsListsResult& AddAppsLists(AppsListDataSummary&& value) { m_appsLists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAppsListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppsListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppsListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAppsListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAppsListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAppsListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AppsListDataSummary> m_appsLists;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
