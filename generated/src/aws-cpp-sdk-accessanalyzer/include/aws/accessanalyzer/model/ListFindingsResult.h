﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingSummary.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindingsResponse">AWS
   * API Reference</a></p>
   */
  class ListFindingsResult
  {
  public:
    AWS_ACCESSANALYZER_API ListFindingsResult();
    AWS_ACCESSANALYZER_API ListFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline const Aws::Vector<FindingSummary>& GetFindings() const{ return m_findings; }
    inline void SetFindings(const Aws::Vector<FindingSummary>& value) { m_findings = value; }
    inline void SetFindings(Aws::Vector<FindingSummary>&& value) { m_findings = std::move(value); }
    inline ListFindingsResult& WithFindings(const Aws::Vector<FindingSummary>& value) { SetFindings(value); return *this;}
    inline ListFindingsResult& WithFindings(Aws::Vector<FindingSummary>&& value) { SetFindings(std::move(value)); return *this;}
    inline ListFindingsResult& AddFindings(const FindingSummary& value) { m_findings.push_back(value); return *this; }
    inline ListFindingsResult& AddFindings(FindingSummary&& value) { m_findings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FindingSummary> m_findings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
