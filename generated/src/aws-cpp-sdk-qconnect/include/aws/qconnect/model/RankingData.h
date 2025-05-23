﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RelevanceLevel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>Details about the source content ranking data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RankingData">AWS
   * API Reference</a></p>
   */
  class RankingData
  {
  public:
    AWS_QCONNECT_API RankingData() = default;
    AWS_QCONNECT_API RankingData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RankingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline double GetRelevanceScore() const { return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline RankingData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the content.</p>
     */
    inline RelevanceLevel GetRelevanceLevel() const { return m_relevanceLevel; }
    inline bool RelevanceLevelHasBeenSet() const { return m_relevanceLevelHasBeenSet; }
    inline void SetRelevanceLevel(RelevanceLevel value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = value; }
    inline RankingData& WithRelevanceLevel(RelevanceLevel value) { SetRelevanceLevel(value); return *this;}
    ///@}
  private:

    double m_relevanceScore{0.0};
    bool m_relevanceScoreHasBeenSet = false;

    RelevanceLevel m_relevanceLevel{RelevanceLevel::NOT_SET};
    bool m_relevanceLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
