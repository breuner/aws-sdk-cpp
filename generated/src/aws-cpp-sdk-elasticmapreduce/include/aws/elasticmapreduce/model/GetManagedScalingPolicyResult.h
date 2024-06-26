﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
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
namespace EMR
{
namespace Model
{
  class GetManagedScalingPolicyResult
  {
  public:
    AWS_EMR_API GetManagedScalingPolicyResult();
    AWS_EMR_API GetManagedScalingPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetManagedScalingPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the managed scaling policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const{ return m_managedScalingPolicy; }
    inline void SetManagedScalingPolicy(const ManagedScalingPolicy& value) { m_managedScalingPolicy = value; }
    inline void SetManagedScalingPolicy(ManagedScalingPolicy&& value) { m_managedScalingPolicy = std::move(value); }
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(const ManagedScalingPolicy& value) { SetManagedScalingPolicy(value); return *this;}
    inline GetManagedScalingPolicyResult& WithManagedScalingPolicy(ManagedScalingPolicy&& value) { SetManagedScalingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedScalingPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedScalingPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedScalingPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ManagedScalingPolicy m_managedScalingPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
