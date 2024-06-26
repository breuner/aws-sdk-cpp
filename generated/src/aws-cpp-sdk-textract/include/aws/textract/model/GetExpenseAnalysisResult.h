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
#include <aws/textract/model/ExpenseDocument.h>
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
  class GetExpenseAnalysisResult
  {
  public:
    AWS_TEXTRACT_API GetExpenseAnalysisResult();
    AWS_TEXTRACT_API GetExpenseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetExpenseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline GetExpenseAnalysisResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline GetExpenseAnalysisResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the text detection job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetExpenseAnalysisResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline GetExpenseAnalysisResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetExpenseAnalysisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetExpenseAnalysisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseDocument>& GetExpenseDocuments() const{ return m_expenseDocuments; }
    inline void SetExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { m_expenseDocuments = value; }
    inline void SetExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { m_expenseDocuments = std::move(value); }
    inline GetExpenseAnalysisResult& WithExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { SetExpenseDocuments(value); return *this;}
    inline GetExpenseAnalysisResult& WithExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { SetExpenseDocuments(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& AddExpenseDocuments(const ExpenseDocument& value) { m_expenseDocuments.push_back(value); return *this; }
    inline GetExpenseAnalysisResult& AddExpenseDocuments(ExpenseDocument&& value) { m_expenseDocuments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }
    inline GetExpenseAnalysisResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}
    inline GetExpenseAnalysisResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }
    inline GetExpenseAnalysisResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetExpenseAnalysisResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetExpenseAnalysisResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline const Aws::String& GetAnalyzeExpenseModelVersion() const{ return m_analyzeExpenseModelVersion; }
    inline void SetAnalyzeExpenseModelVersion(const Aws::String& value) { m_analyzeExpenseModelVersion = value; }
    inline void SetAnalyzeExpenseModelVersion(Aws::String&& value) { m_analyzeExpenseModelVersion = std::move(value); }
    inline void SetAnalyzeExpenseModelVersion(const char* value) { m_analyzeExpenseModelVersion.assign(value); }
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(const Aws::String& value) { SetAnalyzeExpenseModelVersion(value); return *this;}
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(Aws::String&& value) { SetAnalyzeExpenseModelVersion(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(const char* value) { SetAnalyzeExpenseModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExpenseAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExpenseAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExpenseAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    Aws::String m_nextToken;

    Aws::Vector<ExpenseDocument> m_expenseDocuments;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeExpenseModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
