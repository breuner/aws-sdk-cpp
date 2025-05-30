﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class GetGeneratedPolicyRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API GetGeneratedPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeneratedPolicy"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;

    AWS_ACCESSANALYZER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetGeneratedPolicyRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of detail that you want to generate. You can specify whether to
     * generate policies with placeholders for resource ARNs for actions that support
     * resource level granularity in policies.</p> <p>For example, in the resource
     * section of a policy, you can receive a placeholder such as
     * <code>"Resource":"arn:aws:s3:::${BucketName}"</code> instead of
     * <code>"*"</code>.</p>
     */
    inline bool GetIncludeResourcePlaceholders() const { return m_includeResourcePlaceholders; }
    inline bool IncludeResourcePlaceholdersHasBeenSet() const { return m_includeResourcePlaceholdersHasBeenSet; }
    inline void SetIncludeResourcePlaceholders(bool value) { m_includeResourcePlaceholdersHasBeenSet = true; m_includeResourcePlaceholders = value; }
    inline GetGeneratedPolicyRequest& WithIncludeResourcePlaceholders(bool value) { SetIncludeResourcePlaceholders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of detail that you want to generate. You can specify whether to
     * generate service-level policies. </p> <p>IAM Access Analyzer uses
     * <code>iam:servicelastaccessed</code> to identify services that have been used
     * recently to create this service-level template.</p>
     */
    inline bool GetIncludeServiceLevelTemplate() const { return m_includeServiceLevelTemplate; }
    inline bool IncludeServiceLevelTemplateHasBeenSet() const { return m_includeServiceLevelTemplateHasBeenSet; }
    inline void SetIncludeServiceLevelTemplate(bool value) { m_includeServiceLevelTemplateHasBeenSet = true; m_includeServiceLevelTemplate = value; }
    inline GetGeneratedPolicyRequest& WithIncludeServiceLevelTemplate(bool value) { SetIncludeServiceLevelTemplate(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    bool m_includeResourcePlaceholders{false};
    bool m_includeResourcePlaceholdersHasBeenSet = false;

    bool m_includeServiceLevelTemplate{false};
    bool m_includeServiceLevelTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
