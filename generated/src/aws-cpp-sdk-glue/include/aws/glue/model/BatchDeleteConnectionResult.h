﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ErrorDetail.h>
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
namespace Glue
{
namespace Model
{
  class BatchDeleteConnectionResult
  {
  public:
    AWS_GLUE_API BatchDeleteConnectionResult();
    AWS_GLUE_API BatchDeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchDeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const{ return m_succeeded; }
    inline void SetSucceeded(const Aws::Vector<Aws::String>& value) { m_succeeded = value; }
    inline void SetSucceeded(Aws::Vector<Aws::String>&& value) { m_succeeded = std::move(value); }
    inline BatchDeleteConnectionResult& WithSucceeded(const Aws::Vector<Aws::String>& value) { SetSucceeded(value); return *this;}
    inline BatchDeleteConnectionResult& WithSucceeded(Aws::Vector<Aws::String>&& value) { SetSucceeded(std::move(value)); return *this;}
    inline BatchDeleteConnectionResult& AddSucceeded(const Aws::String& value) { m_succeeded.push_back(value); return *this; }
    inline BatchDeleteConnectionResult& AddSucceeded(Aws::String&& value) { m_succeeded.push_back(std::move(value)); return *this; }
    inline BatchDeleteConnectionResult& AddSucceeded(const char* value) { m_succeeded.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline const Aws::Map<Aws::String, ErrorDetail>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Map<Aws::String, ErrorDetail>& value) { m_errors = value; }
    inline void SetErrors(Aws::Map<Aws::String, ErrorDetail>&& value) { m_errors = std::move(value); }
    inline BatchDeleteConnectionResult& WithErrors(const Aws::Map<Aws::String, ErrorDetail>& value) { SetErrors(value); return *this;}
    inline BatchDeleteConnectionResult& WithErrors(Aws::Map<Aws::String, ErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteConnectionResult& AddErrors(const Aws::String& key, const ErrorDetail& value) { m_errors.emplace(key, value); return *this; }
    inline BatchDeleteConnectionResult& AddErrors(Aws::String&& key, const ErrorDetail& value) { m_errors.emplace(std::move(key), value); return *this; }
    inline BatchDeleteConnectionResult& AddErrors(const Aws::String& key, ErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }
    inline BatchDeleteConnectionResult& AddErrors(Aws::String&& key, ErrorDetail&& value) { m_errors.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchDeleteConnectionResult& AddErrors(const char* key, ErrorDetail&& value) { m_errors.emplace(key, std::move(value)); return *this; }
    inline BatchDeleteConnectionResult& AddErrors(const char* key, const ErrorDetail& value) { m_errors.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_succeeded;

    Aws::Map<Aws::String, ErrorDetail> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
