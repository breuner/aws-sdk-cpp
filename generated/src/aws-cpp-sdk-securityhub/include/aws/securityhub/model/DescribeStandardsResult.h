﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Standard.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeStandardsResult
  {
  public:
    AWS_SECURITYHUB_API DescribeStandardsResult();
    AWS_SECURITYHUB_API DescribeStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of available standards.</p>
     */
    inline const Aws::Vector<Standard>& GetStandards() const{ return m_standards; }
    inline void SetStandards(const Aws::Vector<Standard>& value) { m_standards = value; }
    inline void SetStandards(Aws::Vector<Standard>&& value) { m_standards = std::move(value); }
    inline DescribeStandardsResult& WithStandards(const Aws::Vector<Standard>& value) { SetStandards(value); return *this;}
    inline DescribeStandardsResult& WithStandards(Aws::Vector<Standard>&& value) { SetStandards(std::move(value)); return *this;}
    inline DescribeStandardsResult& AddStandards(const Standard& value) { m_standards.push_back(value); return *this; }
    inline DescribeStandardsResult& AddStandards(Standard&& value) { m_standards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeStandardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeStandardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeStandardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeStandardsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeStandardsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeStandardsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Standard> m_standards;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
