﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/GroupSummary.h>
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
namespace Synthetics
{
namespace Model
{
  class ListAssociatedGroupsResult
  {
  public:
    AWS_SYNTHETICS_API ListAssociatedGroupsResult();
    AWS_SYNTHETICS_API ListAssociatedGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API ListAssociatedGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain information about the groups that this
     * canary is associated with.</p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupSummary>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupSummary>&& value) { m_groups = std::move(value); }
    inline ListAssociatedGroupsResult& WithGroups(const Aws::Vector<GroupSummary>& value) { SetGroups(value); return *this;}
    inline ListAssociatedGroupsResult& WithGroups(Aws::Vector<GroupSummary>&& value) { SetGroups(std::move(value)); return *this;}
    inline ListAssociatedGroupsResult& AddGroups(const GroupSummary& value) { m_groups.push_back(value); return *this; }
    inline ListAssociatedGroupsResult& AddGroups(GroupSummary&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListAssociatedGroups</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociatedGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociatedGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociatedGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociatedGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupSummary> m_groups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
