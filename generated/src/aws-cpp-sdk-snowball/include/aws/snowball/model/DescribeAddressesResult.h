﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/Address.h>
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
namespace Snowball
{
namespace Model
{
  class DescribeAddressesResult
  {
  public:
    AWS_SNOWBALL_API DescribeAddressesResult();
    AWS_SNOWBALL_API DescribeAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Snow device shipping addresses that were created for this account.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addresses = value; }
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addresses = std::move(value); }
    inline DescribeAddressesResult& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}
    inline DescribeAddressesResult& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}
    inline DescribeAddressesResult& AddAddresses(const Address& value) { m_addresses.push_back(value); return *this; }
    inline DescribeAddressesResult& AddAddresses(Address&& value) { m_addresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>DescribeAddresses</code> call,
     * your list of returned addresses will start from this point in the array.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAddressesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAddressesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAddressesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAddressesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAddressesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAddressesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Address> m_addresses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
