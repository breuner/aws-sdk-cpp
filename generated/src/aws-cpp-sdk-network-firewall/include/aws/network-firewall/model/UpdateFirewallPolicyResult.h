﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallPolicyResponse.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class UpdateFirewallPolicyResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult();
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }
    inline UpdateFirewallPolicyResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateFirewallPolicyResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateFirewallPolicyResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline const FirewallPolicyResponse& GetFirewallPolicyResponse() const{ return m_firewallPolicyResponse; }
    inline void SetFirewallPolicyResponse(const FirewallPolicyResponse& value) { m_firewallPolicyResponse = value; }
    inline void SetFirewallPolicyResponse(FirewallPolicyResponse&& value) { m_firewallPolicyResponse = std::move(value); }
    inline UpdateFirewallPolicyResult& WithFirewallPolicyResponse(const FirewallPolicyResponse& value) { SetFirewallPolicyResponse(value); return *this;}
    inline UpdateFirewallPolicyResult& WithFirewallPolicyResponse(FirewallPolicyResponse&& value) { SetFirewallPolicyResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFirewallPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFirewallPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFirewallPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;

    FirewallPolicyResponse m_firewallPolicyResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
