﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPolicyTable.h>
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
  class DescribeTransitGatewayPolicyTablesResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse();
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline const Aws::Vector<TransitGatewayPolicyTable>& GetTransitGatewayPolicyTables() const{ return m_transitGatewayPolicyTables; }
    inline void SetTransitGatewayPolicyTables(const Aws::Vector<TransitGatewayPolicyTable>& value) { m_transitGatewayPolicyTables = value; }
    inline void SetTransitGatewayPolicyTables(Aws::Vector<TransitGatewayPolicyTable>&& value) { m_transitGatewayPolicyTables = std::move(value); }
    inline DescribeTransitGatewayPolicyTablesResponse& WithTransitGatewayPolicyTables(const Aws::Vector<TransitGatewayPolicyTable>& value) { SetTransitGatewayPolicyTables(value); return *this;}
    inline DescribeTransitGatewayPolicyTablesResponse& WithTransitGatewayPolicyTables(Aws::Vector<TransitGatewayPolicyTable>&& value) { SetTransitGatewayPolicyTables(std::move(value)); return *this;}
    inline DescribeTransitGatewayPolicyTablesResponse& AddTransitGatewayPolicyTables(const TransitGatewayPolicyTable& value) { m_transitGatewayPolicyTables.push_back(value); return *this; }
    inline DescribeTransitGatewayPolicyTablesResponse& AddTransitGatewayPolicyTables(TransitGatewayPolicyTable&& value) { m_transitGatewayPolicyTables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTransitGatewayPolicyTablesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTransitGatewayPolicyTablesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTransitGatewayPolicyTablesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayPolicyTable> m_transitGatewayPolicyTables;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
