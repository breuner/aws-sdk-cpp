﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelDescription.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DescribeModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelResult();
    AWS_LOOKOUTFORVISION_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the description of the model.</p>
     */
    inline const ModelDescription& GetModelDescription() const{ return m_modelDescription; }
    inline void SetModelDescription(const ModelDescription& value) { m_modelDescription = value; }
    inline void SetModelDescription(ModelDescription&& value) { m_modelDescription = std::move(value); }
    inline DescribeModelResult& WithModelDescription(const ModelDescription& value) { SetModelDescription(value); return *this;}
    inline DescribeModelResult& WithModelDescription(ModelDescription&& value) { SetModelDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ModelDescription m_modelDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
