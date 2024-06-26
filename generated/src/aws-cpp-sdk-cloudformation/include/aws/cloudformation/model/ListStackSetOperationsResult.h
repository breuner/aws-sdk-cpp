﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackSetOperationSummary.h>
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
namespace CloudFormation
{
namespace Model
{
  class ListStackSetOperationsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackSetOperationsResult();
    AWS_CLOUDFORMATION_API ListStackSetOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackSetOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>StackSetOperationSummary</code> structures that contain
     * summary information about operations for the specified stack set.</p>
     */
    inline const Aws::Vector<StackSetOperationSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<StackSetOperationSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<StackSetOperationSummary>&& value) { m_summaries = std::move(value); }
    inline ListStackSetOperationsResult& WithSummaries(const Aws::Vector<StackSetOperationSummary>& value) { SetSummaries(value); return *this;}
    inline ListStackSetOperationsResult& WithSummaries(Aws::Vector<StackSetOperationSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListStackSetOperationsResult& AddSummaries(const StackSetOperationSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListStackSetOperationsResult& AddSummaries(StackSetOperationSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all results, <code>NextToken</code> is set to a
     * token. To retrieve the next set of results, call
     * <code>ListOperationResults</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackSetOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackSetOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackSetOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackSetOperationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackSetOperationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackSetOperationSummary> m_summaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
