﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Returns the code for the dominant language in the input text and the level of
   * confidence that Amazon Comprehend has in the accuracy of the
   * detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DominantLanguage">AWS
   * API Reference</a></p>
   */
  class DominantLanguage
  {
  public:
    AWS_COMPREHEND_API DominantLanguage();
    AWS_COMPREHEND_API DominantLanguage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DominantLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline DominantLanguage& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline DominantLanguage& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline DominantLanguage& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline DominantLanguage& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
