﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the location of an occurrence of sensitive data in an email message
   * or a non-binary text file such as an HTML, TXT, or XML file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Range">AWS API
   * Reference</a></p>
   */
  class Range
  {
  public:
    AWS_MACIE2_API Range() = default;
    AWS_MACIE2_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of lines from the beginning of the file to the end of the
     * sensitive data.</p> 
     */
    inline long long GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }
    inline Range& WithEnd(long long value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines from the beginning of the file to the beginning of the
     * sensitive data.</p> 
     */
    inline long long GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }
    inline Range& WithStart(long long value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of characters, with spaces and starting from 1, from the beginning
     * of the first line that contains the sensitive data (start) to the beginning of
     * the sensitive data.</p>
     */
    inline long long GetStartColumn() const { return m_startColumn; }
    inline bool StartColumnHasBeenSet() const { return m_startColumnHasBeenSet; }
    inline void SetStartColumn(long long value) { m_startColumnHasBeenSet = true; m_startColumn = value; }
    inline Range& WithStartColumn(long long value) { SetStartColumn(value); return *this;}
    ///@}
  private:

    long long m_end{0};
    bool m_endHasBeenSet = false;

    long long m_start{0};
    bool m_startHasBeenSet = false;

    long long m_startColumn{0};
    bool m_startColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
