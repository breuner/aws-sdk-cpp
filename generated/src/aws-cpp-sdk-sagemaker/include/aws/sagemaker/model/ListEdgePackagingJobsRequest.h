﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EdgePackagingJobStatus.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsSortBy.h>
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
  class ListEdgePackagingJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListEdgePackagingJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEdgePackagingJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEdgePackagingJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to select.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEdgePackagingJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select jobs where the job was created after specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListEdgePackagingJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select jobs where the job was created before specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListEdgePackagingJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select jobs where the job was updated after specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListEdgePackagingJobsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select jobs where the job was updated before specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListEdgePackagingJobsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs containing this name in their packaging job name.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListEdgePackagingJobsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for jobs where the model name contains this string.</p>
     */
    inline const Aws::String& GetModelNameContains() const { return m_modelNameContains; }
    inline bool ModelNameContainsHasBeenSet() const { return m_modelNameContainsHasBeenSet; }
    template<typename ModelNameContainsT = Aws::String>
    void SetModelNameContains(ModelNameContainsT&& value) { m_modelNameContainsHasBeenSet = true; m_modelNameContains = std::forward<ModelNameContainsT>(value); }
    template<typename ModelNameContainsT = Aws::String>
    ListEdgePackagingJobsRequest& WithModelNameContains(ModelNameContainsT&& value) { SetModelNameContains(std::forward<ModelNameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status to filter for.</p>
     */
    inline EdgePackagingJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(EdgePackagingJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListEdgePackagingJobsRequest& WithStatusEquals(EdgePackagingJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to specify what column to sort by.</p>
     */
    inline ListEdgePackagingJobsSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListEdgePackagingJobsSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListEdgePackagingJobsRequest& WithSortBy(ListEdgePackagingJobsSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What direction to sort by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListEdgePackagingJobsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_modelNameContains;
    bool m_modelNameContainsHasBeenSet = false;

    EdgePackagingJobStatus m_statusEquals{EdgePackagingJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    ListEdgePackagingJobsSortBy m_sortBy{ListEdgePackagingJobsSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
