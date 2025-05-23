﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/SharedResourceSortByType.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListSharedProjectsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListSharedProjectsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSharedProjects"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The criterion to be used to list build projects shared with the current
     * Amazon Web Services account or user. Valid values include: </p> <ul> <li> <p>
     * <code>ARN</code>: List based on the ARN. </p> </li> <li> <p>
     * <code>MODIFIED_TIME</code>: List based on when information about the shared
     * project was last changed. </p> </li> </ul>
     */
    inline SharedResourceSortByType GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SharedResourceSortByType value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListSharedProjectsRequest& WithSortBy(SharedResourceSortByType value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to list shared build projects. Valid values include:</p>
     * <ul> <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li>
     * <p> <code>DESCENDING</code>: List in descending order.</p> </li> </ul>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListSharedProjectsRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of paginated shared build projects returned per response.
     * Use <code>nextToken</code> to iterate pages in the list of returned
     * <code>Project</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSharedProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSharedProjectsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    SharedResourceSortByType m_sortBy{SharedResourceSortByType::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
