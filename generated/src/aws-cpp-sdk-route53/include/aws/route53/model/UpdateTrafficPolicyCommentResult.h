﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/TrafficPolicy.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the traffic
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyCommentResponse">AWS
   * API Reference</a></p>
   */
  class UpdateTrafficPolicyCommentResult
  {
  public:
    AWS_ROUTE53_API UpdateTrafficPolicyCommentResult();
    AWS_ROUTE53_API UpdateTrafficPolicyCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateTrafficPolicyCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains settings for the specified traffic policy.</p>
     */
    inline const TrafficPolicy& GetTrafficPolicy() const{ return m_trafficPolicy; }
    inline void SetTrafficPolicy(const TrafficPolicy& value) { m_trafficPolicy = value; }
    inline void SetTrafficPolicy(TrafficPolicy&& value) { m_trafficPolicy = std::move(value); }
    inline UpdateTrafficPolicyCommentResult& WithTrafficPolicy(const TrafficPolicy& value) { SetTrafficPolicy(value); return *this;}
    inline UpdateTrafficPolicyCommentResult& WithTrafficPolicy(TrafficPolicy&& value) { SetTrafficPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTrafficPolicyCommentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTrafficPolicyCommentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTrafficPolicyCommentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TrafficPolicy m_trafficPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
