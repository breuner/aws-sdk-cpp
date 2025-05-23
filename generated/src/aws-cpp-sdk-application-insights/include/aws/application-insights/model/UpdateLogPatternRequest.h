﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class UpdateLogPatternRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateLogPatternRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogPattern"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    UpdateLogPatternRequest& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log pattern set.</p>
     */
    inline const Aws::String& GetPatternSetName() const { return m_patternSetName; }
    inline bool PatternSetNameHasBeenSet() const { return m_patternSetNameHasBeenSet; }
    template<typename PatternSetNameT = Aws::String>
    void SetPatternSetName(PatternSetNameT&& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = std::forward<PatternSetNameT>(value); }
    template<typename PatternSetNameT = Aws::String>
    UpdateLogPatternRequest& WithPatternSetName(PatternSetNameT&& value) { SetPatternSetName(std::forward<PatternSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log pattern.</p>
     */
    inline const Aws::String& GetPatternName() const { return m_patternName; }
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }
    template<typename PatternNameT = Aws::String>
    void SetPatternName(PatternNameT&& value) { m_patternNameHasBeenSet = true; m_patternName = std::forward<PatternNameT>(value); }
    template<typename PatternNameT = Aws::String>
    UpdateLogPatternRequest& WithPatternName(PatternNameT&& value) { SetPatternName(std::forward<PatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log pattern. The pattern must be DFA compatible. Patterns that utilize
     * forward lookahead or backreference constructions are not supported.</p>
     */
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    UpdateLogPatternRequest& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rank of the log pattern. Must be a value between <code>1</code> and
     * <code>1,000,000</code>. The patterns are sorted by rank, so we recommend that
     * you set your highest priority patterns with the lowest rank. A pattern of rank
     * <code>1</code> will be the first to get matched to a log line. A pattern of rank
     * <code>1,000,000</code> will be last to get matched. When you configure custom
     * log patterns from the console, a <code>Low</code> severity pattern translates to
     * a <code>750,000</code> rank. A <code>Medium</code> severity pattern translates
     * to a <code>500,000</code> rank. And a <code>High</code> severity pattern
     * translates to a <code>250,000</code> rank. Rank values less than <code>1</code>
     * or greater than <code>1,000,000</code> are reserved for Amazon Web Services
     * provided patterns. </p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline UpdateLogPatternRequest& WithRank(int value) { SetRank(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
