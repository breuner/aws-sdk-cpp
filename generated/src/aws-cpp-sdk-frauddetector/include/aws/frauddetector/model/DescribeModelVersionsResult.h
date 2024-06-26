﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelVersionDetail.h>
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
namespace FraudDetector
{
namespace Model
{
  class DescribeModelVersionsResult
  {
  public:
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult();
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model version details.</p>
     */
    inline const Aws::Vector<ModelVersionDetail>& GetModelVersionDetails() const{ return m_modelVersionDetails; }
    inline void SetModelVersionDetails(const Aws::Vector<ModelVersionDetail>& value) { m_modelVersionDetails = value; }
    inline void SetModelVersionDetails(Aws::Vector<ModelVersionDetail>&& value) { m_modelVersionDetails = std::move(value); }
    inline DescribeModelVersionsResult& WithModelVersionDetails(const Aws::Vector<ModelVersionDetail>& value) { SetModelVersionDetails(value); return *this;}
    inline DescribeModelVersionsResult& WithModelVersionDetails(Aws::Vector<ModelVersionDetail>&& value) { SetModelVersionDetails(std::move(value)); return *this;}
    inline DescribeModelVersionsResult& AddModelVersionDetails(const ModelVersionDetail& value) { m_modelVersionDetails.push_back(value); return *this; }
    inline DescribeModelVersionsResult& AddModelVersionDetails(ModelVersionDetail&& value) { m_modelVersionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeModelVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeModelVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeModelVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ModelVersionDetail> m_modelVersionDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
