﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class StartMailboxExportJobResult
  {
  public:
    AWS_WORKMAIL_API StartMailboxExportJobResult();
    AWS_WORKMAIL_API StartMailboxExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API StartMailboxExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartMailboxExportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartMailboxExportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartMailboxExportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMailboxExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMailboxExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMailboxExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
