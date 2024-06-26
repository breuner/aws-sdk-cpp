﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/ResourceInfo.h>
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
namespace AppRegistry
{
namespace Model
{
  class ListAssociatedResourcesResult
  {
  public:
    AWS_APPREGISTRY_API ListAssociatedResourcesResult();
    AWS_APPREGISTRY_API ListAssociatedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAssociatedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the resources.</p>
     */
    inline const Aws::Vector<ResourceInfo>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<ResourceInfo>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<ResourceInfo>&& value) { m_resources = std::move(value); }
    inline ListAssociatedResourcesResult& WithResources(const Aws::Vector<ResourceInfo>& value) { SetResources(value); return *this;}
    inline ListAssociatedResourcesResult& WithResources(Aws::Vector<ResourceInfo>&& value) { SetResources(std::move(value)); return *this;}
    inline ListAssociatedResourcesResult& AddResources(const ResourceInfo& value) { m_resources.push_back(value); return *this; }
    inline ListAssociatedResourcesResult& AddResources(ResourceInfo&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociatedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociatedResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociatedResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociatedResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceInfo> m_resources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
