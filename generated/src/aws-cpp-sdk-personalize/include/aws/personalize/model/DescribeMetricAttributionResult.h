﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/MetricAttribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeMetricAttributionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeMetricAttributionResult();
    AWS_PERSONALIZE_API DescribeMetricAttributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeMetricAttributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the metric attribution.</p>
     */
    inline const MetricAttribution& GetMetricAttribution() const{ return m_metricAttribution; }
    inline void SetMetricAttribution(const MetricAttribution& value) { m_metricAttribution = value; }
    inline void SetMetricAttribution(MetricAttribution&& value) { m_metricAttribution = std::move(value); }
    inline DescribeMetricAttributionResult& WithMetricAttribution(const MetricAttribution& value) { SetMetricAttribution(value); return *this;}
    inline DescribeMetricAttributionResult& WithMetricAttribution(MetricAttribution&& value) { SetMetricAttribution(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMetricAttributionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMetricAttributionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMetricAttributionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MetricAttribution m_metricAttribution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
