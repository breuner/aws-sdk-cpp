﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The search criteria to be used to return prompts.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PromptSearchCriteria">AWS
   * API Reference</a></p>
   */
  class PromptSearchCriteria
  {
  public:
    AWS_CONNECT_API PromptSearchCriteria() = default;
    AWS_CONNECT_API PromptSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PromptSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<PromptSearchCriteria>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<PromptSearchCriteria>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<PromptSearchCriteria>>
    PromptSearchCriteria& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = PromptSearchCriteria>
    PromptSearchCriteria& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<PromptSearchCriteria>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<PromptSearchCriteria>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<PromptSearchCriteria>>
    PromptSearchCriteria& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = PromptSearchCriteria>
    PromptSearchCriteria& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    PromptSearchCriteria& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PromptSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<PromptSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
