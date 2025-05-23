﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/model/BotSortBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBotsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBots"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies sorting parameters for the list of bots. You can specify that the
     * list be sorted by bot name in ascending or descending order.</p>
     */
    inline const BotSortBy& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = BotSortBy>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = BotSortBy>
    ListBotsRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the specification of a filter used to limit the bots in the response
     * to only those that match the filter specification. You can only specify one
     * filter and one string to filter on.</p>
     */
    inline const Aws::Vector<BotFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<BotFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<BotFilter>>
    ListBotsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = BotFilter>
    ListBotsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of bots to return in each page of results. If there are
     * fewer results than the maximum page size, only the actual number of results are
     * returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response from the <code>ListBots</code> operation contains more
     * results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. </p> <p>Use the returned token in the
     * <code>nextToken</code> parameter of a <code>ListBots</code> request to return
     * the next page of results. For a complete set of results, call the
     * <code>ListBots</code> operation until the <code>nextToken</code> returned in the
     * response is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    BotSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::Vector<BotFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
