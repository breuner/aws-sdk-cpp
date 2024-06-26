﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningJob.h>
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
namespace signer
{
namespace Model
{
  class ListSigningJobsResult
  {
  public:
    AWS_SIGNER_API ListSigningJobsResult();
    AWS_SIGNER_API ListSigningJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListSigningJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of your signing jobs.</p>
     */
    inline const Aws::Vector<SigningJob>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<SigningJob>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<SigningJob>&& value) { m_jobs = std::move(value); }
    inline ListSigningJobsResult& WithJobs(const Aws::Vector<SigningJob>& value) { SetJobs(value); return *this;}
    inline ListSigningJobsResult& WithJobs(Aws::Vector<SigningJob>&& value) { SetJobs(std::move(value)); return *this;}
    inline ListSigningJobsResult& AddJobs(const SigningJob& value) { m_jobs.push_back(value); return *this; }
    inline ListSigningJobsResult& AddJobs(SigningJob&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSigningJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSigningJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSigningJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSigningJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSigningJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSigningJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SigningJob> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
