﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AppImageConfigSortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAppImageConfigsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAppImageConfigsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppImageConfigs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The total number of items to return in the response. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the response. To resume pagination, provide the
     * <code>NextToken</code> value in the as part of a subsequent call. The default
     * value is 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAppImageConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous call to <code>ListImages</code> didn't return the full set of
     * AppImageConfigs, the call returns a token for getting the next set of
     * AppImageConfigs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppImageConfigsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs whose name contains the specified
     * string.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListAppImageConfigsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListAppImageConfigsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs created on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListAppImageConfigsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs modified on or before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeBefore() const { return m_modifiedTimeBefore; }
    inline bool ModifiedTimeBeforeHasBeenSet() const { return m_modifiedTimeBeforeHasBeenSet; }
    template<typename ModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetModifiedTimeBefore(ModifiedTimeBeforeT&& value) { m_modifiedTimeBeforeHasBeenSet = true; m_modifiedTimeBefore = std::forward<ModifiedTimeBeforeT>(value); }
    template<typename ModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListAppImageConfigsRequest& WithModifiedTimeBefore(ModifiedTimeBeforeT&& value) { SetModifiedTimeBefore(std::forward<ModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs modified on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeAfter() const { return m_modifiedTimeAfter; }
    inline bool ModifiedTimeAfterHasBeenSet() const { return m_modifiedTimeAfterHasBeenSet; }
    template<typename ModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetModifiedTimeAfter(ModifiedTimeAfterT&& value) { m_modifiedTimeAfterHasBeenSet = true; m_modifiedTimeAfter = std::forward<ModifiedTimeAfterT>(value); }
    template<typename ModifiedTimeAfterT = Aws::Utils::DateTime>
    ListAppImageConfigsRequest& WithModifiedTimeAfter(ModifiedTimeAfterT&& value) { SetModifiedTimeAfter(std::forward<ModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline AppImageConfigSortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AppImageConfigSortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListAppImageConfigsRequest& WithSortBy(AppImageConfigSortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListAppImageConfigsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeBefore{};
    bool m_modifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeAfter{};
    bool m_modifiedTimeAfterHasBeenSet = false;

    AppImageConfigSortKey m_sortBy{AppImageConfigSortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
