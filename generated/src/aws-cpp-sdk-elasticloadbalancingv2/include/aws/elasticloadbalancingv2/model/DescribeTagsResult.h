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
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the tags.</p>
     */
    inline const Aws::Vector<TagDescription>& GetTagDescriptions() const{ return m_tagDescriptions; }
    inline void SetTagDescriptions(const Aws::Vector<TagDescription>& value) { m_tagDescriptions = value; }
    inline void SetTagDescriptions(Aws::Vector<TagDescription>&& value) { m_tagDescriptions = std::move(value); }
    inline DescribeTagsResult& WithTagDescriptions(const Aws::Vector<TagDescription>& value) { SetTagDescriptions(value); return *this;}
    inline DescribeTagsResult& WithTagDescriptions(Aws::Vector<TagDescription>&& value) { SetTagDescriptions(std::move(value)); return *this;}
    inline DescribeTagsResult& AddTagDescriptions(const TagDescription& value) { m_tagDescriptions.push_back(value); return *this; }
    inline DescribeTagsResult& AddTagDescriptions(TagDescription&& value) { m_tagDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTagsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTagsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagDescription> m_tagDescriptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
