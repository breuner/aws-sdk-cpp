﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ConnectionNotification.h>
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
  class DescribeVpcEndpointConnectionNotificationsResponse
  {
  public:
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse();
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The notifications.</p>
     */
    inline const Aws::Vector<ConnectionNotification>& GetConnectionNotificationSet() const{ return m_connectionNotificationSet; }
    inline void SetConnectionNotificationSet(const Aws::Vector<ConnectionNotification>& value) { m_connectionNotificationSet = value; }
    inline void SetConnectionNotificationSet(Aws::Vector<ConnectionNotification>&& value) { m_connectionNotificationSet = std::move(value); }
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithConnectionNotificationSet(const Aws::Vector<ConnectionNotification>& value) { SetConnectionNotificationSet(value); return *this;}
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithConnectionNotificationSet(Aws::Vector<ConnectionNotification>&& value) { SetConnectionNotificationSet(std::move(value)); return *this;}
    inline DescribeVpcEndpointConnectionNotificationsResponse& AddConnectionNotificationSet(const ConnectionNotification& value) { m_connectionNotificationSet.push_back(value); return *this; }
    inline DescribeVpcEndpointConnectionNotificationsResponse& AddConnectionNotificationSet(ConnectionNotification&& value) { m_connectionNotificationSet.push_back(std::move(value)); return *this; }
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
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpcEndpointConnectionNotificationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionNotification> m_connectionNotificationSet;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
