﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/LexBot.h>
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
  class ListLexBotsResult
  {
  public:
    AWS_CONNECT_API ListLexBotsResult();
    AWS_CONNECT_API ListLexBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListLexBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names and Amazon Web Services Regions of the Amazon Lex bots associated
     * with the specified instance.</p>
     */
    inline const Aws::Vector<LexBot>& GetLexBots() const{ return m_lexBots; }
    inline void SetLexBots(const Aws::Vector<LexBot>& value) { m_lexBots = value; }
    inline void SetLexBots(Aws::Vector<LexBot>&& value) { m_lexBots = std::move(value); }
    inline ListLexBotsResult& WithLexBots(const Aws::Vector<LexBot>& value) { SetLexBots(value); return *this;}
    inline ListLexBotsResult& WithLexBots(Aws::Vector<LexBot>&& value) { SetLexBots(std::move(value)); return *this;}
    inline ListLexBotsResult& AddLexBots(const LexBot& value) { m_lexBots.push_back(value); return *this; }
    inline ListLexBotsResult& AddLexBots(LexBot&& value) { m_lexBots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLexBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLexBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLexBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLexBotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLexBotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLexBotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LexBot> m_lexBots;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
