﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Receipt.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListPageReceiptsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPageReceiptsResult();
    AWS_SSMCONTACTS_API ListPageReceiptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPageReceiptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPageReceiptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPageReceiptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPageReceiptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of each acknowledgement.</p>
     */
    inline const Aws::Vector<Receipt>& GetReceipts() const{ return m_receipts; }
    inline void SetReceipts(const Aws::Vector<Receipt>& value) { m_receipts = value; }
    inline void SetReceipts(Aws::Vector<Receipt>&& value) { m_receipts = std::move(value); }
    inline ListPageReceiptsResult& WithReceipts(const Aws::Vector<Receipt>& value) { SetReceipts(value); return *this;}
    inline ListPageReceiptsResult& WithReceipts(Aws::Vector<Receipt>&& value) { SetReceipts(std::move(value)); return *this;}
    inline ListPageReceiptsResult& AddReceipts(const Receipt& value) { m_receipts.push_back(value); return *this; }
    inline ListPageReceiptsResult& AddReceipts(Receipt&& value) { m_receipts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPageReceiptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPageReceiptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPageReceiptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Receipt> m_receipts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
