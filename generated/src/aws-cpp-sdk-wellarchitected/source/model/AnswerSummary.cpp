﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AnswerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

AnswerSummary::AnswerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AnswerSummary& AnswerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");
    m_questionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");
    m_pillarIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuestionTitle"))
  {
    m_questionTitle = jsonValue.GetString("QuestionTitle");
    m_questionTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Choices"))
  {
    Aws::Utils::Array<JsonView> choicesJsonList = jsonValue.GetArray("Choices");
    for(unsigned choicesIndex = 0; choicesIndex < choicesJsonList.GetLength(); ++choicesIndex)
    {
      m_choices.push_back(choicesJsonList[choicesIndex].AsObject());
    }
    m_choicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectedChoices"))
  {
    Aws::Utils::Array<JsonView> selectedChoicesJsonList = jsonValue.GetArray("SelectedChoices");
    for(unsigned selectedChoicesIndex = 0; selectedChoicesIndex < selectedChoicesJsonList.GetLength(); ++selectedChoicesIndex)
    {
      m_selectedChoices.push_back(selectedChoicesJsonList[selectedChoicesIndex].AsString());
    }
    m_selectedChoicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChoiceAnswerSummaries"))
  {
    Aws::Utils::Array<JsonView> choiceAnswerSummariesJsonList = jsonValue.GetArray("ChoiceAnswerSummaries");
    for(unsigned choiceAnswerSummariesIndex = 0; choiceAnswerSummariesIndex < choiceAnswerSummariesJsonList.GetLength(); ++choiceAnswerSummariesIndex)
    {
      m_choiceAnswerSummaries.push_back(choiceAnswerSummariesJsonList[choiceAnswerSummariesIndex].AsObject());
    }
    m_choiceAnswerSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsApplicable"))
  {
    m_isApplicable = jsonValue.GetBool("IsApplicable");
    m_isApplicableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Risk"))
  {
    m_risk = RiskMapper::GetRiskForName(jsonValue.GetString("Risk"));
    m_riskHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = AnswerReasonMapper::GetAnswerReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuestionType"))
  {
    m_questionType = QuestionTypeMapper::GetQuestionTypeForName(jsonValue.GetString("QuestionType"));
    m_questionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JiraConfiguration"))
  {
    m_jiraConfiguration = jsonValue.GetObject("JiraConfiguration");
    m_jiraConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AnswerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionTitleHasBeenSet)
  {
   payload.WithString("QuestionTitle", m_questionTitle);

  }

  if(m_choicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> choicesJsonList(m_choices.size());
   for(unsigned choicesIndex = 0; choicesIndex < choicesJsonList.GetLength(); ++choicesIndex)
   {
     choicesJsonList[choicesIndex].AsObject(m_choices[choicesIndex].Jsonize());
   }
   payload.WithArray("Choices", std::move(choicesJsonList));

  }

  if(m_selectedChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedChoicesJsonList(m_selectedChoices.size());
   for(unsigned selectedChoicesIndex = 0; selectedChoicesIndex < selectedChoicesJsonList.GetLength(); ++selectedChoicesIndex)
   {
     selectedChoicesJsonList[selectedChoicesIndex].AsString(m_selectedChoices[selectedChoicesIndex]);
   }
   payload.WithArray("SelectedChoices", std::move(selectedChoicesJsonList));

  }

  if(m_choiceAnswerSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> choiceAnswerSummariesJsonList(m_choiceAnswerSummaries.size());
   for(unsigned choiceAnswerSummariesIndex = 0; choiceAnswerSummariesIndex < choiceAnswerSummariesJsonList.GetLength(); ++choiceAnswerSummariesIndex)
   {
     choiceAnswerSummariesJsonList[choiceAnswerSummariesIndex].AsObject(m_choiceAnswerSummaries[choiceAnswerSummariesIndex].Jsonize());
   }
   payload.WithArray("ChoiceAnswerSummaries", std::move(choiceAnswerSummariesJsonList));

  }

  if(m_isApplicableHasBeenSet)
  {
   payload.WithBool("IsApplicable", m_isApplicable);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("Risk", RiskMapper::GetNameForRisk(m_risk));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AnswerReasonMapper::GetNameForAnswerReason(m_reason));
  }

  if(m_questionTypeHasBeenSet)
  {
   payload.WithString("QuestionType", QuestionTypeMapper::GetNameForQuestionType(m_questionType));
  }

  if(m_jiraConfigurationHasBeenSet)
  {
   payload.WithObject("JiraConfiguration", m_jiraConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
