﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/CaseDetails.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>Returns an array of <a
   * href="https://docs.aws.amazon.com/awssupport/latest/APIReference/API_CaseDetails.html">CaseDetails</a>
   * objects and a <code>nextToken</code> that defines a point for pagination in the
   * result set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCasesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeCasesResult
  {
  public:
    AWS_SUPPORT_API DescribeCasesResult();
    AWS_SUPPORT_API DescribeCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details for the cases that match the request.</p>
     */
    inline const Aws::Vector<CaseDetails>& GetCases() const{ return m_cases; }
    inline void SetCases(const Aws::Vector<CaseDetails>& value) { m_cases = value; }
    inline void SetCases(Aws::Vector<CaseDetails>&& value) { m_cases = std::move(value); }
    inline DescribeCasesResult& WithCases(const Aws::Vector<CaseDetails>& value) { SetCases(value); return *this;}
    inline DescribeCasesResult& WithCases(Aws::Vector<CaseDetails>&& value) { SetCases(std::move(value)); return *this;}
    inline DescribeCasesResult& AddCases(const CaseDetails& value) { m_cases.push_back(value); return *this; }
    inline DescribeCasesResult& AddCases(CaseDetails&& value) { m_cases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CaseDetails> m_cases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
