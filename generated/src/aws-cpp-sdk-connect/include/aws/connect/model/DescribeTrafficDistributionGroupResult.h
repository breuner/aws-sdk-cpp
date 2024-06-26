﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TrafficDistributionGroup.h>
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
namespace Connect
{
namespace Model
{
  class DescribeTrafficDistributionGroupResult
  {
  public:
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult();
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline const TrafficDistributionGroup& GetTrafficDistributionGroup() const{ return m_trafficDistributionGroup; }
    inline void SetTrafficDistributionGroup(const TrafficDistributionGroup& value) { m_trafficDistributionGroup = value; }
    inline void SetTrafficDistributionGroup(TrafficDistributionGroup&& value) { m_trafficDistributionGroup = std::move(value); }
    inline DescribeTrafficDistributionGroupResult& WithTrafficDistributionGroup(const TrafficDistributionGroup& value) { SetTrafficDistributionGroup(value); return *this;}
    inline DescribeTrafficDistributionGroupResult& WithTrafficDistributionGroup(TrafficDistributionGroup&& value) { SetTrafficDistributionGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrafficDistributionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrafficDistributionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrafficDistributionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TrafficDistributionGroup m_trafficDistributionGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
