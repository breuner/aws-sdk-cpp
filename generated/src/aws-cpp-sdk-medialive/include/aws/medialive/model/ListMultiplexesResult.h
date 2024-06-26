﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListMultiplexesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexesResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiplexesResult
  {
  public:
    AWS_MEDIALIVE_API ListMultiplexesResult();
    AWS_MEDIALIVE_API ListMultiplexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListMultiplexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of multiplexes.
     */
    inline const Aws::Vector<MultiplexSummary>& GetMultiplexes() const{ return m_multiplexes; }
    inline void SetMultiplexes(const Aws::Vector<MultiplexSummary>& value) { m_multiplexes = value; }
    inline void SetMultiplexes(Aws::Vector<MultiplexSummary>&& value) { m_multiplexes = std::move(value); }
    inline ListMultiplexesResult& WithMultiplexes(const Aws::Vector<MultiplexSummary>& value) { SetMultiplexes(value); return *this;}
    inline ListMultiplexesResult& WithMultiplexes(Aws::Vector<MultiplexSummary>&& value) { SetMultiplexes(std::move(value)); return *this;}
    inline ListMultiplexesResult& AddMultiplexes(const MultiplexSummary& value) { m_multiplexes.push_back(value); return *this; }
    inline ListMultiplexesResult& AddMultiplexes(MultiplexSummary&& value) { m_multiplexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Token for the next ListMultiplexes request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMultiplexesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMultiplexesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMultiplexesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMultiplexesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMultiplexesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMultiplexesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MultiplexSummary> m_multiplexes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
