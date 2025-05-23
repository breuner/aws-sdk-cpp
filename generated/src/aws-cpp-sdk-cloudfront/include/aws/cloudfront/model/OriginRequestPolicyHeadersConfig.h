﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyHeaderBehavior.h>
#include <aws/cloudfront/model/Headers.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>An object that determines whether any HTTP headers (and if so, which headers)
   * are included in requests that CloudFront sends to the origin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicyHeadersConfig">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicyHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Determines whether any HTTP headers are included in requests that CloudFront
     * sends to the origin. Valid values are:</p> <ul> <li> <p> <code>none</code> – No
     * HTTP headers in viewer requests are included in requests that CloudFront sends
     * to the origin. Even when this field is set to <code>none</code>, any headers
     * that are listed in a <code>CachePolicy</code> <i>are</i> included in origin
     * requests.</p> </li> <li> <p> <code>whitelist</code> – Only the HTTP headers that
     * are listed in the <code>Headers</code> type are included in requests that
     * CloudFront sends to the origin.</p> </li> <li> <p> <code>allViewer</code> – All
     * HTTP headers in viewer requests are included in requests that CloudFront sends
     * to the origin.</p> </li> <li> <p> <code>allViewerAndWhitelistCloudFront</code> –
     * All HTTP headers in viewer requests and the additional CloudFront headers that
     * are listed in the <code>Headers</code> type are included in requests that
     * CloudFront sends to the origin. The additional headers are added by
     * CloudFront.</p> </li> <li> <p> <code>allExcept</code> – All HTTP headers in
     * viewer requests are included in requests that CloudFront sends to the origin,
     * <i> <b>except</b> </i> for those listed in the <code>Headers</code> type, which
     * are not included.</p> </li> </ul>
     */
    inline OriginRequestPolicyHeaderBehavior GetHeaderBehavior() const { return m_headerBehavior; }
    inline bool HeaderBehaviorHasBeenSet() const { return m_headerBehaviorHasBeenSet; }
    inline void SetHeaderBehavior(OriginRequestPolicyHeaderBehavior value) { m_headerBehaviorHasBeenSet = true; m_headerBehavior = value; }
    inline OriginRequestPolicyHeadersConfig& WithHeaderBehavior(OriginRequestPolicyHeaderBehavior value) { SetHeaderBehavior(value); return *this;}
    ///@}

    ///@{
    
    inline const Headers& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Headers>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Headers>
    OriginRequestPolicyHeadersConfig& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyHeaderBehavior m_headerBehavior{OriginRequestPolicyHeaderBehavior::NOT_SET};
    bool m_headerBehaviorHasBeenSet = false;

    Headers m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
