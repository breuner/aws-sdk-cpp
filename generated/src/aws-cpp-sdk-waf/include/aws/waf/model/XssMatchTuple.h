﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/FieldToMatch.h>
#include <aws/waf/model/TextTransformation.h>
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
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies the part of a
   * web request that you want AWS WAF to inspect for cross-site scripting attacks
   * and, if you want AWS WAF to inspect a header, the name of the
   * header.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/XssMatchTuple">AWS
   * API Reference</a></p>
   */
  class XssMatchTuple
  {
  public:
    AWS_WAF_API XssMatchTuple() = default;
    AWS_WAF_API XssMatchTuple(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API XssMatchTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies where in a web request to look for cross-site scripting
     * attacks.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const { return m_fieldToMatch; }
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }
    template<typename FieldToMatchT = FieldToMatch>
    void SetFieldToMatch(FieldToMatchT&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::forward<FieldToMatchT>(value); }
    template<typename FieldToMatchT = FieldToMatch>
    XssMatchTuple& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>FieldToMatch</code>
     * before inspecting it for a match.</p> <p>You can only specify a single type of
     * TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're concerned that
     * attackers are injecting an operating system command line command and using
     * unusual formatting to disguise some or all of the command, use this option to
     * perform the following transformations:</p> <ul> <li> <p>Delete the following
     * characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the following
     * characters: / (</p> </li> <li> <p>Replace the following characters with a space:
     * , ;</p> </li> <li> <p>Replace multiple spaces with one space</p> </li> <li>
     * <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul> <p>
     * <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline TextTransformation GetTextTransformation() const { return m_textTransformation; }
    inline bool TextTransformationHasBeenSet() const { return m_textTransformationHasBeenSet; }
    inline void SetTextTransformation(TextTransformation value) { m_textTransformationHasBeenSet = true; m_textTransformation = value; }
    inline XssMatchTuple& WithTextTransformation(TextTransformation value) { SetTextTransformation(value); return *this;}
    ///@}
  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    TextTransformation m_textTransformation{TextTransformation::NOT_SET};
    bool m_textTransformationHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
