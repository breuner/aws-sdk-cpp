﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/SuggesterStatus.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeSuggesters</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggestersResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSuggestersResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeSuggestersResult();
    AWS_CLOUDSEARCH_API DescribeSuggestersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeSuggestersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The suggesters configured for the domain specified in the request.</p>
     */
    inline const Aws::Vector<SuggesterStatus>& GetSuggesters() const{ return m_suggesters; }
    inline void SetSuggesters(const Aws::Vector<SuggesterStatus>& value) { m_suggesters = value; }
    inline void SetSuggesters(Aws::Vector<SuggesterStatus>&& value) { m_suggesters = std::move(value); }
    inline DescribeSuggestersResult& WithSuggesters(const Aws::Vector<SuggesterStatus>& value) { SetSuggesters(value); return *this;}
    inline DescribeSuggestersResult& WithSuggesters(Aws::Vector<SuggesterStatus>&& value) { SetSuggesters(std::move(value)); return *this;}
    inline DescribeSuggestersResult& AddSuggesters(const SuggesterStatus& value) { m_suggesters.push_back(value); return *this; }
    inline DescribeSuggestersResult& AddSuggesters(SuggesterStatus&& value) { m_suggesters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSuggestersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSuggestersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuggesterStatus> m_suggesters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
