﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Job.h>
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
namespace IoT
{
namespace Model
{
  class DescribeJobResult
  {
  public:
    AWS_IOT_API DescribeJobResult();
    AWS_IOT_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }
    inline void SetDocumentSource(const Aws::String& value) { m_documentSource = value; }
    inline void SetDocumentSource(Aws::String&& value) { m_documentSource = std::move(value); }
    inline void SetDocumentSource(const char* value) { m_documentSource.assign(value); }
    inline DescribeJobResult& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}
    inline DescribeJobResult& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}
    inline DescribeJobResult& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the job.</p>
     */
    inline const Job& GetJob() const{ return m_job; }
    inline void SetJob(const Job& value) { m_job = value; }
    inline void SetJob(Job&& value) { m_job = std::move(value); }
    inline DescribeJobResult& WithJob(const Job& value) { SetJob(value); return *this;}
    inline DescribeJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_documentSource;

    Job m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
