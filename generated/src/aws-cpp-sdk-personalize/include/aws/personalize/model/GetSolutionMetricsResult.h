﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{
  class GetSolutionMetricsResult
  {
  public:
    AWS_PERSONALIZE_API GetSolutionMetricsResult();
    AWS_PERSONALIZE_API GetSolutionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API GetSolutionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The same solution version ARN as specified in the request.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline GetSolutionMetricsResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline GetSolutionMetricsResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics for the solution version. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-training-metrics.html">
     * Evaluating a solution version with metrics </a>.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metrics = std::move(value); }
    inline GetSolutionMetricsResult& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}
    inline GetSolutionMetricsResult& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}
    inline GetSolutionMetricsResult& AddMetrics(const Aws::String& key, double value) { m_metrics.emplace(key, value); return *this; }
    inline GetSolutionMetricsResult& AddMetrics(Aws::String&& key, double value) { m_metrics.emplace(std::move(key), value); return *this; }
    inline GetSolutionMetricsResult& AddMetrics(const char* key, double value) { m_metrics.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSolutionMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSolutionMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSolutionMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_solutionVersionArn;

    Aws::Map<Aws::String, double> m_metrics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
