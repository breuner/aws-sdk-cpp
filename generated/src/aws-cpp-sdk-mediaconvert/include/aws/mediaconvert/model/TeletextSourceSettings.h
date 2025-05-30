﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings specific to Teletext caption sources, including Page number.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TeletextSourceSettings">AWS
   * API Reference</a></p>
   */
  class TeletextSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API TeletextSourceSettings() = default;
    AWS_MEDIACONVERT_API TeletextSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TeletextSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use Page Number to specify the three-digit hexadecimal page number that will be
     * used for Teletext captions. Do not use this setting if you are passing through
     * teletext from the input source to output.
     */
    inline const Aws::String& GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    template<typename PageNumberT = Aws::String>
    void SetPageNumber(PageNumberT&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::forward<PageNumberT>(value); }
    template<typename PageNumberT = Aws::String>
    TeletextSourceSettings& WithPageNumber(PageNumberT&& value) { SetPageNumber(std::forward<PageNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
