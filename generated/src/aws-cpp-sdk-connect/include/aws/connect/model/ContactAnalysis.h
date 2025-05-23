﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Transcript.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure that defines search criteria for contacts using analysis outputs
   * from Amazon Connect Contact Lens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactAnalysis">AWS
   * API Reference</a></p>
   */
  class ContactAnalysis
  {
  public:
    AWS_CONNECT_API ContactAnalysis() = default;
    AWS_CONNECT_API ContactAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Search criteria based on transcript analyzed by Amazon Connect Contact
     * Lens.</p>
     */
    inline const Transcript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Transcript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Transcript>
    ContactAnalysis& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}
  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
