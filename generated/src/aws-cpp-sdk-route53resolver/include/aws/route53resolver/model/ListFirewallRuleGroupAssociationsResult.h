﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociation.h>
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
  class ListFirewallRuleGroupAssociationsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListFirewallRuleGroupAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of your firewall rule group associations.</p> <p>This might be a
     * partial list of the associations that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRuleGroupAssociation>& GetFirewallRuleGroupAssociations() const{ return m_firewallRuleGroupAssociations; }
    inline void SetFirewallRuleGroupAssociations(const Aws::Vector<FirewallRuleGroupAssociation>& value) { m_firewallRuleGroupAssociations = value; }
    inline void SetFirewallRuleGroupAssociations(Aws::Vector<FirewallRuleGroupAssociation>&& value) { m_firewallRuleGroupAssociations = std::move(value); }
    inline ListFirewallRuleGroupAssociationsResult& WithFirewallRuleGroupAssociations(const Aws::Vector<FirewallRuleGroupAssociation>& value) { SetFirewallRuleGroupAssociations(value); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& WithFirewallRuleGroupAssociations(Aws::Vector<FirewallRuleGroupAssociation>&& value) { SetFirewallRuleGroupAssociations(std::move(value)); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& AddFirewallRuleGroupAssociations(const FirewallRuleGroupAssociation& value) { m_firewallRuleGroupAssociations.push_back(value); return *this; }
    inline ListFirewallRuleGroupAssociationsResult& AddFirewallRuleGroupAssociations(FirewallRuleGroupAssociation&& value) { m_firewallRuleGroupAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallRuleGroupAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallRuleGroupAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallRuleGroupAssociation> m_firewallRuleGroupAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
