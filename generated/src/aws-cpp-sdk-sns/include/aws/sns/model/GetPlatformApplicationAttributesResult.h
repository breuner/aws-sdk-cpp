﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for <code>GetPlatformApplicationAttributes</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetPlatformApplicationAttributesResult
  {
  public:
    AWS_SNS_API GetPlatformApplicationAttributesResult() = default;
    AWS_SNS_API GetPlatformApplicationAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetPlatformApplicationAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>AppleCertificateExpiryDate</code> – The expiry date of the SSL certificate
     * used to configure certificate-based authentication.</p> </li> <li> <p>
     * <code>ApplePlatformTeamID</code> – The Apple developer account ID used to
     * configure token-based authentication.</p> </li> <li> <p>
     * <code>ApplePlatformBundleID</code> – The app identifier used to configure
     * token-based authentication.</p> </li> <li> <p> <code>AuthenticationMethod</code>
     * – Returns the credential type used when sending push notifications from
     * application to APNS/APNS_Sandbox, or application to GCM.</p> <ul> <li> <p>APNS –
     * Returns the token or certificate.</p> </li> <li> <p>GCM – Returns the token or
     * key.</p> </li> </ul> </li> <li> <p> <code>EventEndpointCreated</code> – Topic
     * ARN to which EndpointCreated event notifications should be sent.</p> </li> <li>
     * <p> <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetPlatformApplicationAttributesResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetPlatformApplicationAttributesResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetPlatformApplicationAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
