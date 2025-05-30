﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/DecoderManifestSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListDecoderManifestsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListDecoderManifestsResult() = default;
    AWS_IOTFLEETWISE_API ListDecoderManifestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListDecoderManifestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about each decoder manifest. </p>
     */
    inline const Aws::Vector<DecoderManifestSummary>& GetSummaries() const { return m_summaries; }
    template<typename SummariesT = Aws::Vector<DecoderManifestSummary>>
    void SetSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries = std::forward<SummariesT>(value); }
    template<typename SummariesT = Aws::Vector<DecoderManifestSummary>>
    ListDecoderManifestsResult& WithSummaries(SummariesT&& value) { SetSummaries(std::forward<SummariesT>(value)); return *this;}
    template<typename SummariesT = DecoderManifestSummary>
    ListDecoderManifestsResult& AddSummaries(SummariesT&& value) { m_summariesHasBeenSet = true; m_summaries.emplace_back(std::forward<SummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDecoderManifestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDecoderManifestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DecoderManifestSummary> m_summaries;
    bool m_summariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
