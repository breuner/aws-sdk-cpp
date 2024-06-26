﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallDomainListMetadata.h>
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
namespace Route53Resolver
{
namespace Model
{
  class ListFirewallDomainListsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFirewallDomainListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallDomainListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallDomainListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallDomainListMetadata>& GetFirewallDomainLists() const{ return m_firewallDomainLists; }
    inline void SetFirewallDomainLists(const Aws::Vector<FirewallDomainListMetadata>& value) { m_firewallDomainLists = value; }
    inline void SetFirewallDomainLists(Aws::Vector<FirewallDomainListMetadata>&& value) { m_firewallDomainLists = std::move(value); }
    inline ListFirewallDomainListsResult& WithFirewallDomainLists(const Aws::Vector<FirewallDomainListMetadata>& value) { SetFirewallDomainLists(value); return *this;}
    inline ListFirewallDomainListsResult& WithFirewallDomainLists(Aws::Vector<FirewallDomainListMetadata>&& value) { SetFirewallDomainLists(std::move(value)); return *this;}
    inline ListFirewallDomainListsResult& AddFirewallDomainLists(const FirewallDomainListMetadata& value) { m_firewallDomainLists.push_back(value); return *this; }
    inline ListFirewallDomainListsResult& AddFirewallDomainLists(FirewallDomainListMetadata&& value) { m_firewallDomainLists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallDomainListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallDomainListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallDomainListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallDomainListMetadata> m_firewallDomainLists;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
