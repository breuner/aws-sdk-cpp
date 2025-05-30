﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParametersFilter.h>
#include <aws/ssm/model/ParameterStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeParametersRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeParameters"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This data type is deprecated. Instead, use <code>ParameterFilters</code>.</p>
     */
    inline const Aws::Vector<ParametersFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<ParametersFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<ParametersFilter>>
    DescribeParametersRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = ParametersFilter>
    DescribeParametersRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters to limit the request results.</p>
     */
    inline const Aws::Vector<ParameterStringFilter>& GetParameterFilters() const { return m_parameterFilters; }
    inline bool ParameterFiltersHasBeenSet() const { return m_parameterFiltersHasBeenSet; }
    template<typename ParameterFiltersT = Aws::Vector<ParameterStringFilter>>
    void SetParameterFilters(ParameterFiltersT&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters = std::forward<ParameterFiltersT>(value); }
    template<typename ParameterFiltersT = Aws::Vector<ParameterStringFilter>>
    DescribeParametersRequest& WithParameterFilters(ParameterFiltersT&& value) { SetParameterFilters(std::forward<ParameterFiltersT>(value)); return *this;}
    template<typename ParameterFiltersT = ParameterStringFilter>
    DescribeParametersRequest& AddParameterFilters(ParameterFiltersT&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters.emplace_back(std::forward<ParameterFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeParametersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeParametersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists parameters that are shared with you.</p>  <p>By default when
     * using this option, the command returns parameters that have been shared using a
     * standard Resource Access Manager Resource Share. In order for a parameter that
     * was shared using the <a>PutResourcePolicy</a> command to be returned, the
     * associated <code>RAM Resource Share Created From Policy</code> must have been
     * promoted to a standard Resource Share using the RAM <a
     * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
     * API operation.</p> <p>For more information about sharing parameters, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-shared-parameters.html">Working
     * with shared parameters</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p> 
     */
    inline bool GetShared() const { return m_shared; }
    inline bool SharedHasBeenSet() const { return m_sharedHasBeenSet; }
    inline void SetShared(bool value) { m_sharedHasBeenSet = true; m_shared = value; }
    inline DescribeParametersRequest& WithShared(bool value) { SetShared(value); return *this;}
    ///@}
  private:

    Aws::Vector<ParametersFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<ParameterStringFilter> m_parameterFilters;
    bool m_parameterFiltersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_shared{false};
    bool m_sharedHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
