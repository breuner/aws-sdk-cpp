﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/HttpTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  class InvokeWithResponseStreamInitialResponse
  {
  public:
    AWS_LAMBDA_API InvokeWithResponseStreamInitialResponse() = default;
    AWS_LAMBDA_API InvokeWithResponseStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API InvokeWithResponseStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API InvokeWithResponseStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a successful request, the HTTP status code is in the 200 range. For the
     * <code>RequestResponse</code> invocation type, this status code is 200. For the
     * <code>DryRun</code> invocation type, this status code is 204.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline InvokeWithResponseStreamInitialResponse& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline const Aws::String& GetExecutedVersion() const { return m_executedVersion; }
    inline bool ExecutedVersionHasBeenSet() const { return m_executedVersionHasBeenSet; }
    template<typename ExecutedVersionT = Aws::String>
    void SetExecutedVersion(ExecutedVersionT&& value) { m_executedVersionHasBeenSet = true; m_executedVersion = std::forward<ExecutedVersionT>(value); }
    template<typename ExecutedVersionT = Aws::String>
    InvokeWithResponseStreamInitialResponse& WithExecutedVersion(ExecutedVersionT&& value) { SetExecutedVersion(std::forward<ExecutedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data the stream is returning.</p>
     */
    inline const Aws::String& GetResponseStreamContentType() const { return m_responseStreamContentType; }
    inline bool ResponseStreamContentTypeHasBeenSet() const { return m_responseStreamContentTypeHasBeenSet; }
    template<typename ResponseStreamContentTypeT = Aws::String>
    void SetResponseStreamContentType(ResponseStreamContentTypeT&& value) { m_responseStreamContentTypeHasBeenSet = true; m_responseStreamContentType = std::forward<ResponseStreamContentTypeT>(value); }
    template<typename ResponseStreamContentTypeT = Aws::String>
    InvokeWithResponseStreamInitialResponse& WithResponseStreamContentType(ResponseStreamContentTypeT&& value) { SetResponseStreamContentType(std::forward<ResponseStreamContentTypeT>(value)); return *this;}
    ///@}
  private:

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_executedVersion;
    bool m_executedVersionHasBeenSet = false;

    Aws::String m_responseStreamContentType;
    bool m_responseStreamContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
