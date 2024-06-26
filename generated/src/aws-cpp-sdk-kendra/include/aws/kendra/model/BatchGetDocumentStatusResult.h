﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/BatchGetDocumentStatusResponseError.h>
#include <aws/kendra/model/Status.h>
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
namespace kendra
{
namespace Model
{
  class BatchGetDocumentStatusResult
  {
  public:
    AWS_KENDRA_API BatchGetDocumentStatusResult();
    AWS_KENDRA_API BatchGetDocumentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchGetDocumentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline const Aws::Vector<BatchGetDocumentStatusResponseError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetDocumentStatusResponseError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetDocumentStatusResponseError>&& value) { m_errors = std::move(value); }
    inline BatchGetDocumentStatusResult& WithErrors(const Aws::Vector<BatchGetDocumentStatusResponseError>& value) { SetErrors(value); return *this;}
    inline BatchGetDocumentStatusResult& WithErrors(Aws::Vector<BatchGetDocumentStatusResponseError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetDocumentStatusResult& AddErrors(const BatchGetDocumentStatusResponseError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetDocumentStatusResult& AddErrors(BatchGetDocumentStatusResponseError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline const Aws::Vector<Status>& GetDocumentStatusList() const{ return m_documentStatusList; }
    inline void SetDocumentStatusList(const Aws::Vector<Status>& value) { m_documentStatusList = value; }
    inline void SetDocumentStatusList(Aws::Vector<Status>&& value) { m_documentStatusList = std::move(value); }
    inline BatchGetDocumentStatusResult& WithDocumentStatusList(const Aws::Vector<Status>& value) { SetDocumentStatusList(value); return *this;}
    inline BatchGetDocumentStatusResult& WithDocumentStatusList(Aws::Vector<Status>&& value) { SetDocumentStatusList(std::move(value)); return *this;}
    inline BatchGetDocumentStatusResult& AddDocumentStatusList(const Status& value) { m_documentStatusList.push_back(value); return *this; }
    inline BatchGetDocumentStatusResult& AddDocumentStatusList(Status&& value) { m_documentStatusList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetDocumentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetDocumentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetDocumentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetDocumentStatusResponseError> m_errors;

    Aws::Vector<Status> m_documentStatusList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
