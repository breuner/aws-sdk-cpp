﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about a table cell in a table excerpt.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TableCell">AWS
   * API Reference</a></p>
   */
  class TableCell
  {
  public:
    AWS_KENDRA_API TableCell() = default;
    AWS_KENDRA_API TableCell(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TableCell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actual value or content within a table cell. A table cell could contain a
     * date value of a year, or a string value of text, for example.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TableCell& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> if the response of the table cell is the top answer. This
     * is the cell value or content with the highest confidence score or is the most
     * relevant to the query.</p>
     */
    inline bool GetTopAnswer() const { return m_topAnswer; }
    inline bool TopAnswerHasBeenSet() const { return m_topAnswerHasBeenSet; }
    inline void SetTopAnswer(bool value) { m_topAnswerHasBeenSet = true; m_topAnswer = value; }
    inline TableCell& WithTopAnswer(bool value) { SetTopAnswer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> means that the table cell has a high enough confidence and
     * is relevant to the query, so the value or content should be highlighted.</p>
     */
    inline bool GetHighlighted() const { return m_highlighted; }
    inline bool HighlightedHasBeenSet() const { return m_highlightedHasBeenSet; }
    inline void SetHighlighted(bool value) { m_highlightedHasBeenSet = true; m_highlighted = value; }
    inline TableCell& WithHighlighted(bool value) { SetHighlighted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> means that the table cell should be treated as a
     * header.</p>
     */
    inline bool GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    inline void SetHeader(bool value) { m_headerHasBeenSet = true; m_header = value; }
    inline TableCell& WithHeader(bool value) { SetHeader(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_topAnswer{false};
    bool m_topAnswerHasBeenSet = false;

    bool m_highlighted{false};
    bool m_highlightedHasBeenSet = false;

    bool m_header{false};
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
