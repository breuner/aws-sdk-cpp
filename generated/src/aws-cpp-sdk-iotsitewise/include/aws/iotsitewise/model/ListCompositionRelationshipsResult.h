﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/CompositionRelationshipSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListCompositionRelationshipsResult
  {
  public:
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult() = default;
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline const Aws::Vector<CompositionRelationshipSummary>& GetCompositionRelationshipSummaries() const { return m_compositionRelationshipSummaries; }
    template<typename CompositionRelationshipSummariesT = Aws::Vector<CompositionRelationshipSummary>>
    void SetCompositionRelationshipSummaries(CompositionRelationshipSummariesT&& value) { m_compositionRelationshipSummariesHasBeenSet = true; m_compositionRelationshipSummaries = std::forward<CompositionRelationshipSummariesT>(value); }
    template<typename CompositionRelationshipSummariesT = Aws::Vector<CompositionRelationshipSummary>>
    ListCompositionRelationshipsResult& WithCompositionRelationshipSummaries(CompositionRelationshipSummariesT&& value) { SetCompositionRelationshipSummaries(std::forward<CompositionRelationshipSummariesT>(value)); return *this;}
    template<typename CompositionRelationshipSummariesT = CompositionRelationshipSummary>
    ListCompositionRelationshipsResult& AddCompositionRelationshipSummaries(CompositionRelationshipSummariesT&& value) { m_compositionRelationshipSummariesHasBeenSet = true; m_compositionRelationshipSummaries.emplace_back(std::forward<CompositionRelationshipSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCompositionRelationshipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCompositionRelationshipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompositionRelationshipSummary> m_compositionRelationshipSummaries;
    bool m_compositionRelationshipSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
