﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/codebuild/model/ReportGroupSortByType.h>
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
  class ListReportGroupsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListReportGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReportGroups"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Used to specify the order to sort the list of returned report groups. Valid
     * values are <code>ASCENDING</code> and <code>DESCENDING</code>. </p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListReportGroupsRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The criterion to be used to list build report groups. Valid values include:
     * </p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each report
     * group was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>: List
     * based on when each report group was last changed.</p> </li> <li> <p>
     * <code>NAME</code>: List based on each report group's name.</p> </li> </ul>
     */
    inline ReportGroupSortByType GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ReportGroupSortByType value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListReportGroupsRequest& WithSortBy(ReportGroupSortByType value) { SetSortBy(value); return *this;}
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
    ListReportGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of paginated report groups returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>ReportGroup</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReportGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    ReportGroupSortByType m_sortBy{ReportGroupSortByType::NOT_SET};
    bool m_sortByHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
