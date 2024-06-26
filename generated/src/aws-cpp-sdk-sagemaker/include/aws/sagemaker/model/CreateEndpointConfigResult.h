﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateEndpointConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointConfigResult();
    AWS_SAGEMAKER_API CreateEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline const Aws::String& GetEndpointConfigArn() const{ return m_endpointConfigArn; }
    inline void SetEndpointConfigArn(const Aws::String& value) { m_endpointConfigArn = value; }
    inline void SetEndpointConfigArn(Aws::String&& value) { m_endpointConfigArn = std::move(value); }
    inline void SetEndpointConfigArn(const char* value) { m_endpointConfigArn.assign(value); }
    inline CreateEndpointConfigResult& WithEndpointConfigArn(const Aws::String& value) { SetEndpointConfigArn(value); return *this;}
    inline CreateEndpointConfigResult& WithEndpointConfigArn(Aws::String&& value) { SetEndpointConfigArn(std::move(value)); return *this;}
    inline CreateEndpointConfigResult& WithEndpointConfigArn(const char* value) { SetEndpointConfigArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEndpointConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEndpointConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEndpointConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
