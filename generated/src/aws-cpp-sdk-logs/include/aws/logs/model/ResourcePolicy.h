﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A policy enabling one or more entities to put logs to a log group in this
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ResourcePolicy
  {
  public:
    AWS_CLOUDWATCHLOGS_API ResourcePolicy() = default;
    AWS_CLOUDWATCHLOGS_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ResourcePolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    ResourcePolicy& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp showing when this policy was last updated, expressed as the number
     * of milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(long long value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline ResourcePolicy& WithLastUpdatedTime(long long value) { SetLastUpdatedTime(value); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    long long m_lastUpdatedTime{0};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
