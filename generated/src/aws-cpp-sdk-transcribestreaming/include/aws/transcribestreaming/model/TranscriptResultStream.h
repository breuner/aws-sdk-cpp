﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/TranscriptEvent.h>
#include <aws/transcribestreaming/model/BadRequestException.h>
#include <aws/transcribestreaming/model/LimitExceededException.h>
#include <aws/transcribestreaming/model/InternalFailureException.h>
#include <aws/transcribestreaming/model/ConflictException.h>
#include <aws/transcribestreaming/model/ServiceUnavailableException.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains detailed information about your streaming session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/TranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class TranscriptResultStream
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptResultStream();
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains <code>Transcript</code>, which contains <code>Results</code>. The
     * <code/> object contains a set of transcription results from one or more audio
     * segments, along with additional information per your request parameters.</p>
     */
    inline const TranscriptEvent& GetTranscriptEvent() const{ return m_transcriptEvent; }
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }
    inline void SetTranscriptEvent(const TranscriptEvent& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = value; }
    inline void SetTranscriptEvent(TranscriptEvent&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::move(value); }
    inline TranscriptResultStream& WithTranscriptEvent(const TranscriptEvent& value) { SetTranscriptEvent(value); return *this;}
    inline TranscriptResultStream& WithTranscriptEvent(TranscriptEvent&& value) { SetTranscriptEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A client error occurred when the stream was created. Check the parameters of
     * the request and try your request again.</p>
     */
    inline const BadRequestException& GetBadRequestException() const{ return m_badRequestException; }
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }
    inline void SetBadRequestException(const BadRequestException& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = value; }
    inline void SetBadRequestException(BadRequestException&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::move(value); }
    inline TranscriptResultStream& WithBadRequestException(const BadRequestException& value) { SetBadRequestException(value); return *this;}
    inline TranscriptResultStream& WithBadRequestException(BadRequestException&& value) { SetBadRequestException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your client has exceeded one of the Amazon Transcribe limits. This is
     * typically the audio length limit. Break your audio stream into smaller chunks
     * and try your request again.</p>
     */
    inline const LimitExceededException& GetLimitExceededException() const{ return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    inline void SetLimitExceededException(const LimitExceededException& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = value; }
    inline void SetLimitExceededException(LimitExceededException&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::move(value); }
    inline TranscriptResultStream& WithLimitExceededException(const LimitExceededException& value) { SetLimitExceededException(value); return *this;}
    inline TranscriptResultStream& WithLimitExceededException(LimitExceededException&& value) { SetLimitExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A problem occurred while processing the audio. Amazon Transcribe terminated
     * processing.</p>
     */
    inline const InternalFailureException& GetInternalFailureException() const{ return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    inline void SetInternalFailureException(const InternalFailureException& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = value; }
    inline void SetInternalFailureException(InternalFailureException&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::move(value); }
    inline TranscriptResultStream& WithInternalFailureException(const InternalFailureException& value) { SetInternalFailureException(value); return *this;}
    inline TranscriptResultStream& WithInternalFailureException(InternalFailureException&& value) { SetInternalFailureException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new stream started with the same session ID. The current stream has been
     * terminated.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }
    inline TranscriptResultStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}
    inline TranscriptResultStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service is currently unavailable. Try your request later.</p>
     */
    inline const ServiceUnavailableException& GetServiceUnavailableException() const{ return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    inline void SetServiceUnavailableException(const ServiceUnavailableException& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = value; }
    inline void SetServiceUnavailableException(ServiceUnavailableException&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::move(value); }
    inline TranscriptResultStream& WithServiceUnavailableException(const ServiceUnavailableException& value) { SetServiceUnavailableException(value); return *this;}
    inline TranscriptResultStream& WithServiceUnavailableException(ServiceUnavailableException&& value) { SetServiceUnavailableException(std::move(value)); return *this;}
    ///@}
  private:

    TranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet = false;

    BadRequestException m_badRequestException;
    bool m_badRequestExceptionHasBeenSet = false;

    LimitExceededException m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet = false;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    ServiceUnavailableException m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
