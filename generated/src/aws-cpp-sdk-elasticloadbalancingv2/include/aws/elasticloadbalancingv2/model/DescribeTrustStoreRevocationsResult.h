﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocation.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class DescribeTrustStoreRevocationsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline const Aws::Vector<DescribeTrustStoreRevocation>& GetTrustStoreRevocations() const { return m_trustStoreRevocations; }
    template<typename TrustStoreRevocationsT = Aws::Vector<DescribeTrustStoreRevocation>>
    void SetTrustStoreRevocations(TrustStoreRevocationsT&& value) { m_trustStoreRevocationsHasBeenSet = true; m_trustStoreRevocations = std::forward<TrustStoreRevocationsT>(value); }
    template<typename TrustStoreRevocationsT = Aws::Vector<DescribeTrustStoreRevocation>>
    DescribeTrustStoreRevocationsResult& WithTrustStoreRevocations(TrustStoreRevocationsT&& value) { SetTrustStoreRevocations(std::forward<TrustStoreRevocationsT>(value)); return *this;}
    template<typename TrustStoreRevocationsT = DescribeTrustStoreRevocation>
    DescribeTrustStoreRevocationsResult& AddTrustStoreRevocations(TrustStoreRevocationsT&& value) { m_trustStoreRevocationsHasBeenSet = true; m_trustStoreRevocations.emplace_back(std::forward<TrustStoreRevocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeTrustStoreRevocationsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrustStoreRevocationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeTrustStoreRevocation> m_trustStoreRevocations;
    bool m_trustStoreRevocationsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
