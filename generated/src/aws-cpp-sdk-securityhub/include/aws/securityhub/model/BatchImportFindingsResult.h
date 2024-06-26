﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ImportFindingsError.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchImportFindingsResult
  {
  public:
    AWS_SECURITYHUB_API BatchImportFindingsResult();
    AWS_SECURITYHUB_API BatchImportFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchImportFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of findings that failed to import.</p>
     */
    inline int GetFailedCount() const{ return m_failedCount; }
    inline void SetFailedCount(int value) { m_failedCount = value; }
    inline BatchImportFindingsResult& WithFailedCount(int value) { SetFailedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings that were successfully imported.</p>
     */
    inline int GetSuccessCount() const{ return m_successCount; }
    inline void SetSuccessCount(int value) { m_successCount = value; }
    inline BatchImportFindingsResult& WithSuccessCount(int value) { SetSuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline const Aws::Vector<ImportFindingsError>& GetFailedFindings() const{ return m_failedFindings; }
    inline void SetFailedFindings(const Aws::Vector<ImportFindingsError>& value) { m_failedFindings = value; }
    inline void SetFailedFindings(Aws::Vector<ImportFindingsError>&& value) { m_failedFindings = std::move(value); }
    inline BatchImportFindingsResult& WithFailedFindings(const Aws::Vector<ImportFindingsError>& value) { SetFailedFindings(value); return *this;}
    inline BatchImportFindingsResult& WithFailedFindings(Aws::Vector<ImportFindingsError>&& value) { SetFailedFindings(std::move(value)); return *this;}
    inline BatchImportFindingsResult& AddFailedFindings(const ImportFindingsError& value) { m_failedFindings.push_back(value); return *this; }
    inline BatchImportFindingsResult& AddFailedFindings(ImportFindingsError&& value) { m_failedFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchImportFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchImportFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchImportFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_failedCount;

    int m_successCount;

    Aws::Vector<ImportFindingsError> m_failedFindings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
