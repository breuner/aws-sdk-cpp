﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/VpcEndpoint.h>
#include <aws/opensearch/model/VpcEndpointError.h>
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
namespace OpenSearchService
{
namespace Model
{
  class DescribeVpcEndpointsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeVpcEndpointsResult();
    AWS_OPENSEARCHSERVICE_API DescribeVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpoints = value; }
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpoints = std::move(value); }
    inline DescribeVpcEndpointsResult& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}
    inline DescribeVpcEndpointsResult& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(std::move(value)); return *this;}
    inline DescribeVpcEndpointsResult& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpoints.push_back(value); return *this; }
    inline DescribeVpcEndpointsResult& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any errors associated with the request.</p>
     */
    inline const Aws::Vector<VpcEndpointError>& GetVpcEndpointErrors() const{ return m_vpcEndpointErrors; }
    inline void SetVpcEndpointErrors(const Aws::Vector<VpcEndpointError>& value) { m_vpcEndpointErrors = value; }
    inline void SetVpcEndpointErrors(Aws::Vector<VpcEndpointError>&& value) { m_vpcEndpointErrors = std::move(value); }
    inline DescribeVpcEndpointsResult& WithVpcEndpointErrors(const Aws::Vector<VpcEndpointError>& value) { SetVpcEndpointErrors(value); return *this;}
    inline DescribeVpcEndpointsResult& WithVpcEndpointErrors(Aws::Vector<VpcEndpointError>&& value) { SetVpcEndpointErrors(std::move(value)); return *this;}
    inline DescribeVpcEndpointsResult& AddVpcEndpointErrors(const VpcEndpointError& value) { m_vpcEndpointErrors.push_back(value); return *this; }
    inline DescribeVpcEndpointsResult& AddVpcEndpointErrors(VpcEndpointError&& value) { m_vpcEndpointErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVpcEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVpcEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVpcEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;

    Aws::Vector<VpcEndpointError> m_vpcEndpointErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
