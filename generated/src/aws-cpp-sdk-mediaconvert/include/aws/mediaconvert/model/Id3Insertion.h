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
   * To insert ID3 tags in your output, specify two values. Use ID3 tag to specify
   * the base 64 encoded string and use Timecode to specify the time when the tag
   * should be inserted. To insert multiple ID3 tags in your output, create multiple
   * instances of ID3 insertion.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Id3Insertion">AWS
   * API Reference</a></p>
   */
  class Id3Insertion
  {
  public:
    AWS_MEDIACONVERT_API Id3Insertion();
    AWS_MEDIACONVERT_API Id3Insertion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Id3Insertion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use ID3 tag to provide a fully formed ID3 tag in base64-encode format.
     */
    inline const Aws::String& GetId3() const{ return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    inline void SetId3(const Aws::String& value) { m_id3HasBeenSet = true; m_id3 = value; }
    inline void SetId3(Aws::String&& value) { m_id3HasBeenSet = true; m_id3 = std::move(value); }
    inline void SetId3(const char* value) { m_id3HasBeenSet = true; m_id3.assign(value); }
    inline Id3Insertion& WithId3(const Aws::String& value) { SetId3(value); return *this;}
    inline Id3Insertion& WithId3(Aws::String&& value) { SetId3(std::move(value)); return *this;}
    inline Id3Insertion& WithId3(const char* value) { SetId3(value); return *this;}
    ///@}

    ///@{
    /**
     * Provide a Timecode in HH:MM:SS:FF or HH:MM:SS;FF format.
     */
    inline const Aws::String& GetTimecode() const{ return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    inline void SetTimecode(const Aws::String& value) { m_timecodeHasBeenSet = true; m_timecode = value; }
    inline void SetTimecode(Aws::String&& value) { m_timecodeHasBeenSet = true; m_timecode = std::move(value); }
    inline void SetTimecode(const char* value) { m_timecodeHasBeenSet = true; m_timecode.assign(value); }
    inline Id3Insertion& WithTimecode(const Aws::String& value) { SetTimecode(value); return *this;}
    inline Id3Insertion& WithTimecode(Aws::String&& value) { SetTimecode(std::move(value)); return *this;}
    inline Id3Insertion& WithTimecode(const char* value) { SetTimecode(value); return *this;}
    ///@}
  private:

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
