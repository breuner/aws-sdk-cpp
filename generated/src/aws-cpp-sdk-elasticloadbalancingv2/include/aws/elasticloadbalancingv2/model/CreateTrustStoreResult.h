﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TrustStore.h>
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
  class CreateTrustStoreResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateTrustStoreResult();
    AWS_ELASTICLOADBALANCINGV2_API CreateTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API CreateTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the trust store created.</p>
     */
    inline const Aws::Vector<TrustStore>& GetTrustStores() const{ return m_trustStores; }
    inline void SetTrustStores(const Aws::Vector<TrustStore>& value) { m_trustStores = value; }
    inline void SetTrustStores(Aws::Vector<TrustStore>&& value) { m_trustStores = std::move(value); }
    inline CreateTrustStoreResult& WithTrustStores(const Aws::Vector<TrustStore>& value) { SetTrustStores(value); return *this;}
    inline CreateTrustStoreResult& WithTrustStores(Aws::Vector<TrustStore>&& value) { SetTrustStores(std::move(value)); return *this;}
    inline CreateTrustStoreResult& AddTrustStores(const TrustStore& value) { m_trustStores.push_back(value); return *this; }
    inline CreateTrustStoreResult& AddTrustStores(TrustStore&& value) { m_trustStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateTrustStoreResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateTrustStoreResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustStore> m_trustStores;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
