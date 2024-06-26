﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentRunAgent.h>
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
namespace Inspector
{
namespace Model
{
  class ListAssessmentRunAgentsResult
  {
  public:
    AWS_INSPECTOR_API ListAssessmentRunAgentsResult();
    AWS_INSPECTOR_API ListAssessmentRunAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API ListAssessmentRunAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of ARNs that specifies the agents returned by the action.</p>
     */
    inline const Aws::Vector<AssessmentRunAgent>& GetAssessmentRunAgents() const{ return m_assessmentRunAgents; }
    inline void SetAssessmentRunAgents(const Aws::Vector<AssessmentRunAgent>& value) { m_assessmentRunAgents = value; }
    inline void SetAssessmentRunAgents(Aws::Vector<AssessmentRunAgent>&& value) { m_assessmentRunAgents = std::move(value); }
    inline ListAssessmentRunAgentsResult& WithAssessmentRunAgents(const Aws::Vector<AssessmentRunAgent>& value) { SetAssessmentRunAgents(value); return *this;}
    inline ListAssessmentRunAgentsResult& WithAssessmentRunAgents(Aws::Vector<AssessmentRunAgent>&& value) { SetAssessmentRunAgents(std::move(value)); return *this;}
    inline ListAssessmentRunAgentsResult& AddAssessmentRunAgents(const AssessmentRunAgent& value) { m_assessmentRunAgents.push_back(value); return *this; }
    inline ListAssessmentRunAgentsResult& AddAssessmentRunAgents(AssessmentRunAgent&& value) { m_assessmentRunAgents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssessmentRunAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssessmentRunAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssessmentRunAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssessmentRunAgentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssessmentRunAgentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssessmentRunAgentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentRunAgent> m_assessmentRunAgents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
