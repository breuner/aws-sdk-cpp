﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/UsageTotal.h>
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
namespace Inspector2
{
namespace Model
{
  class ListUsageTotalsResult
  {
  public:
    AWS_INSPECTOR2_API ListUsageTotalsResult();
    AWS_INSPECTOR2_API ListUsageTotalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListUsageTotalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsageTotalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsageTotalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsageTotalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with details on the total usage for the requested account.</p>
     */
    inline const Aws::Vector<UsageTotal>& GetTotals() const{ return m_totals; }
    inline void SetTotals(const Aws::Vector<UsageTotal>& value) { m_totals = value; }
    inline void SetTotals(Aws::Vector<UsageTotal>&& value) { m_totals = std::move(value); }
    inline ListUsageTotalsResult& WithTotals(const Aws::Vector<UsageTotal>& value) { SetTotals(value); return *this;}
    inline ListUsageTotalsResult& WithTotals(Aws::Vector<UsageTotal>&& value) { SetTotals(std::move(value)); return *this;}
    inline ListUsageTotalsResult& AddTotals(const UsageTotal& value) { m_totals.push_back(value); return *this; }
    inline ListUsageTotalsResult& AddTotals(UsageTotal&& value) { m_totals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsageTotalsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsageTotalsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsageTotalsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<UsageTotal> m_totals;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
