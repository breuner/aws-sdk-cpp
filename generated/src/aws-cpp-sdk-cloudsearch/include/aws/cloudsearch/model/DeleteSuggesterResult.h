﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/SuggesterStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
   * <p>The result of a <code>DeleteSuggester</code> request. Contains the status of
   * the deleted suggester.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggesterResponse">AWS
   * API Reference</a></p>
   */
  class DeleteSuggesterResult
  {
  public:
    AWS_CLOUDSEARCH_API DeleteSuggesterResult();
    AWS_CLOUDSEARCH_API DeleteSuggesterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DeleteSuggesterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the suggester being deleted.</p>
     */
    inline const SuggesterStatus& GetSuggester() const{ return m_suggester; }
    inline void SetSuggester(const SuggesterStatus& value) { m_suggester = value; }
    inline void SetSuggester(SuggesterStatus&& value) { m_suggester = std::move(value); }
    inline DeleteSuggesterResult& WithSuggester(const SuggesterStatus& value) { SetSuggester(value); return *this;}
    inline DeleteSuggesterResult& WithSuggester(SuggesterStatus&& value) { SetSuggester(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeleteSuggesterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeleteSuggesterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    SuggesterStatus m_suggester;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
