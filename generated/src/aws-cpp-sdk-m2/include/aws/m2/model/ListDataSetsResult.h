﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDataSetsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSets() const{ return m_dataSets; }
    inline void SetDataSets(const Aws::Vector<DataSetSummary>& value) { m_dataSets = value; }
    inline void SetDataSets(Aws::Vector<DataSetSummary>&& value) { m_dataSets = std::move(value); }
    inline ListDataSetsResult& WithDataSets(const Aws::Vector<DataSetSummary>& value) { SetDataSets(value); return *this;}
    inline ListDataSetsResult& WithDataSets(Aws::Vector<DataSetSummary>&& value) { SetDataSets(std::move(value)); return *this;}
    inline ListDataSetsResult& AddDataSets(const DataSetSummary& value) { m_dataSets.push_back(value); return *this; }
    inline ListDataSetsResult& AddDataSets(DataSetSummary&& value) { m_dataSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetSummary> m_dataSets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
