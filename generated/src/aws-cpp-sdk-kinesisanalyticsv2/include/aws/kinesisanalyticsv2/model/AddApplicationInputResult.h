﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/InputDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AddApplicationInputResult
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationInputResult();
    AWS_KINESISANALYTICSV2_API AddApplicationInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API AddApplicationInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }
    inline AddApplicationInputResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}
    inline AddApplicationInputResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}
    inline AddApplicationInputResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }
    inline AddApplicationInputResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application input configuration. </p>
     */
    inline const Aws::Vector<InputDescription>& GetInputDescriptions() const{ return m_inputDescriptions; }
    inline void SetInputDescriptions(const Aws::Vector<InputDescription>& value) { m_inputDescriptions = value; }
    inline void SetInputDescriptions(Aws::Vector<InputDescription>&& value) { m_inputDescriptions = std::move(value); }
    inline AddApplicationInputResult& WithInputDescriptions(const Aws::Vector<InputDescription>& value) { SetInputDescriptions(value); return *this;}
    inline AddApplicationInputResult& WithInputDescriptions(Aws::Vector<InputDescription>&& value) { SetInputDescriptions(std::move(value)); return *this;}
    inline AddApplicationInputResult& AddInputDescriptions(const InputDescription& value) { m_inputDescriptions.push_back(value); return *this; }
    inline AddApplicationInputResult& AddInputDescriptions(InputDescription&& value) { m_inputDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddApplicationInputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddApplicationInputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddApplicationInputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<InputDescription> m_inputDescriptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
