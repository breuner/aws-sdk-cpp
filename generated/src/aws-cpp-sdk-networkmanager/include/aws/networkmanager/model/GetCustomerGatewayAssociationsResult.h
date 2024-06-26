﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CustomerGatewayAssociation.h>
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
  class GetCustomerGatewayAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult();
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer gateway associations.</p>
     */
    inline const Aws::Vector<CustomerGatewayAssociation>& GetCustomerGatewayAssociations() const{ return m_customerGatewayAssociations; }
    inline void SetCustomerGatewayAssociations(const Aws::Vector<CustomerGatewayAssociation>& value) { m_customerGatewayAssociations = value; }
    inline void SetCustomerGatewayAssociations(Aws::Vector<CustomerGatewayAssociation>&& value) { m_customerGatewayAssociations = std::move(value); }
    inline GetCustomerGatewayAssociationsResult& WithCustomerGatewayAssociations(const Aws::Vector<CustomerGatewayAssociation>& value) { SetCustomerGatewayAssociations(value); return *this;}
    inline GetCustomerGatewayAssociationsResult& WithCustomerGatewayAssociations(Aws::Vector<CustomerGatewayAssociation>&& value) { SetCustomerGatewayAssociations(std::move(value)); return *this;}
    inline GetCustomerGatewayAssociationsResult& AddCustomerGatewayAssociations(const CustomerGatewayAssociation& value) { m_customerGatewayAssociations.push_back(value); return *this; }
    inline GetCustomerGatewayAssociationsResult& AddCustomerGatewayAssociations(CustomerGatewayAssociation&& value) { m_customerGatewayAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCustomerGatewayAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCustomerGatewayAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCustomerGatewayAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCustomerGatewayAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCustomerGatewayAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCustomerGatewayAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerGatewayAssociation> m_customerGatewayAssociations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
