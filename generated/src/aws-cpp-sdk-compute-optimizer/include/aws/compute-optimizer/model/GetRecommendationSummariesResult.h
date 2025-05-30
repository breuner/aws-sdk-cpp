﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationSummary.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetRecommendationSummariesResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of recommendation summaries.</p>
     * <p>This value is null when there are no more pages of recommendation summaries
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRecommendationSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that summarize a recommendation.</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetRecommendationSummaries() const { return m_recommendationSummaries; }
    template<typename RecommendationSummariesT = Aws::Vector<RecommendationSummary>>
    void SetRecommendationSummaries(RecommendationSummariesT&& value) { m_recommendationSummariesHasBeenSet = true; m_recommendationSummaries = std::forward<RecommendationSummariesT>(value); }
    template<typename RecommendationSummariesT = Aws::Vector<RecommendationSummary>>
    GetRecommendationSummariesResult& WithRecommendationSummaries(RecommendationSummariesT&& value) { SetRecommendationSummaries(std::forward<RecommendationSummariesT>(value)); return *this;}
    template<typename RecommendationSummariesT = RecommendationSummary>
    GetRecommendationSummariesResult& AddRecommendationSummaries(RecommendationSummariesT&& value) { m_recommendationSummariesHasBeenSet = true; m_recommendationSummaries.emplace_back(std::forward<RecommendationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecommendationSummary> m_recommendationSummaries;
    bool m_recommendationSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
