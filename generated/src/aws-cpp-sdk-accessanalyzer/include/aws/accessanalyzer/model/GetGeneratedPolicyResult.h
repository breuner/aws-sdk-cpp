﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/JobDetails.h>
#include <aws/accessanalyzer/model/GeneratedPolicyResults.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetGeneratedPolicyResult
  {
  public:
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult();
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetGeneratedPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>GeneratedPolicyDetails</code> object that contains details about the
     * generated policy.</p>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }
    inline void SetJobDetails(const JobDetails& value) { m_jobDetails = value; }
    inline void SetJobDetails(JobDetails&& value) { m_jobDetails = std::move(value); }
    inline GetGeneratedPolicyResult& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}
    inline GetGeneratedPolicyResult& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>GeneratedPolicyResult</code> object that contains the generated
     * policies and associated details.</p>
     */
    inline const GeneratedPolicyResults& GetGeneratedPolicyResults() const{ return m_generatedPolicyResults; }
    inline void SetGeneratedPolicyResults(const GeneratedPolicyResults& value) { m_generatedPolicyResults = value; }
    inline void SetGeneratedPolicyResults(GeneratedPolicyResults&& value) { m_generatedPolicyResults = std::move(value); }
    inline GetGeneratedPolicyResult& WithGeneratedPolicyResults(const GeneratedPolicyResults& value) { SetGeneratedPolicyResults(value); return *this;}
    inline GetGeneratedPolicyResult& WithGeneratedPolicyResults(GeneratedPolicyResults&& value) { SetGeneratedPolicyResults(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGeneratedPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGeneratedPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGeneratedPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    JobDetails m_jobDetails;

    GeneratedPolicyResults m_generatedPolicyResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
