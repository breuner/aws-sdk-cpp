﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Run.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list runs request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRunsResult">AWS
   * API Reference</a></p>
   */
  class ListRunsResult
  {
  public:
    AWS_DEVICEFARM_API ListRunsResult();
    AWS_DEVICEFARM_API ListRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the runs.</p>
     */
    inline const Aws::Vector<Run>& GetRuns() const{ return m_runs; }
    inline void SetRuns(const Aws::Vector<Run>& value) { m_runs = value; }
    inline void SetRuns(Aws::Vector<Run>&& value) { m_runs = std::move(value); }
    inline ListRunsResult& WithRuns(const Aws::Vector<Run>& value) { SetRuns(value); return *this;}
    inline ListRunsResult& WithRuns(Aws::Vector<Run>&& value) { SetRuns(std::move(value)); return *this;}
    inline ListRunsResult& AddRuns(const Run& value) { m_runs.push_back(value); return *this; }
    inline ListRunsResult& AddRuns(Run&& value) { m_runs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Run> m_runs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
