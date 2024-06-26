﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/Resolver.h>
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
namespace AppSync
{
namespace Model
{
  class ListResolversResult
  {
  public:
    AWS_APPSYNC_API ListResolversResult();
    AWS_APPSYNC_API ListResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListResolversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline const Aws::Vector<Resolver>& GetResolvers() const{ return m_resolvers; }
    inline void SetResolvers(const Aws::Vector<Resolver>& value) { m_resolvers = value; }
    inline void SetResolvers(Aws::Vector<Resolver>&& value) { m_resolvers = std::move(value); }
    inline ListResolversResult& WithResolvers(const Aws::Vector<Resolver>& value) { SetResolvers(value); return *this;}
    inline ListResolversResult& WithResolvers(Aws::Vector<Resolver>&& value) { SetResolvers(std::move(value)); return *this;}
    inline ListResolversResult& AddResolvers(const Resolver& value) { m_resolvers.push_back(value); return *this; }
    inline ListResolversResult& AddResolvers(Resolver&& value) { m_resolvers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResolversResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResolversResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResolversResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResolversResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResolversResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResolversResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Resolver> m_resolvers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
