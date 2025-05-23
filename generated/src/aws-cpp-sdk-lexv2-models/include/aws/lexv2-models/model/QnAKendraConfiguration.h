﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains details about the configuration of the Amazon Kendra index used for
   * the <code>AMAZON.QnAIntent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/QnAKendraConfiguration">AWS
   * API Reference</a></p>
   */
  class QnAKendraConfiguration
  {
  public:
    AWS_LEXMODELSV2_API QnAKendraConfiguration() = default;
    AWS_LEXMODELSV2_API QnAKendraConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API QnAKendraConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Kendra index to use.</p>
     */
    inline const Aws::String& GetKendraIndex() const { return m_kendraIndex; }
    inline bool KendraIndexHasBeenSet() const { return m_kendraIndexHasBeenSet; }
    template<typename KendraIndexT = Aws::String>
    void SetKendraIndex(KendraIndexT&& value) { m_kendraIndexHasBeenSet = true; m_kendraIndex = std::forward<KendraIndexT>(value); }
    template<typename KendraIndexT = Aws::String>
    QnAKendraConfiguration& WithKendraIndex(KendraIndexT&& value) { SetKendraIndex(std::forward<KendraIndexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable an Amazon Kendra filter string or not.</p>
     */
    inline bool GetQueryFilterStringEnabled() const { return m_queryFilterStringEnabled; }
    inline bool QueryFilterStringEnabledHasBeenSet() const { return m_queryFilterStringEnabledHasBeenSet; }
    inline void SetQueryFilterStringEnabled(bool value) { m_queryFilterStringEnabledHasBeenSet = true; m_queryFilterStringEnabled = value; }
    inline QnAKendraConfiguration& WithQueryFilterStringEnabled(bool value) { SetQueryFilterStringEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon Kendra filter string to use if enabled. For more
     * information on the Amazon Kendra search filter JSON format, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/filtering.html#search-filtering">Using
     * document attributes to filter search results</a>.</p>
     */
    inline const Aws::String& GetQueryFilterString() const { return m_queryFilterString; }
    inline bool QueryFilterStringHasBeenSet() const { return m_queryFilterStringHasBeenSet; }
    template<typename QueryFilterStringT = Aws::String>
    void SetQueryFilterString(QueryFilterStringT&& value) { m_queryFilterStringHasBeenSet = true; m_queryFilterString = std::forward<QueryFilterStringT>(value); }
    template<typename QueryFilterStringT = Aws::String>
    QnAKendraConfiguration& WithQueryFilterString(QueryFilterStringT&& value) { SetQueryFilterString(std::forward<QueryFilterStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to return an exact response from the Amazon Kendra index or
     * to let the Amazon Bedrock model you select generate a response based on the
     * results. To use this feature, you must first add FAQ questions to your index by
     * following the steps at <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-creating-faq.html">Adding
     * frequently asked questions (FAQs) to an index</a>.</p>
     */
    inline bool GetExactResponse() const { return m_exactResponse; }
    inline bool ExactResponseHasBeenSet() const { return m_exactResponseHasBeenSet; }
    inline void SetExactResponse(bool value) { m_exactResponseHasBeenSet = true; m_exactResponse = value; }
    inline QnAKendraConfiguration& WithExactResponse(bool value) { SetExactResponse(value); return *this;}
    ///@}
  private:

    Aws::String m_kendraIndex;
    bool m_kendraIndexHasBeenSet = false;

    bool m_queryFilterStringEnabled{false};
    bool m_queryFilterStringEnabledHasBeenSet = false;

    Aws::String m_queryFilterString;
    bool m_queryFilterStringHasBeenSet = false;

    bool m_exactResponse{false};
    bool m_exactResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
