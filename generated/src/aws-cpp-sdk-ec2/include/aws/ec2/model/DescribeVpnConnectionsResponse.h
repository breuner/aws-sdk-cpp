﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnConnection.h>
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
  /**
   * <p>Contains the output of DescribeVpnConnections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnectionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeVpnConnectionsResponse
  {
  public:
    AWS_EC2_API DescribeVpnConnectionsResponse();
    AWS_EC2_API DescribeVpnConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpnConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline const Aws::Vector<VpnConnection>& GetVpnConnections() const{ return m_vpnConnections; }
    inline void SetVpnConnections(const Aws::Vector<VpnConnection>& value) { m_vpnConnections = value; }
    inline void SetVpnConnections(Aws::Vector<VpnConnection>&& value) { m_vpnConnections = std::move(value); }
    inline DescribeVpnConnectionsResponse& WithVpnConnections(const Aws::Vector<VpnConnection>& value) { SetVpnConnections(value); return *this;}
    inline DescribeVpnConnectionsResponse& WithVpnConnections(Aws::Vector<VpnConnection>&& value) { SetVpnConnections(std::move(value)); return *this;}
    inline DescribeVpnConnectionsResponse& AddVpnConnections(const VpnConnection& value) { m_vpnConnections.push_back(value); return *this; }
    inline DescribeVpnConnectionsResponse& AddVpnConnections(VpnConnection&& value) { m_vpnConnections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpnConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpnConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpnConnection> m_vpnConnections;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
