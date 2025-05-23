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
   * <p>A sample utterance that invokes an intent or respond to a slot elicitation
   * prompt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SampleUtterance">AWS
   * API Reference</a></p>
   */
  class SampleUtterance
  {
  public:
    AWS_LEXMODELSV2_API SampleUtterance() = default;
    AWS_LEXMODELSV2_API SampleUtterance(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SampleUtterance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sample utterance that Amazon Lex uses to build its machine-learning model
     * to recognize intents.</p>
     */
    inline const Aws::String& GetUtterance() const { return m_utterance; }
    inline bool UtteranceHasBeenSet() const { return m_utteranceHasBeenSet; }
    template<typename UtteranceT = Aws::String>
    void SetUtterance(UtteranceT&& value) { m_utteranceHasBeenSet = true; m_utterance = std::forward<UtteranceT>(value); }
    template<typename UtteranceT = Aws::String>
    SampleUtterance& WithUtterance(UtteranceT&& value) { SetUtterance(std::forward<UtteranceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_utterance;
    bool m_utteranceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
