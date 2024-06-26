﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AlgorithmSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAlgorithmsResult
  {
  public:
    AWS_SAGEMAKER_API ListAlgorithmsResult();
    AWS_SAGEMAKER_API ListAlgorithmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAlgorithmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline const Aws::Vector<AlgorithmSummary>& GetAlgorithmSummaryList() const{ return m_algorithmSummaryList; }
    inline void SetAlgorithmSummaryList(const Aws::Vector<AlgorithmSummary>& value) { m_algorithmSummaryList = value; }
    inline void SetAlgorithmSummaryList(Aws::Vector<AlgorithmSummary>&& value) { m_algorithmSummaryList = std::move(value); }
    inline ListAlgorithmsResult& WithAlgorithmSummaryList(const Aws::Vector<AlgorithmSummary>& value) { SetAlgorithmSummaryList(value); return *this;}
    inline ListAlgorithmsResult& WithAlgorithmSummaryList(Aws::Vector<AlgorithmSummary>&& value) { SetAlgorithmSummaryList(std::move(value)); return *this;}
    inline ListAlgorithmsResult& AddAlgorithmSummaryList(const AlgorithmSummary& value) { m_algorithmSummaryList.push_back(value); return *this; }
    inline ListAlgorithmsResult& AddAlgorithmSummaryList(AlgorithmSummary&& value) { m_algorithmSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAlgorithmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAlgorithmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAlgorithmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAlgorithmsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAlgorithmsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAlgorithmsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AlgorithmSummary> m_algorithmSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
