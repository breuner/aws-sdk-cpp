﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that defines a message that contains text formatted using Amazon
   * Pinpoint Voice Instructions markup.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CallInstructionsMessageType">AWS
   * API Reference</a></p>
   */
  class CallInstructionsMessageType
  {
  public:
    AWS_PINPOINTSMSVOICE_API CallInstructionsMessageType();
    AWS_PINPOINTSMSVOICE_API CallInstructionsMessageType(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API CallInstructionsMessageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The language to use when delivering the message. For a complete list of
     * supported languages, see the Amazon Polly Developer Guide.
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline CallInstructionsMessageType& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline CallInstructionsMessageType& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline CallInstructionsMessageType& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
