﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificate.h>
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
namespace Lightsail
{
namespace Model
{
  class GetLoadBalancerTlsCertificatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult();
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificate>& GetTlsCertificates() const{ return m_tlsCertificates; }
    inline void SetTlsCertificates(const Aws::Vector<LoadBalancerTlsCertificate>& value) { m_tlsCertificates = value; }
    inline void SetTlsCertificates(Aws::Vector<LoadBalancerTlsCertificate>&& value) { m_tlsCertificates = std::move(value); }
    inline GetLoadBalancerTlsCertificatesResult& WithTlsCertificates(const Aws::Vector<LoadBalancerTlsCertificate>& value) { SetTlsCertificates(value); return *this;}
    inline GetLoadBalancerTlsCertificatesResult& WithTlsCertificates(Aws::Vector<LoadBalancerTlsCertificate>&& value) { SetTlsCertificates(std::move(value)); return *this;}
    inline GetLoadBalancerTlsCertificatesResult& AddTlsCertificates(const LoadBalancerTlsCertificate& value) { m_tlsCertificates.push_back(value); return *this; }
    inline GetLoadBalancerTlsCertificatesResult& AddTlsCertificates(LoadBalancerTlsCertificate&& value) { m_tlsCertificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLoadBalancerTlsCertificatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLoadBalancerTlsCertificatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLoadBalancerTlsCertificatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBalancerTlsCertificate> m_tlsCertificates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
