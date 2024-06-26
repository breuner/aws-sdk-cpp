﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobExecutionSummaryForThing.h>
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
namespace IoT
{
namespace Model
{
  class ListJobExecutionsForThingResult
  {
  public:
    AWS_IOT_API ListJobExecutionsForThingResult();
    AWS_IOT_API ListJobExecutionsForThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListJobExecutionsForThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job execution summaries.</p>
     */
    inline const Aws::Vector<JobExecutionSummaryForThing>& GetExecutionSummaries() const{ return m_executionSummaries; }
    inline void SetExecutionSummaries(const Aws::Vector<JobExecutionSummaryForThing>& value) { m_executionSummaries = value; }
    inline void SetExecutionSummaries(Aws::Vector<JobExecutionSummaryForThing>&& value) { m_executionSummaries = std::move(value); }
    inline ListJobExecutionsForThingResult& WithExecutionSummaries(const Aws::Vector<JobExecutionSummaryForThing>& value) { SetExecutionSummaries(value); return *this;}
    inline ListJobExecutionsForThingResult& WithExecutionSummaries(Aws::Vector<JobExecutionSummaryForThing>&& value) { SetExecutionSummaries(std::move(value)); return *this;}
    inline ListJobExecutionsForThingResult& AddExecutionSummaries(const JobExecutionSummaryForThing& value) { m_executionSummaries.push_back(value); return *this; }
    inline ListJobExecutionsForThingResult& AddExecutionSummaries(JobExecutionSummaryForThing&& value) { m_executionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobExecutionsForThingResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobExecutionsForThingResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobExecutionsForThingResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobExecutionsForThingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobExecutionsForThingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobExecutionsForThingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobExecutionSummaryForThing> m_executionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
