﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RenderingError.h>
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
  class RenderUiTemplateResult
  {
  public:
    AWS_SAGEMAKER_API RenderUiTemplateResult();
    AWS_SAGEMAKER_API RenderUiTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API RenderUiTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline const Aws::String& GetRenderedContent() const{ return m_renderedContent; }
    inline void SetRenderedContent(const Aws::String& value) { m_renderedContent = value; }
    inline void SetRenderedContent(Aws::String&& value) { m_renderedContent = std::move(value); }
    inline void SetRenderedContent(const char* value) { m_renderedContent.assign(value); }
    inline RenderUiTemplateResult& WithRenderedContent(const Aws::String& value) { SetRenderedContent(value); return *this;}
    inline RenderUiTemplateResult& WithRenderedContent(Aws::String&& value) { SetRenderedContent(std::move(value)); return *this;}
    inline RenderUiTemplateResult& WithRenderedContent(const char* value) { SetRenderedContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline const Aws::Vector<RenderingError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<RenderingError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<RenderingError>&& value) { m_errors = std::move(value); }
    inline RenderUiTemplateResult& WithErrors(const Aws::Vector<RenderingError>& value) { SetErrors(value); return *this;}
    inline RenderUiTemplateResult& WithErrors(Aws::Vector<RenderingError>&& value) { SetErrors(std::move(value)); return *this;}
    inline RenderUiTemplateResult& AddErrors(const RenderingError& value) { m_errors.push_back(value); return *this; }
    inline RenderUiTemplateResult& AddErrors(RenderingError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RenderUiTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RenderUiTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RenderUiTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_renderedContent;

    Aws::Vector<RenderingError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
