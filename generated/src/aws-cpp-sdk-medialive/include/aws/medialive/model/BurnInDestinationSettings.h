﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/BurnInAlignment.h>
#include <aws/medialive/model/BurnInBackgroundColor.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/BurnInFontColor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BurnInOutlineColor.h>
#include <aws/medialive/model/BurnInShadowColor.h>
#include <aws/medialive/model/BurnInTeletextGridControl.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Burn In Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BurnInDestinationSettings">AWS
   * API Reference</a></p>
   */
  class BurnInDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API BurnInDestinationSettings();
    AWS_MEDIALIVE_API BurnInDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BurnInDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline const BurnInAlignment& GetAlignment() const{ return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(const BurnInAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline void SetAlignment(BurnInAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }
    inline BurnInDestinationSettings& WithAlignment(const BurnInAlignment& value) { SetAlignment(value); return *this;}
    inline BurnInDestinationSettings& WithAlignment(BurnInAlignment&& value) { SetAlignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline const BurnInBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const BurnInBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(BurnInBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline BurnInDestinationSettings& WithBackgroundColor(const BurnInBackgroundColor& value) { SetBackgroundColor(value); return *this;}
    inline BurnInDestinationSettings& WithBackgroundColor(BurnInBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter out is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }
    inline BurnInDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline const InputLocation& GetFont() const{ return m_font; }
    inline bool FontHasBeenSet() const { return m_fontHasBeenSet; }
    inline void SetFont(const InputLocation& value) { m_fontHasBeenSet = true; m_font = value; }
    inline void SetFont(InputLocation&& value) { m_fontHasBeenSet = true; m_font = std::move(value); }
    inline BurnInDestinationSettings& WithFont(const InputLocation& value) { SetFont(value); return *this;}
    inline BurnInDestinationSettings& WithFont(InputLocation&& value) { SetFont(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline const BurnInFontColor& GetFontColor() const{ return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(const BurnInFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline void SetFontColor(BurnInFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }
    inline BurnInDestinationSettings& WithFontColor(const BurnInFontColor& value) { SetFontColor(value); return *this;}
    inline BurnInDestinationSettings& WithFontColor(BurnInFontColor&& value) { SetFontColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }
    inline BurnInDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }
    inline BurnInDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline const Aws::String& GetFontSize() const{ return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(const Aws::String& value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline void SetFontSize(Aws::String&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::move(value); }
    inline void SetFontSize(const char* value) { m_fontSizeHasBeenSet = true; m_fontSize.assign(value); }
    inline BurnInDestinationSettings& WithFontSize(const Aws::String& value) { SetFontSize(value); return *this;}
    inline BurnInDestinationSettings& WithFontSize(Aws::String&& value) { SetFontSize(std::move(value)); return *this;}
    inline BurnInDestinationSettings& WithFontSize(const char* value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline const BurnInOutlineColor& GetOutlineColor() const{ return m_outlineColor; }
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }
    inline void SetOutlineColor(const BurnInOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }
    inline void SetOutlineColor(BurnInOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }
    inline BurnInDestinationSettings& WithOutlineColor(const BurnInOutlineColor& value) { SetOutlineColor(value); return *this;}
    inline BurnInDestinationSettings& WithOutlineColor(BurnInOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }
    inline BurnInDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline const BurnInShadowColor& GetShadowColor() const{ return m_shadowColor; }
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }
    inline void SetShadowColor(const BurnInShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }
    inline void SetShadowColor(BurnInShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }
    inline BurnInDestinationSettings& WithShadowColor(const BurnInShadowColor& value) { SetShadowColor(value); return *this;}
    inline BurnInDestinationSettings& WithShadowColor(BurnInShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter out is equivalent to setting it to 0 (transparent).  All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }
    inline BurnInDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }
    inline BurnInDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }
    inline BurnInDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline const BurnInTeletextGridControl& GetTeletextGridControl() const{ return m_teletextGridControl; }
    inline bool TeletextGridControlHasBeenSet() const { return m_teletextGridControlHasBeenSet; }
    inline void SetTeletextGridControl(const BurnInTeletextGridControl& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = value; }
    inline void SetTeletextGridControl(BurnInTeletextGridControl&& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = std::move(value); }
    inline BurnInDestinationSettings& WithTeletextGridControl(const BurnInTeletextGridControl& value) { SetTeletextGridControl(value); return *this;}
    inline BurnInDestinationSettings& WithTeletextGridControl(BurnInTeletextGridControl&& value) { SetTeletextGridControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetXPosition() const{ return m_xPosition; }
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }
    inline BurnInDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline int GetYPosition() const{ return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline BurnInDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}
  private:

    BurnInAlignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    BurnInBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet = false;

    InputLocation m_font;
    bool m_fontHasBeenSet = false;

    BurnInFontColor m_fontColor;
    bool m_fontColorHasBeenSet = false;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet = false;

    Aws::String m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    BurnInOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet = false;

    BurnInShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet = false;

    BurnInTeletextGridControl m_teletextGridControl;
    bool m_teletextGridControlHasBeenSet = false;

    int m_xPosition;
    bool m_xPositionHasBeenSet = false;

    int m_yPosition;
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
