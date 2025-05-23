﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressedDestinationSummary.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of suppressed email addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class ListSuppressedDestinationsResult
  {
  public:
    AWS_SESV2_API ListSuppressedDestinationsResult() = default;
    AWS_SESV2_API ListSuppressedDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListSuppressedDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline const Aws::Vector<SuppressedDestinationSummary>& GetSuppressedDestinationSummaries() const { return m_suppressedDestinationSummaries; }
    template<typename SuppressedDestinationSummariesT = Aws::Vector<SuppressedDestinationSummary>>
    void SetSuppressedDestinationSummaries(SuppressedDestinationSummariesT&& value) { m_suppressedDestinationSummariesHasBeenSet = true; m_suppressedDestinationSummaries = std::forward<SuppressedDestinationSummariesT>(value); }
    template<typename SuppressedDestinationSummariesT = Aws::Vector<SuppressedDestinationSummary>>
    ListSuppressedDestinationsResult& WithSuppressedDestinationSummaries(SuppressedDestinationSummariesT&& value) { SetSuppressedDestinationSummaries(std::forward<SuppressedDestinationSummariesT>(value)); return *this;}
    template<typename SuppressedDestinationSummariesT = SuppressedDestinationSummary>
    ListSuppressedDestinationsResult& AddSuppressedDestinationSummaries(SuppressedDestinationSummariesT&& value) { m_suppressedDestinationSummariesHasBeenSet = true; m_suppressedDestinationSummaries.emplace_back(std::forward<SuppressedDestinationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSuppressedDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSuppressedDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuppressedDestinationSummary> m_suppressedDestinationSummaries;
    bool m_suppressedDestinationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
