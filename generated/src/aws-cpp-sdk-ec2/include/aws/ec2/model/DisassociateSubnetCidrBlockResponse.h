﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SubnetIpv6CidrBlockAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DisassociateSubnetCidrBlockResponse
  {
  public:
    AWS_EC2_API DisassociateSubnetCidrBlockResponse();
    AWS_EC2_API DisassociateSubnetCidrBlockResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateSubnetCidrBlockResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv6 CIDR block association.</p>
     */
    inline const SubnetIpv6CidrBlockAssociation& GetIpv6CidrBlockAssociation() const{ return m_ipv6CidrBlockAssociation; }
    inline void SetIpv6CidrBlockAssociation(const SubnetIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociation = value; }
    inline void SetIpv6CidrBlockAssociation(SubnetIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociation = std::move(value); }
    inline DisassociateSubnetCidrBlockResponse& WithIpv6CidrBlockAssociation(const SubnetIpv6CidrBlockAssociation& value) { SetIpv6CidrBlockAssociation(value); return *this;}
    inline DisassociateSubnetCidrBlockResponse& WithIpv6CidrBlockAssociation(SubnetIpv6CidrBlockAssociation&& value) { SetIpv6CidrBlockAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }
    inline DisassociateSubnetCidrBlockResponse& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline DisassociateSubnetCidrBlockResponse& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline DisassociateSubnetCidrBlockResponse& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisassociateSubnetCidrBlockResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisassociateSubnetCidrBlockResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    SubnetIpv6CidrBlockAssociation m_ipv6CidrBlockAssociation;

    Aws::String m_subnetId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
