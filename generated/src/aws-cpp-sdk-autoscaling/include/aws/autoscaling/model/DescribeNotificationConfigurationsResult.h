﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/NotificationConfiguration.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeNotificationConfigurationsResult
  {
  public:
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult();
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The notification configurations.</p>
     */
    inline const Aws::Vector<NotificationConfiguration>& GetNotificationConfigurations() const{ return m_notificationConfigurations; }
    inline void SetNotificationConfigurations(const Aws::Vector<NotificationConfiguration>& value) { m_notificationConfigurations = value; }
    inline void SetNotificationConfigurations(Aws::Vector<NotificationConfiguration>&& value) { m_notificationConfigurations = std::move(value); }
    inline DescribeNotificationConfigurationsResult& WithNotificationConfigurations(const Aws::Vector<NotificationConfiguration>& value) { SetNotificationConfigurations(value); return *this;}
    inline DescribeNotificationConfigurationsResult& WithNotificationConfigurations(Aws::Vector<NotificationConfiguration>&& value) { SetNotificationConfigurations(std::move(value)); return *this;}
    inline DescribeNotificationConfigurationsResult& AddNotificationConfigurations(const NotificationConfiguration& value) { m_notificationConfigurations.push_back(value); return *this; }
    inline DescribeNotificationConfigurationsResult& AddNotificationConfigurations(NotificationConfiguration&& value) { m_notificationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeNotificationConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeNotificationConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeNotificationConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeNotificationConfigurationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeNotificationConfigurationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationConfiguration> m_notificationConfigurations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
