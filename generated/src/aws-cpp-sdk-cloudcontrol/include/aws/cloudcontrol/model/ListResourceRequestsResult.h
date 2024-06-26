﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudControlApi
{
namespace Model
{
  class ListResourceRequestsResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult();
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requests that match the specified filter criteria.</p>
     */
    inline const Aws::Vector<ProgressEvent>& GetResourceRequestStatusSummaries() const{ return m_resourceRequestStatusSummaries; }
    inline void SetResourceRequestStatusSummaries(const Aws::Vector<ProgressEvent>& value) { m_resourceRequestStatusSummaries = value; }
    inline void SetResourceRequestStatusSummaries(Aws::Vector<ProgressEvent>&& value) { m_resourceRequestStatusSummaries = std::move(value); }
    inline ListResourceRequestsResult& WithResourceRequestStatusSummaries(const Aws::Vector<ProgressEvent>& value) { SetResourceRequestStatusSummaries(value); return *this;}
    inline ListResourceRequestsResult& WithResourceRequestStatusSummaries(Aws::Vector<ProgressEvent>&& value) { SetResourceRequestStatusSummaries(std::move(value)); return *this;}
    inline ListResourceRequestsResult& AddResourceRequestStatusSummaries(const ProgressEvent& value) { m_resourceRequestStatusSummaries.push_back(value); return *this; }
    inline ListResourceRequestsResult& AddResourceRequestStatusSummaries(ProgressEvent&& value) { m_resourceRequestStatusSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceRequestsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceRequestsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceRequestsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProgressEvent> m_resourceRequestStatusSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
