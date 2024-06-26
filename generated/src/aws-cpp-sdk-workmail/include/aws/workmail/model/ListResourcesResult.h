﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Resource.h>
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
namespace WorkMail
{
namespace Model
{
  class ListResourcesResult
  {
  public:
    AWS_WORKMAIL_API ListResourcesResult();
    AWS_WORKMAIL_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One page of the organization's resource representation.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resources = std::move(value); }
    inline ListResourcesResult& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}
    inline ListResourcesResult& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}
    inline ListResourcesResult& AddResources(const Resource& value) { m_resources.push_back(value); return *this; }
    inline ListResourcesResult& AddResources(Resource&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token used to paginate through all the organization's resources. While
     * results are still available, it has an associated value. When the last page is
     * reached, the token is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Resource> m_resources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
