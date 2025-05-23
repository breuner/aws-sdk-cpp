﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BedrockKnowledgeStoreExactResponseFields.h>
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
   * <p>Contains details about the configuration of a Amazon Bedrock knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockKnowledgeStoreConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockKnowledgeStoreConfiguration
  {
  public:
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration() = default;
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockKnowledgeStoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base ARN of the knowledge base used.</p>
     */
    inline const Aws::String& GetBedrockKnowledgeBaseArn() const { return m_bedrockKnowledgeBaseArn; }
    inline bool BedrockKnowledgeBaseArnHasBeenSet() const { return m_bedrockKnowledgeBaseArnHasBeenSet; }
    template<typename BedrockKnowledgeBaseArnT = Aws::String>
    void SetBedrockKnowledgeBaseArn(BedrockKnowledgeBaseArnT&& value) { m_bedrockKnowledgeBaseArnHasBeenSet = true; m_bedrockKnowledgeBaseArn = std::forward<BedrockKnowledgeBaseArnT>(value); }
    template<typename BedrockKnowledgeBaseArnT = Aws::String>
    BedrockKnowledgeStoreConfiguration& WithBedrockKnowledgeBaseArn(BedrockKnowledgeBaseArnT&& value) { SetBedrockKnowledgeBaseArn(std::forward<BedrockKnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to return an exact response, or to return an answer
     * generated by the model, using the fields you specify from the database.</p>
     */
    inline bool GetExactResponse() const { return m_exactResponse; }
    inline bool ExactResponseHasBeenSet() const { return m_exactResponseHasBeenSet; }
    inline void SetExactResponse(bool value) { m_exactResponseHasBeenSet = true; m_exactResponse = value; }
    inline BedrockKnowledgeStoreConfiguration& WithExactResponse(bool value) { SetExactResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields used for an exact response to the user.</p>
     */
    inline const BedrockKnowledgeStoreExactResponseFields& GetExactResponseFields() const { return m_exactResponseFields; }
    inline bool ExactResponseFieldsHasBeenSet() const { return m_exactResponseFieldsHasBeenSet; }
    template<typename ExactResponseFieldsT = BedrockKnowledgeStoreExactResponseFields>
    void SetExactResponseFields(ExactResponseFieldsT&& value) { m_exactResponseFieldsHasBeenSet = true; m_exactResponseFields = std::forward<ExactResponseFieldsT>(value); }
    template<typename ExactResponseFieldsT = BedrockKnowledgeStoreExactResponseFields>
    BedrockKnowledgeStoreConfiguration& WithExactResponseFields(ExactResponseFieldsT&& value) { SetExactResponseFields(std::forward<ExactResponseFieldsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bedrockKnowledgeBaseArn;
    bool m_bedrockKnowledgeBaseArnHasBeenSet = false;

    bool m_exactResponse{false};
    bool m_exactResponseHasBeenSet = false;

    BedrockKnowledgeStoreExactResponseFields m_exactResponseFields;
    bool m_exactResponseFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
