﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/QuickResponseFilterOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The quick response fields to filter the quick response query results by.</p>
   * <p>The following is the list of supported field names.</p> <ul> <li> <p>name</p>
   * </li> <li> <p>description</p> </li> <li> <p>shortcutKey</p> </li> <li>
   * <p>isActive</p> </li> <li> <p>channels</p> </li> <li> <p>language</p> </li> <li>
   * <p>contentType</p> </li> <li> <p>createdTime</p> </li> <li>
   * <p>lastModifiedTime</p> </li> <li> <p>lastModifiedBy</p> </li> <li>
   * <p>groupingConfiguration.criteria</p> </li> <li>
   * <p>groupingConfiguration.values</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QuickResponseFilterField">AWS
   * API Reference</a></p>
   */
  class QuickResponseFilterField
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QuickResponseFilterField();
    AWS_CONNECTWISDOMSERVICE_API QuickResponseFilterField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseFilterField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to treat null value as a match for the attribute field.</p>
     */
    inline bool GetIncludeNoExistence() const{ return m_includeNoExistence; }
    inline bool IncludeNoExistenceHasBeenSet() const { return m_includeNoExistenceHasBeenSet; }
    inline void SetIncludeNoExistence(bool value) { m_includeNoExistenceHasBeenSet = true; m_includeNoExistence = value; }
    inline QuickResponseFilterField& WithIncludeNoExistence(bool value) { SetIncludeNoExistence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute field to filter the quick responses by.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline QuickResponseFilterField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline QuickResponseFilterField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline QuickResponseFilterField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use for filtering.</p>
     */
    inline const QuickResponseFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const QuickResponseFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(QuickResponseFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline QuickResponseFilterField& WithOperator(const QuickResponseFilterOperator& value) { SetOperator(value); return *this;}
    inline QuickResponseFilterField& WithOperator(QuickResponseFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of attribute field to filter the quick response by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline QuickResponseFilterField& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline QuickResponseFilterField& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline QuickResponseFilterField& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline QuickResponseFilterField& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline QuickResponseFilterField& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    bool m_includeNoExistence;
    bool m_includeNoExistenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuickResponseFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
