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
  class CreateAppResult
  {
  public:
    AWS_SAGEMAKER_API CreateAppResult();
    AWS_SAGEMAKER_API CreateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline CreateAppResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline CreateAppResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline CreateAppResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
