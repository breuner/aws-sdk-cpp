﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class TerminateProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API TerminateProvisionedProductResult();
    AWS_SERVICECATALOG_API TerminateProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API TerminateProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the result of this request.</p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }
    inline TerminateProvisionedProductResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}
    inline TerminateProvisionedProductResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TerminateProvisionedProductResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TerminateProvisionedProductResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TerminateProvisionedProductResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RecordDetail m_recordDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
