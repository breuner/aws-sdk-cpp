﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsIntentResult.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListIntentMetricsResult
  {
  public:
    AWS_LEXMODELSV2_API ListIntentMetricsResult();
    AWS_LEXMODELSV2_API ListIntentMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListIntentMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the bot for which you retrieved intent metrics.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline ListIntentMetricsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListIntentMetricsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListIntentMetricsResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results for the intent metrics.</p>
     */
    inline const Aws::Vector<AnalyticsIntentResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<AnalyticsIntentResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<AnalyticsIntentResult>&& value) { m_results = std::move(value); }
    inline ListIntentMetricsResult& WithResults(const Aws::Vector<AnalyticsIntentResult>& value) { SetResults(value); return *this;}
    inline ListIntentMetricsResult& WithResults(Aws::Vector<AnalyticsIntentResult>&& value) { SetResults(std::move(value)); return *this;}
    inline ListIntentMetricsResult& AddResults(const AnalyticsIntentResult& value) { m_results.push_back(value); return *this; }
    inline ListIntentMetricsResult& AddResults(AnalyticsIntentResult&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response from the ListIntentMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListIntentMetrics request to return the next page of results. For a complete set
     * of results, call the ListIntentMetrics operation until the nextToken returned in
     * the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIntentMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIntentMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIntentMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIntentMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIntentMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIntentMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::Vector<AnalyticsIntentResult> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
