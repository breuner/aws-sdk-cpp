﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Offering.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListOfferingsResult
  {
  public:
    AWS_MEDIACONNECT_API ListOfferingsResult();
    AWS_MEDIACONNECT_API ListOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListOfferings request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListOfferings request a second
     * time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of offerings that are available to this account in the current AWS
     * Region.
     */
    inline const Aws::Vector<Offering>& GetOfferings() const{ return m_offerings; }
    inline void SetOfferings(const Aws::Vector<Offering>& value) { m_offerings = value; }
    inline void SetOfferings(Aws::Vector<Offering>&& value) { m_offerings = std::move(value); }
    inline ListOfferingsResult& WithOfferings(const Aws::Vector<Offering>& value) { SetOfferings(value); return *this;}
    inline ListOfferingsResult& WithOfferings(Aws::Vector<Offering>&& value) { SetOfferings(std::move(value)); return *this;}
    inline ListOfferingsResult& AddOfferings(const Offering& value) { m_offerings.push_back(value); return *this; }
    inline ListOfferingsResult& AddOfferings(Offering&& value) { m_offerings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOfferingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOfferingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOfferingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Offering> m_offerings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
