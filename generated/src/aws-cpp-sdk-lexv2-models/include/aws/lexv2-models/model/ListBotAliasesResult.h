﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotAliasSummary.h>
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
  class ListBotAliasesResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotAliasesResult();
    AWS_LEXMODELSV2_API ListBotAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the bot aliases that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more aliases
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BotAliasSummary>& GetBotAliasSummaries() const{ return m_botAliasSummaries; }
    inline void SetBotAliasSummaries(const Aws::Vector<BotAliasSummary>& value) { m_botAliasSummaries = value; }
    inline void SetBotAliasSummaries(Aws::Vector<BotAliasSummary>&& value) { m_botAliasSummaries = std::move(value); }
    inline ListBotAliasesResult& WithBotAliasSummaries(const Aws::Vector<BotAliasSummary>& value) { SetBotAliasSummaries(value); return *this;}
    inline ListBotAliasesResult& WithBotAliasSummaries(Aws::Vector<BotAliasSummary>&& value) { SetBotAliasSummaries(std::move(value)); return *this;}
    inline ListBotAliasesResult& AddBotAliasSummaries(const BotAliasSummary& value) { m_botAliasSummaries.push_back(value); return *this; }
    inline ListBotAliasesResult& AddBotAliasSummaries(BotAliasSummary&& value) { m_botAliasSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBotAliases</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBotAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBotAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBotAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the aliases.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline ListBotAliasesResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListBotAliasesResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListBotAliasesResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBotAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBotAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBotAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BotAliasSummary> m_botAliasSummaries;

    Aws::String m_nextToken;

    Aws::String m_botId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
