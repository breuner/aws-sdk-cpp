﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/textract/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/LendingResult.h>
#include <aws/textract/model/Warning.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{
  class GetLendingAnalysisResult
  {
  public:
    AWS_TEXTRACT_API GetLendingAnalysisResult();
    AWS_TEXTRACT_API GetLendingAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetLendingAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline GetLendingAnalysisResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline GetLendingAnalysisResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the lending analysis job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetLendingAnalysisResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline GetLendingAnalysisResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of lending
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetLendingAnalysisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetLendingAnalysisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Holds the information returned by one of AmazonTextract's document analysis
     * operations for the pinstripe.</p>
     */
    inline const Aws::Vector<LendingResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<LendingResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<LendingResult>&& value) { m_results = std::move(value); }
    inline GetLendingAnalysisResult& WithResults(const Aws::Vector<LendingResult>& value) { SetResults(value); return *this;}
    inline GetLendingAnalysisResult& WithResults(Aws::Vector<LendingResult>&& value) { SetResults(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& AddResults(const LendingResult& value) { m_results.push_back(value); return *this; }
    inline GetLendingAnalysisResult& AddResults(LendingResult&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of warnings that occurred during the lending analysis operation. </p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }
    inline GetLendingAnalysisResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}
    inline GetLendingAnalysisResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }
    inline GetLendingAnalysisResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns if the lending analysis job could not be completed. Contains
     * explanation for what error occurred. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetLendingAnalysisResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetLendingAnalysisResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current model version of the Analyze Lending API.</p>
     */
    inline const Aws::String& GetAnalyzeLendingModelVersion() const{ return m_analyzeLendingModelVersion; }
    inline void SetAnalyzeLendingModelVersion(const Aws::String& value) { m_analyzeLendingModelVersion = value; }
    inline void SetAnalyzeLendingModelVersion(Aws::String&& value) { m_analyzeLendingModelVersion = std::move(value); }
    inline void SetAnalyzeLendingModelVersion(const char* value) { m_analyzeLendingModelVersion.assign(value); }
    inline GetLendingAnalysisResult& WithAnalyzeLendingModelVersion(const Aws::String& value) { SetAnalyzeLendingModelVersion(value); return *this;}
    inline GetLendingAnalysisResult& WithAnalyzeLendingModelVersion(Aws::String&& value) { SetAnalyzeLendingModelVersion(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& WithAnalyzeLendingModelVersion(const char* value) { SetAnalyzeLendingModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLendingAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLendingAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLendingAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    Aws::String m_nextToken;

    Aws::Vector<LendingResult> m_results;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeLendingModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
