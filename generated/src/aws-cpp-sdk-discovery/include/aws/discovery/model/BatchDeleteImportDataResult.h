﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/BatchDeleteImportDataError.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class BatchDeleteImportDataResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Error messages returned for each import task that you deleted as a response
     * for this command.</p>
     */
    inline const Aws::Vector<BatchDeleteImportDataError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteImportDataError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteImportDataError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteImportDataResult& WithErrors(const Aws::Vector<BatchDeleteImportDataError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteImportDataResult& WithErrors(Aws::Vector<BatchDeleteImportDataError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteImportDataResult& AddErrors(const BatchDeleteImportDataError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteImportDataResult& AddErrors(BatchDeleteImportDataError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteImportDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteImportDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteImportDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteImportDataError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
