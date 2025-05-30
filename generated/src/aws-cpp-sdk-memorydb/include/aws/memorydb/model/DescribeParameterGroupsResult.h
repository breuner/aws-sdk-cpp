﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ParameterGroup.h>
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
namespace MemoryDB
{
namespace Model
{
  class DescribeParameterGroupsResult
  {
  public:
    AWS_MEMORYDB_API DescribeParameterGroupsResult() = default;
    AWS_MEMORYDB_API DescribeParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeParameterGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameter groups. Each element in the list contains detailed
     * information about one parameter group.</p>
     */
    inline const Aws::Vector<ParameterGroup>& GetParameterGroups() const { return m_parameterGroups; }
    template<typename ParameterGroupsT = Aws::Vector<ParameterGroup>>
    void SetParameterGroups(ParameterGroupsT&& value) { m_parameterGroupsHasBeenSet = true; m_parameterGroups = std::forward<ParameterGroupsT>(value); }
    template<typename ParameterGroupsT = Aws::Vector<ParameterGroup>>
    DescribeParameterGroupsResult& WithParameterGroups(ParameterGroupsT&& value) { SetParameterGroups(std::forward<ParameterGroupsT>(value)); return *this;}
    template<typename ParameterGroupsT = ParameterGroup>
    DescribeParameterGroupsResult& AddParameterGroups(ParameterGroupsT&& value) { m_parameterGroupsHasBeenSet = true; m_parameterGroups.emplace_back(std::forward<ParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeParameterGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ParameterGroup> m_parameterGroups;
    bool m_parameterGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
