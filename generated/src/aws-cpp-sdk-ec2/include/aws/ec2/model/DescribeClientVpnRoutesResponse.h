﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClientVpnRoute.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeClientVpnRoutesResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnRoutesResponse();
    AWS_EC2_API DescribeClientVpnRoutesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnRoutesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Client VPN endpoint routes.</p>
     */
    inline const Aws::Vector<ClientVpnRoute>& GetRoutes() const{ return m_routes; }
    inline void SetRoutes(const Aws::Vector<ClientVpnRoute>& value) { m_routes = value; }
    inline void SetRoutes(Aws::Vector<ClientVpnRoute>&& value) { m_routes = std::move(value); }
    inline DescribeClientVpnRoutesResponse& WithRoutes(const Aws::Vector<ClientVpnRoute>& value) { SetRoutes(value); return *this;}
    inline DescribeClientVpnRoutesResponse& WithRoutes(Aws::Vector<ClientVpnRoute>&& value) { SetRoutes(std::move(value)); return *this;}
    inline DescribeClientVpnRoutesResponse& AddRoutes(const ClientVpnRoute& value) { m_routes.push_back(value); return *this; }
    inline DescribeClientVpnRoutesResponse& AddRoutes(ClientVpnRoute&& value) { m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClientVpnRoutesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClientVpnRoutesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClientVpnRoutesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeClientVpnRoutesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeClientVpnRoutesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClientVpnRoute> m_routes;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
