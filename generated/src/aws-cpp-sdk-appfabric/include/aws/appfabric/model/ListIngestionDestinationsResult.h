﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/IngestionDestinationSummary.h>
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
namespace AppFabric
{
namespace Model
{
  class ListIngestionDestinationsResult
  {
  public:
    AWS_APPFABRIC_API ListIngestionDestinationsResult();
    AWS_APPFABRIC_API ListIngestionDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ListIngestionDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of ingestion destination summaries.</p>
     */
    inline const Aws::Vector<IngestionDestinationSummary>& GetIngestionDestinations() const{ return m_ingestionDestinations; }
    inline void SetIngestionDestinations(const Aws::Vector<IngestionDestinationSummary>& value) { m_ingestionDestinations = value; }
    inline void SetIngestionDestinations(Aws::Vector<IngestionDestinationSummary>&& value) { m_ingestionDestinations = std::move(value); }
    inline ListIngestionDestinationsResult& WithIngestionDestinations(const Aws::Vector<IngestionDestinationSummary>& value) { SetIngestionDestinations(value); return *this;}
    inline ListIngestionDestinationsResult& WithIngestionDestinations(Aws::Vector<IngestionDestinationSummary>&& value) { SetIngestionDestinations(std::move(value)); return *this;}
    inline ListIngestionDestinationsResult& AddIngestionDestinations(const IngestionDestinationSummary& value) { m_ingestionDestinations.push_back(value); return *this; }
    inline ListIngestionDestinationsResult& AddIngestionDestinations(IngestionDestinationSummary&& value) { m_ingestionDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIngestionDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIngestionDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIngestionDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIngestionDestinationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIngestionDestinationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIngestionDestinationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IngestionDestinationSummary> m_ingestionDestinations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
