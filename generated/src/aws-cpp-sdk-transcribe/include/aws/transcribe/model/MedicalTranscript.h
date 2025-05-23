﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides you with the Amazon S3 URI you can use to access your
   * transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscript">AWS
   * API Reference</a></p>
   */
  class MedicalTranscript
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalTranscript() = default;
    AWS_TRANSCRIBESERVICE_API MedicalTranscript(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>Note that this is the Amazon S3 location you
     * specified in your request using the <code>OutputBucketName</code> parameter.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const { return m_transcriptFileUri; }
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }
    template<typename TranscriptFileUriT = Aws::String>
    void SetTranscriptFileUri(TranscriptFileUriT&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::forward<TranscriptFileUriT>(value); }
    template<typename TranscriptFileUriT = Aws::String>
    MedicalTranscript& WithTranscriptFileUri(TranscriptFileUriT&& value) { SetTranscriptFileUri(std::forward<TranscriptFileUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
