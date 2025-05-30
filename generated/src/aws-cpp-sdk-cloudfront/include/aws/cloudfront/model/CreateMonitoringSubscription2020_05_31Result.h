﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/MonitoringSubscription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFront
{
namespace Model
{
  class CreateMonitoringSubscription2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result() = default;
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline const MonitoringSubscription& GetMonitoringSubscription() const { return m_monitoringSubscription; }
    template<typename MonitoringSubscriptionT = MonitoringSubscription>
    void SetMonitoringSubscription(MonitoringSubscriptionT&& value) { m_monitoringSubscriptionHasBeenSet = true; m_monitoringSubscription = std::forward<MonitoringSubscriptionT>(value); }
    template<typename MonitoringSubscriptionT = MonitoringSubscription>
    CreateMonitoringSubscription2020_05_31Result& WithMonitoringSubscription(MonitoringSubscriptionT&& value) { SetMonitoringSubscription(std::forward<MonitoringSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMonitoringSubscription2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MonitoringSubscription m_monitoringSubscription;
    bool m_monitoringSubscriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
