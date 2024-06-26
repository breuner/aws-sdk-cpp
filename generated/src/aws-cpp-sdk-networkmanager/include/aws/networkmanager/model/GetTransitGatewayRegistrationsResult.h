﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetTransitGatewayRegistrationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult();
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The transit gateway registrations.</p>
     */
    inline const Aws::Vector<TransitGatewayRegistration>& GetTransitGatewayRegistrations() const{ return m_transitGatewayRegistrations; }
    inline void SetTransitGatewayRegistrations(const Aws::Vector<TransitGatewayRegistration>& value) { m_transitGatewayRegistrations = value; }
    inline void SetTransitGatewayRegistrations(Aws::Vector<TransitGatewayRegistration>&& value) { m_transitGatewayRegistrations = std::move(value); }
    inline GetTransitGatewayRegistrationsResult& WithTransitGatewayRegistrations(const Aws::Vector<TransitGatewayRegistration>& value) { SetTransitGatewayRegistrations(value); return *this;}
    inline GetTransitGatewayRegistrationsResult& WithTransitGatewayRegistrations(Aws::Vector<TransitGatewayRegistration>&& value) { SetTransitGatewayRegistrations(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsResult& AddTransitGatewayRegistrations(const TransitGatewayRegistration& value) { m_transitGatewayRegistrations.push_back(value); return *this; }
    inline GetTransitGatewayRegistrationsResult& AddTransitGatewayRegistrations(TransitGatewayRegistration&& value) { m_transitGatewayRegistrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTransitGatewayRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTransitGatewayRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTransitGatewayRegistrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTransitGatewayRegistrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTransitGatewayRegistrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRegistration> m_transitGatewayRegistrations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
