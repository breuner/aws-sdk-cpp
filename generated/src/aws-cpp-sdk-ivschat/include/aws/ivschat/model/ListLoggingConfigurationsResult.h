﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/LoggingConfigurationSummary.h>
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
namespace ivschat
{
namespace Model
{
  class ListLoggingConfigurationsResult
  {
  public:
    AWS_IVSCHAT_API ListLoggingConfigurationsResult();
    AWS_IVSCHAT_API ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline const Aws::Vector<LoggingConfigurationSummary>& GetLoggingConfigurations() const{ return m_loggingConfigurations; }
    inline void SetLoggingConfigurations(const Aws::Vector<LoggingConfigurationSummary>& value) { m_loggingConfigurations = value; }
    inline void SetLoggingConfigurations(Aws::Vector<LoggingConfigurationSummary>&& value) { m_loggingConfigurations = std::move(value); }
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(const Aws::Vector<LoggingConfigurationSummary>& value) { SetLoggingConfigurations(value); return *this;}
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(Aws::Vector<LoggingConfigurationSummary>&& value) { SetLoggingConfigurations(std::move(value)); return *this;}
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(const LoggingConfigurationSummary& value) { m_loggingConfigurations.push_back(value); return *this; }
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfigurationSummary&& value) { m_loggingConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLoggingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLoggingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLoggingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLoggingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLoggingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLoggingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LoggingConfigurationSummary> m_loggingConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
