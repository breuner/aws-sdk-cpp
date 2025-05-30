﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TagDescription.h>
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
  class DescribeTagsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the tags.</p>
     */
    inline const Aws::Vector<TagDescription>& GetTagDescriptions() const { return m_tagDescriptions; }
    template<typename TagDescriptionsT = Aws::Vector<TagDescription>>
    void SetTagDescriptions(TagDescriptionsT&& value) { m_tagDescriptionsHasBeenSet = true; m_tagDescriptions = std::forward<TagDescriptionsT>(value); }
    template<typename TagDescriptionsT = Aws::Vector<TagDescription>>
    DescribeTagsResult& WithTagDescriptions(TagDescriptionsT&& value) { SetTagDescriptions(std::forward<TagDescriptionsT>(value)); return *this;}
    template<typename TagDescriptionsT = TagDescription>
    DescribeTagsResult& AddTagDescriptions(TagDescriptionsT&& value) { m_tagDescriptionsHasBeenSet = true; m_tagDescriptions.emplace_back(std::forward<TagDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTagsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagDescription> m_tagDescriptions;
    bool m_tagDescriptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
