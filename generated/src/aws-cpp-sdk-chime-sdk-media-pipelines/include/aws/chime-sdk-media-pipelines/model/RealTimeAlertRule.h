﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertRuleType.h>
#include <aws/chime-sdk-media-pipelines/model/KeywordMatchConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SentimentConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/IssueDetectionConfiguration.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Specifies the words or phrases that trigger an alert.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/RealTimeAlertRule">AWS
   * API Reference</a></p>
   */
  class RealTimeAlertRule
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule();
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of alert rule.</p>
     */
    inline const RealTimeAlertRuleType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RealTimeAlertRuleType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RealTimeAlertRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RealTimeAlertRule& WithType(const RealTimeAlertRuleType& value) { SetType(value); return *this;}
    inline RealTimeAlertRule& WithType(RealTimeAlertRuleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings for matching the keywords in a real-time alert
     * rule.</p>
     */
    inline const KeywordMatchConfiguration& GetKeywordMatchConfiguration() const{ return m_keywordMatchConfiguration; }
    inline bool KeywordMatchConfigurationHasBeenSet() const { return m_keywordMatchConfigurationHasBeenSet; }
    inline void SetKeywordMatchConfiguration(const KeywordMatchConfiguration& value) { m_keywordMatchConfigurationHasBeenSet = true; m_keywordMatchConfiguration = value; }
    inline void SetKeywordMatchConfiguration(KeywordMatchConfiguration&& value) { m_keywordMatchConfigurationHasBeenSet = true; m_keywordMatchConfiguration = std::move(value); }
    inline RealTimeAlertRule& WithKeywordMatchConfiguration(const KeywordMatchConfiguration& value) { SetKeywordMatchConfiguration(value); return *this;}
    inline RealTimeAlertRule& WithKeywordMatchConfiguration(KeywordMatchConfiguration&& value) { SetKeywordMatchConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings for predicting sentiment in a real-time alert
     * rule.</p>
     */
    inline const SentimentConfiguration& GetSentimentConfiguration() const{ return m_sentimentConfiguration; }
    inline bool SentimentConfigurationHasBeenSet() const { return m_sentimentConfigurationHasBeenSet; }
    inline void SetSentimentConfiguration(const SentimentConfiguration& value) { m_sentimentConfigurationHasBeenSet = true; m_sentimentConfiguration = value; }
    inline void SetSentimentConfiguration(SentimentConfiguration&& value) { m_sentimentConfigurationHasBeenSet = true; m_sentimentConfiguration = std::move(value); }
    inline RealTimeAlertRule& WithSentimentConfiguration(const SentimentConfiguration& value) { SetSentimentConfiguration(value); return *this;}
    inline RealTimeAlertRule& WithSentimentConfiguration(SentimentConfiguration&& value) { SetSentimentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the issue detection settings for a real-time alert rule.</p>
     */
    inline const IssueDetectionConfiguration& GetIssueDetectionConfiguration() const{ return m_issueDetectionConfiguration; }
    inline bool IssueDetectionConfigurationHasBeenSet() const { return m_issueDetectionConfigurationHasBeenSet; }
    inline void SetIssueDetectionConfiguration(const IssueDetectionConfiguration& value) { m_issueDetectionConfigurationHasBeenSet = true; m_issueDetectionConfiguration = value; }
    inline void SetIssueDetectionConfiguration(IssueDetectionConfiguration&& value) { m_issueDetectionConfigurationHasBeenSet = true; m_issueDetectionConfiguration = std::move(value); }
    inline RealTimeAlertRule& WithIssueDetectionConfiguration(const IssueDetectionConfiguration& value) { SetIssueDetectionConfiguration(value); return *this;}
    inline RealTimeAlertRule& WithIssueDetectionConfiguration(IssueDetectionConfiguration&& value) { SetIssueDetectionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    RealTimeAlertRuleType m_type;
    bool m_typeHasBeenSet = false;

    KeywordMatchConfiguration m_keywordMatchConfiguration;
    bool m_keywordMatchConfigurationHasBeenSet = false;

    SentimentConfiguration m_sentimentConfiguration;
    bool m_sentimentConfigurationHasBeenSet = false;

    IssueDetectionConfiguration m_issueDetectionConfiguration;
    bool m_issueDetectionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
