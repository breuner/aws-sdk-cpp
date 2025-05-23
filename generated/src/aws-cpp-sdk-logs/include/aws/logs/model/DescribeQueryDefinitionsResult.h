﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryDefinition.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeQueryDefinitionsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline const Aws::Vector<QueryDefinition>& GetQueryDefinitions() const { return m_queryDefinitions; }
    template<typename QueryDefinitionsT = Aws::Vector<QueryDefinition>>
    void SetQueryDefinitions(QueryDefinitionsT&& value) { m_queryDefinitionsHasBeenSet = true; m_queryDefinitions = std::forward<QueryDefinitionsT>(value); }
    template<typename QueryDefinitionsT = Aws::Vector<QueryDefinition>>
    DescribeQueryDefinitionsResult& WithQueryDefinitions(QueryDefinitionsT&& value) { SetQueryDefinitions(std::forward<QueryDefinitionsT>(value)); return *this;}
    template<typename QueryDefinitionsT = QueryDefinition>
    DescribeQueryDefinitionsResult& AddQueryDefinitions(QueryDefinitionsT&& value) { m_queryDefinitionsHasBeenSet = true; m_queryDefinitions.emplace_back(std::forward<QueryDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeQueryDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQueryDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QueryDefinition> m_queryDefinitions;
    bool m_queryDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
