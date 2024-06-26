﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/FailedDeleteRemediationExceptionsBatch.h>
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
namespace ConfigService
{
namespace Model
{
  class DeleteRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult();
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeleteRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of failed delete remediation exceptions batch objects. Each
     * object in the batch consists of a list of failed items and failure messages.</p>
     */
    inline const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& GetFailedBatches() const{ return m_failedBatches; }
    inline void SetFailedBatches(const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& value) { m_failedBatches = value; }
    inline void SetFailedBatches(Aws::Vector<FailedDeleteRemediationExceptionsBatch>&& value) { m_failedBatches = std::move(value); }
    inline DeleteRemediationExceptionsResult& WithFailedBatches(const Aws::Vector<FailedDeleteRemediationExceptionsBatch>& value) { SetFailedBatches(value); return *this;}
    inline DeleteRemediationExceptionsResult& WithFailedBatches(Aws::Vector<FailedDeleteRemediationExceptionsBatch>&& value) { SetFailedBatches(std::move(value)); return *this;}
    inline DeleteRemediationExceptionsResult& AddFailedBatches(const FailedDeleteRemediationExceptionsBatch& value) { m_failedBatches.push_back(value); return *this; }
    inline DeleteRemediationExceptionsResult& AddFailedBatches(FailedDeleteRemediationExceptionsBatch&& value) { m_failedBatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRemediationExceptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRemediationExceptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRemediationExceptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedDeleteRemediationExceptionsBatch> m_failedBatches;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
