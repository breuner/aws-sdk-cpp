﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/AutoScalingConfigurationSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListAutoScalingConfigurationsResult
  {
  public:
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult();
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information records for auto scaling configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<AutoScalingConfigurationSummary>& GetAutoScalingConfigurationSummaryList() const{ return m_autoScalingConfigurationSummaryList; }
    inline void SetAutoScalingConfigurationSummaryList(const Aws::Vector<AutoScalingConfigurationSummary>& value) { m_autoScalingConfigurationSummaryList = value; }
    inline void SetAutoScalingConfigurationSummaryList(Aws::Vector<AutoScalingConfigurationSummary>&& value) { m_autoScalingConfigurationSummaryList = std::move(value); }
    inline ListAutoScalingConfigurationsResult& WithAutoScalingConfigurationSummaryList(const Aws::Vector<AutoScalingConfigurationSummary>& value) { SetAutoScalingConfigurationSummaryList(value); return *this;}
    inline ListAutoScalingConfigurationsResult& WithAutoScalingConfigurationSummaryList(Aws::Vector<AutoScalingConfigurationSummary>&& value) { SetAutoScalingConfigurationSummaryList(std::move(value)); return *this;}
    inline ListAutoScalingConfigurationsResult& AddAutoScalingConfigurationSummaryList(const AutoScalingConfigurationSummary& value) { m_autoScalingConfigurationSummaryList.push_back(value); return *this; }
    inline ListAutoScalingConfigurationsResult& AddAutoScalingConfigurationSummaryList(AutoScalingConfigurationSummary&& value) { m_autoScalingConfigurationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAutoScalingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAutoScalingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAutoScalingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAutoScalingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAutoScalingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAutoScalingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AutoScalingConfigurationSummary> m_autoScalingConfigurationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
