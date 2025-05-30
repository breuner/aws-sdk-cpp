﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/UpgradeHistory.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>GetUpgradeHistory</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeHistoryResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetUpgradeHistoryResult() = default;
    AWS_OPENSEARCHSERVICE_API GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetUpgradeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects corresponding to each upgrade or upgrade eligibility check
     * performed on a domain.</p>
     */
    inline const Aws::Vector<UpgradeHistory>& GetUpgradeHistories() const { return m_upgradeHistories; }
    template<typename UpgradeHistoriesT = Aws::Vector<UpgradeHistory>>
    void SetUpgradeHistories(UpgradeHistoriesT&& value) { m_upgradeHistoriesHasBeenSet = true; m_upgradeHistories = std::forward<UpgradeHistoriesT>(value); }
    template<typename UpgradeHistoriesT = Aws::Vector<UpgradeHistory>>
    GetUpgradeHistoryResult& WithUpgradeHistories(UpgradeHistoriesT&& value) { SetUpgradeHistories(std::forward<UpgradeHistoriesT>(value)); return *this;}
    template<typename UpgradeHistoriesT = UpgradeHistory>
    GetUpgradeHistoryResult& AddUpgradeHistories(UpgradeHistoriesT&& value) { m_upgradeHistoriesHasBeenSet = true; m_upgradeHistories.emplace_back(std::forward<UpgradeHistoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUpgradeHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUpgradeHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpgradeHistory> m_upgradeHistories;
    bool m_upgradeHistoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
