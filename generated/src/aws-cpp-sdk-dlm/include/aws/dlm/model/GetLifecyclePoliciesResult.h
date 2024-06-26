﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/LifecyclePolicySummary.h>
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
namespace DLM
{
namespace Model
{
  class GetLifecyclePoliciesResult
  {
  public:
    AWS_DLM_API GetLifecyclePoliciesResult();
    AWS_DLM_API GetLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DLM_API GetLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetPolicies() const{ return m_policies; }
    inline void SetPolicies(const Aws::Vector<LifecyclePolicySummary>& value) { m_policies = value; }
    inline void SetPolicies(Aws::Vector<LifecyclePolicySummary>&& value) { m_policies = std::move(value); }
    inline GetLifecyclePoliciesResult& WithPolicies(const Aws::Vector<LifecyclePolicySummary>& value) { SetPolicies(value); return *this;}
    inline GetLifecyclePoliciesResult& WithPolicies(Aws::Vector<LifecyclePolicySummary>&& value) { SetPolicies(std::move(value)); return *this;}
    inline GetLifecyclePoliciesResult& AddPolicies(const LifecyclePolicySummary& value) { m_policies.push_back(value); return *this; }
    inline GetLifecyclePoliciesResult& AddPolicies(LifecyclePolicySummary&& value) { m_policies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLifecyclePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLifecyclePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLifecyclePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicySummary> m_policies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
