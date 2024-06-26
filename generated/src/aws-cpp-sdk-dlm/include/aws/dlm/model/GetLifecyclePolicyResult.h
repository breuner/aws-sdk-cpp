﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/LifecyclePolicy.h>
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
namespace DLM
{
namespace Model
{
  class GetLifecyclePolicyResult
  {
  public:
    AWS_DLM_API GetLifecyclePolicyResult();
    AWS_DLM_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DLM_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the lifecycle policy.</p>
     */
    inline const LifecyclePolicy& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const LifecyclePolicy& value) { m_policy = value; }
    inline void SetPolicy(LifecyclePolicy&& value) { m_policy = std::move(value); }
    inline GetLifecyclePolicyResult& WithPolicy(const LifecyclePolicy& value) { SetPolicy(value); return *this;}
    inline GetLifecyclePolicyResult& WithPolicy(LifecyclePolicy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LifecyclePolicy m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
